#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* s) {
    int answer = 0;
    char* str = strdup(s); // 문자열 s의 복사본 생성 (strtok이 원본 문자열을 수정하므로)
    char* token = strtok(str, " ");
    int prev = 0;

    while (token != NULL) {
        if (strcmp(token, "Z") == 0) {
            answer -= prev; // 이전 숫자를 빼줌
        } else {
            prev = atoi(token); // 문자열을 정수로 변환
            answer += prev;     // 숫자를 더함
        }
        token = strtok(NULL, " ");
    }

    free(str); // strdup으로 할당한 메모리 해제
    return answer;
}