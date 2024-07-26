#include <stdio.h>

double solution(int numbers[], int length) {
    int totalSum = 0;

    // 배열의 모든 요소의 합을 계산
    for (int i = 0; i < length; i++) {
        totalSum += numbers[i];
    }

    // 총합을 요소의 개수로 나누어 평균 계산
    double average = (double)totalSum / length;
    
    return average;
}