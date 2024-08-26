#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* solution(char** strlist, int strlistSize) {
    // strlist의 각 문자열 길이를 저장할 배열 동적 할당
    int* answer = (int*)malloc(sizeof(int) * strlistSize);

    // 각 문자열의 길이를 계산하여 answer 배열에 저장
    for (int i = 0; i < strlistSize; i++) {
        answer[i] = strlen(strlist[i]);
    }

    return answer;
}