#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    // 동적 할당을 사용하여 결과 배열을 만듭니다.
    int* answer = (int*)malloc(numbers_len * sizeof(int));
    
    // 각 요소를 두 배로 곱합니다.
    for (size_t i = 0; i < numbers_len; i++) {
        answer[i] = numbers[i] * 2;
    }
    
    return answer;
}