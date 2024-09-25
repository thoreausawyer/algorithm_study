
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int num1, int num2) {
    // 문자열의 길이를 계산
    int length = strlen(my_string);
    
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 문자열의 길이 + 1 (null 문자 포함)
    char* answer = (char*)malloc((length + 1) * sizeof(char));

    // 원본 문자열을 answer로 복사
    strcpy(answer, my_string);

    // num1과 num2 위치의 문자 교환
    char temp = answer[num1];
    answer[num1] = answer[num2];
    answer[num2] = temp;

    // 변환된 문자열 반환
    return answer;
}