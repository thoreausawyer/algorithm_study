#include <stdio.h>
#include <stdlib.h>

// 약수를 반환하는 함수 (returnSize를 사용하지 않음)
int* solution(int n) {
    // 약수를 담을 동적 배열을 넉넉하게 할당 (최대 n개의 약수가 있을 수 있음)
    int* answer = (int*)malloc(n * sizeof(int));
    int count = 0;

    // 1부터 n까지의 수 중에서 약수를 찾음
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            answer[count++] = i;  // 약수라면 배열에 저장
        }
    }

    // 배열 크기를 실제 약수 개수에 맞춰 줄임
    answer = (int*)realloc(answer, count * sizeof(int));

    return answer;  // 약수 배열만 반환
}