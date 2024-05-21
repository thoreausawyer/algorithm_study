function solution(my_string) {
    let answer = 0;
    
    // 문자열에서 알파벳 문자를 제거합니다.
    my_string = my_string.split('').filter(char => !/[a-zA-Z]/.test(char)).join('');
    
    // 남은 문자를 숫자로 변환하여 합산합니다.
    for (let char of my_string) {
        answer += parseInt(char, 10);
    }
    
    return answer;
}
