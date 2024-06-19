function solution(s) {
    // 결과를 저장할 문자열 배열
    let answer = [];
    
    // 한 번만 등장하는 문자 찾기
    for (let c = 'a'.charCodeAt(0); c <= 'z'.charCodeAt(0); c++) {
        let char = String.fromCharCode(c);
        if (s.indexOf(char) !== -1 && s.indexOf(char) === s.lastIndexOf(char)) {
            answer.push(char);
        }
    }
    
    return answer.join('');
}
