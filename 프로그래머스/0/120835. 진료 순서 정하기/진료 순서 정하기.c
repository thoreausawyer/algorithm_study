#include <stdio.h>
#include <stdlib.h>

// 구조체를 사용하여 인덱스와 값을 함께 저장합니다.
typedef struct {
    int value;
    int index;
} Emergency;

// 비교 함수: 값에 따라 내림차순 정렬합니다.
int compare(const void *a, const void *b) {
    return ((Emergency*)b)->value - ((Emergency*)a)->value;
}

int* solution(int emergency[], size_t emergency_len) {
    Emergency *emergencies = (Emergency*)malloc(emergency_len * sizeof(Emergency));
    int *result = (int*)malloc(emergency_len * sizeof(int));

    // 구조체 배열에 값과 인덱스를 저장합니다.
    for (size_t i = 0; i < emergency_len; i++) {
        emergencies[i].value = emergency[i];
        emergencies[i].index = i;
    }

    // qsort를 사용하여 내림차순으로 정렬합니다.
    qsort(emergencies, emergency_len, sizeof(Emergency), compare);

    // 결과 배열에 우선순위를 저장합니다.
    for (size_t i = 0; i < emergency_len; i++) {
        result[emergencies[i].index] = i + 1;
    }

    // 동적으로 할당한 메모리를 해제합니다.
    free(emergencies);

    return result;
}