#include <stdio.h>
#include <ctype.h>  // 대소문자 변환 함수 사용을 위한 헤더

char* solution(const char* my_string) {
    static char answer[100];  // 반환할 문자열, 충분한 크기 할당
    int i = 0;

    while (my_string[i] != '\0') {  // 문자열의 끝까지 반복
        char char_code = my_string[i];
        
        // 대문자인 경우 (ASCII 코드가 65~90)
        if (char_code < 'a') {
            answer[i] = char_code + 32;  // 소문자로 변환
        } 
        // 소문자인 경우 (ASCII 코드가 97~122)
        else {
            answer[i] = char_code - 32;  // 대문자로 변환
        }
        i++;
    }
    
    answer[i] = '\0';  // 문자열 끝을 표시
    return answer;
}