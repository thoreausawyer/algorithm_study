#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* cipher, int code) {
    // 초기 answer 배열을 동적 할당
    char* answer = (char*)malloc(strlen(cipher) + 1);
    int answer_index = 0;

    // code가 1이거나 cipher의 길이가 1인 경우, 전체 문자열을 반환
    if (code == 1 || strlen(cipher) == 1) {
        strcpy(answer, cipher);
    } else {
        // code의 배수 번째 문자를 answer에 추가
        for (int i = code; i <= strlen(cipher); i += code) {
            answer[answer_index++] = cipher[i - 1];
        }
        // null 종료 문자 추가
        answer[answer_index] = '\0';
    }

    return answer;
}