#include <stdio.h>

int solution(int n) {
    int answer = 0;
    int a = 1;
    int b = 1;

    while (1) {
        if (n == 6) {
            answer += 1;
            break;
        }
        if (n * a <= 6 * b) {
            a += 1;
        } else {
            b += 1;
            answer += 1;
        }
        if (n * a == 6 * b) {
            answer += 1;
            break;
        }
    }

    return answer;
}