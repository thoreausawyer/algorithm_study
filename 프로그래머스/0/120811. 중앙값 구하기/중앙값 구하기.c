#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 버블 정렬 함수
void bubble_sort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // 두 원소의 위치 교환
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// 중앙값을 찾는 함수
int solution(int array[], int n) {
    // 배열 정렬
    bubble_sort(array, n);
    
    // 중앙값 반환
    return array[n / 2];
}