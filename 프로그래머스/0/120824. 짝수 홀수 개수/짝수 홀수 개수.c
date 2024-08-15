#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // 결과를 저장할 동적 배열을 할당합니다. 크기는 2 (짝수 개수와 홀수 개수).
    int* answer = (int*)malloc(2 * sizeof(int));
    
    int even_count = 0;
    int odd_count = 0;

    // num_list 배열을 순회하며 짝수와 홀수의 개수를 셉니다.
    for (size_t i = 0; i < num_list_len; i++) {
        if (num_list[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // 결과를 동적 배열에 저장합니다.
    answer[0] = even_count; // 짝수의 개수
    answer[1] = odd_count;  // 홀수의 개수

    return answer;
}