#include <stdio.h>
#include <stdlib.h>

// 비교 함수: qsort를 위한 비교 함수
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// 최빈값을 찾는 함수
int solution(int array[], int array_len) {
    // 정렬을 수행합니다.
    qsort(array, array_len, sizeof(int), compare);

    int maxCount = 0;
    int currentCount = 1;
    int mode = array[0];
    int currentNumber = array[0];
    int uniqueModes = 1;

    for (int i = 1; i < array_len; i++) {
        if (array[i] == currentNumber) {
            currentCount++;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
                mode = currentNumber;
                uniqueModes = 1;
            } else if (currentCount == maxCount) {
                uniqueModes++;
            }
            currentNumber = array[i];
            currentCount = 1;
        }
    }

    // 마지막 숫자에 대해 확인
    if (currentCount > maxCount) {
        maxCount = currentCount;
        mode = currentNumber;
        uniqueModes = 1;
    } else if (currentCount == maxCount) {
        uniqueModes++;
    }

    if (uniqueModes > 1) {
        return -1;
    }

    return mode;
}