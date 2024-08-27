#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* solution(const char* my_string) {
    int len = strlen(my_string);
    bool seen[256] = {false}; // 256개의 ASCII 문자를 위한 배열
    char* result = (char*)malloc(len + 1); // 결과 문자열 저장용 동적 메모리 할당
    int index = 0;

    for (int i = 0; i < len; i++) {
        unsigned char c = my_string[i];
        if (!seen[c]) {
            seen[c] = true;
            result[index++] = c;
        }
    }

    result[index] = '\0'; // 결과 문자열 끝에 null 문자 추가
    return result;
}