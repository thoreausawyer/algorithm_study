function solution(n) {
    let answer = 0;
    if (n % 7 === 0) {
        answer = Math.floor(n / 7);
    } else {
        if (Math.floor(n / 7) > 1) {
            answer = Math.floor(n / 7) + 1;
        } else if (0 < Math.floor(n / 7) || Math.floor(n / 7) <= 1) {
            answer = 1;
        }
    }
    return answer;
}