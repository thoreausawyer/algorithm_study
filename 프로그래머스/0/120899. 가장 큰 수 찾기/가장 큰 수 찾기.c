#include <stdio.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int* solution(int array[], size_t array_len) {
    // 최대값과 그 인덱스를 저장할 배열을 동적으로 할당합니다.
    int* answer = (int*)malloc(2 * sizeof(int));

    // 메모리 할당 실패 시 프로그램 종료
    if (answer == NULL) {
        printf("메모리 할당에 실패했습니다.\n");
        exit(1);
    }

    // 초기값 설정 (answer[0]: 최대값, answer[1]: 인덱스)
    answer[0] = array[0];
    answer[1] = 0;

    // 배열을 순회하며 최대값과 그 인덱스를 찾음
    for (size_t i = 1; i < array_len; i++) {
        if (array[i] > answer[0]) {
            answer[0] = array[i];  // 최대값 업데이트
            answer[1] = i;         // 인덱스 업데이트
        }
    }

    // 최대값과 그 인덱스를 반환
    return answer;
}