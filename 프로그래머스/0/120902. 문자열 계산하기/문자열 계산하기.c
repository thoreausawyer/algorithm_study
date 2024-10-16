#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string) {
    // 문자열을 공백으로 나누기 위해 토큰화
    char* str = strdup(my_string);
    char* token = strtok(str, " ");
    
    // 첫 번째 숫자를 정수로 변환하여 answer에 저장
    int answer = atoi(token);
    
    // 그다음 연산자와 숫자를 처리
    while (token != NULL) {
        token = strtok(NULL, " ");  // 연산자 가져오기
        
        if (token == NULL) break;  // 더 이상 연산자가 없으면 루프 종료
        
        char operator = token[0];  // 연산자 저장 (+ 또는 -)
        token = strtok(NULL, " ");  // 다음 숫자 가져오기
        
        int nextNumber = atoi(token);  // 숫자를 정수로 변환
        
        // 연산자에 따라 더하거나 빼기
        if (operator == '+') {
            answer += nextNumber;
        } else if (operator == '-') {
            answer -= nextNumber;
        }
    }
    
    free(str);  // 메모리 해제
    return answer;
}