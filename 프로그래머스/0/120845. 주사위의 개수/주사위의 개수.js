function solution(box, n) {
    let answer = 1;
    for (let k of box) {
        answer *= Math.floor(k / n);
    }
    return answer;
}
