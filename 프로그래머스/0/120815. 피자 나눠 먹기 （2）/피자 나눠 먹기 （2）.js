function solution(n) {
    let answer = 0;
    let a = 1;
    let b = 1;
    while (true) {
        if (n === 6) {
            answer += 1;
            break;
        }
        if (n * a <= 6 * b) {
            a += 1;
        } else {
            b += 1;
            answer += 1;
        }
        if (n * a === 6 * b) {
            answer += 1;
            break;
        }
    }
    return answer;
}