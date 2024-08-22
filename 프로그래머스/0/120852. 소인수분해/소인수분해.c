#include <stdio.h>
#include <stdlib.h>

int* solution(int n) {
    int* list = (int*)malloc(sizeof(int) * n); // 최대 n개의 소인수를 저장할 수 있는 공간 할당
    int count = 0;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            list[count++] = i; // 소인수를 리스트에 추가
        }
    }

    list[count] = 0; // 배열의 끝을 표시하기 위해 0을 추가

    return list;
}