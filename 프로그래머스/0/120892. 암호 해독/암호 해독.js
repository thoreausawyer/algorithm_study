function solution(cipher, code) {
    let answer = "";

    if (code === 1 || cipher.length === 1) {
        answer = cipher;
    } else {
        for (let i = code; i <= cipher.length; i += code) {
            answer += cipher[i - 1];
        }
    }

    return answer;
}