#include <stdio.h>

int main(void) {
    int n; // 별의 개수를 입력받을 변수 선언
    scanf("%d", &n); // 사용자로부터 정수를 입력받음
    
    char star[101] = "";  // 별을 저장할 문자열 배열 (최대 100개의 별을 처리할 수 있도록 크기 지정)
    
    for (int i = 1; i <= n; i++) { // 1부터 n까지 반복
        star[i - 1] = '*'; // 배열에 별 추가
        star[i] = '\0'; // 배열의 끝에 null 종결자를 추가하여 문자열로 만듦
        printf("%s\n", star); // 현재까지 생성된 별을 출력
    }

    return 0; // 프로그램 종료
}
