function solution(my_string) {
    let answer = "";
    for (let char of my_string) {
        if (!['a', 'e', 'i', 'o', 'u'].includes(char)) {
            answer += char;
        }
    }
    return answer;
}
