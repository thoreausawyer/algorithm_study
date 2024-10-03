#include <stdio.h>
#include <string.h>  // 문자열 길이를 구하기 위한 헤더

int solution(const char* message) {
    // 문자열 길이를 구하고 2를 곱함
    int answer = strlen(message) * 2;
    return answer;
}

int main() {
    const char* message = "Hello, world!";
    
    // solution 함수 호출
    int result = solution(message);
    
    // 결과 출력
    printf("The result is: %d\n", result);
    
    return 0;
}