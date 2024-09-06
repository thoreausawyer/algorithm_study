function solution(my_string) {
    let answer = "";
    
    for (let i = 0; i < my_string.length; i++) {
        let charCode = my_string.charCodeAt(i);
        
        // 대문자인 경우 (ASCII 코드가 65~90)
        if (charCode < 97) {
            answer += String.fromCharCode(charCode + 32);  // 소문자로 변환
        } else {
            answer += String.fromCharCode(charCode - 32);  // 대문자로 변환
        }
    }

    return answer;
}