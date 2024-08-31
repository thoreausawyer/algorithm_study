#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// 배열을 정렬하는 비교 함수
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int solution(int array[], size_t array_len, int n) {
    int closest = 0;
    int min_diff = INT_MAX;

    // 배열을 정렬합니다.
    qsort(array, array_len, sizeof(int), compare);

    // n에 가장 가까운 값을 찾습니다.
    for (size_t i = 0; i < array_len; i++) {
        int diff = abs(array[i] - n);

        if (diff < min_diff) {
            min_diff = diff;
            closest = array[i];
        } else if (diff == min_diff && array[i] < closest) {
            closest = array[i];
        }
    }

    return closest;
}