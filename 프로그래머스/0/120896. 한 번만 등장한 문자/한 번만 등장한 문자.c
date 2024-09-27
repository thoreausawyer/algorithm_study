#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 한 번만 등장하는 문자를 찾아 반환하는 함수
char* solution(const char* s) {
    // 결과를 저장할 동적 메모리 할당 (최대 s의 길이만큼)
    int length = strlen(s);
    char* answer = (char*)malloc((length + 1) * sizeof(char));
    int answer_index = 0;

    // 각 알파벳 문자의 등장 횟수를 저장할 배열 (알파벳 a~z까지 26개)
    int frequency[26] = {0};

    // 문자열의 각 문자에 대해 등장 횟수 기록
    for (int i = 0; i < length; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            frequency[s[i] - 'a']++;
        }
    }

    // 다시 문자열을 순회하면서 한 번만 등장하는 문자 찾기
    for (int i = 0; i < 26; i++) {
        if (frequency[i] == 1) {
            answer[answer_index++] = 'a' + i;
        }
    }

    // 결과 문자열 끝에 null 문자 추가
    answer[answer_index] = '\0';

    return answer;
}