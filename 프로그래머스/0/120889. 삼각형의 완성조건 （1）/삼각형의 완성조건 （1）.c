#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 비교 함수: qsort를 사용해 배열을 정렬할 때 사용
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// 삼각형 조건을 확인하는 함수
int solution(int sides[], size_t sides_len) {
    // 배열을 오름차순으로 정렬
    qsort(sides, sides_len, sizeof(int), compare);

    // 가장 긴 변이 다른 두 변의 합보다 작으면 삼각형이 성립
    if (sides[2] < sides[0] + sides[1]) {
        return 1; // 삼각형이 가능하면 1 반환
    } else {
        return 2; // 삼각형이 불가능하면 2 반환
    }
}