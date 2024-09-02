#include <stdio.h>
#include <stdlib.h>

int solution(int order) {
    int answer = 0;

    // order를 문자열로 변환
    char str_order[20];
    sprintf(str_order, "%d", order);

    // 문자열을 순회하면서 3의 배수인 숫자를 카운트
    for (int i = 0; str_order[i] != '\0'; i++) {
        if (str_order[i] != '0' && (str_order[i] - '0') % 3 == 0) {
            answer++;
        }
    }

    return answer;
}