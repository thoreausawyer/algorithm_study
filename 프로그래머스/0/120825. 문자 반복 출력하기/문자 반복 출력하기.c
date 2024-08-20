#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int n) {
    int len = strlen(my_string);
    int answer_len = len * n;
    
    // 동적 메모리 할당 (n번 반복된 결과 문자열을 저장하기 위한 공간)
    char* answer = (char*)malloc(answer_len + 1); // null 문자('\0')를 위한 공간 추가

    if (answer == NULL) {
        return NULL; // 메모리 할당 실패 시
    }
    
    int pos = 0;
    for (int i = 0; i < len; i++) {
        for (int k = 0; k < n; k++) {
            answer[pos++] = my_string[i];
        }
    }
    
    answer[pos] = '\0'; // 마지막에 null 문자 추가

    return answer;
}