#include <stdio.h>
#include <string.h>

int solution(char* numbers) {
    // 숫자 단어와 실제 숫자를 매핑한 배열
    char* number_map[10][2] = {
        {"zero", "0"},
        {"one", "1"},
        {"two", "2"},
        {"three", "3"},
        {"four", "4"},
        {"five", "5"},
        {"six", "6"},
        {"seven", "7"},
        {"eight", "8"},
        {"nine", "9"}
    };
    
    // 숫자 단어를 숫자로 변환
    for (int i = 0; i < 10; i++) {
        char* word = number_map[i][0];
        char* digit = number_map[i][1];

        // 단어가 문자열에 있을 경우 대체
        char* pos = strstr(numbers, word);
        while (pos != NULL) {
            // 단어를 숫자로 치환
            memmove(pos + 1, pos + strlen(word), strlen(pos + strlen(word)) + 1);
            pos[0] = digit[0];
            pos = strstr(numbers, word);
        }
    }

    // 변환된 문자열을 정수로 변환하여 반환
    return atoi(numbers);
}