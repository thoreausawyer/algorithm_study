#include <stdio.h>
#include <stdlib.h>

int* solution(int money) {
    // 결과를 저장할 배열을 동적 할당
    int* answer = (int*)malloc(2 * sizeof(int));
    if (answer == NULL) {
        // 동적 할당 실패 시 처리
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    
    // 음료의 수와 남는 돈 계산
    answer[0] = money / 5500;
    answer[1] = money % 5500;
    
    return answer;
}