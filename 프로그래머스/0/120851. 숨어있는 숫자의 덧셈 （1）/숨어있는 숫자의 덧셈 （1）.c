#include <stdio.h>
#include <ctype.h>  // isdigit 함수 사용을 위해 포함
#include <string.h> // strlen 함수 사용을 위해 포함

int solution(const char* my_string) {
    int answer = 0;

    // 문자열의 각 문자를 검사하여 숫자인 경우 합산
    for (int i = 0; i < strlen(my_string); i++) {
        if (isdigit(my_string[i])) { // 문자가 숫자인지 확인
            answer += my_string[i] - '0'; // 문자를 정수로 변환 후 합산
        }
    }

    return answer;
}