#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int age) {
    char* result = (char*)malloc(12 * sizeof(char)); // 충분한 크기로 메모리를 할당합니다.
    if (result == NULL) {
        return NULL; // 메모리 할당 실패 시 NULL 반환
    }
    
    result[0] = '\0'; // 결과 문자열 초기화
    char temp[12]; // 중간 문자열 저장을 위한 임시 배열
    int tempIndex = 0; // 임시 배열의 인덱스

    while (age > 0) {
        int remainder = age % 10;
        temp[tempIndex++] = 'a' + remainder; // 문자를 임시 배열에 저장
        age /= 10;
    }

    // temp 배열에 저장된 문자를 역순으로 result 배열에 저장
    for (int i = 0; i < tempIndex; i++) {
        result[i] = temp[tempIndex - i - 1];
    }
    result[tempIndex] = '\0'; // 결과 문자열의 끝을 표시

    return result;
}