function solution(order) {
    let answer = 0;
    let str = order.toString();
    str = str.replace(/0/g, '');
    for (let i = 0; i < str.length; i++) {
        if (parseInt(str.charAt(i)) % 3 === 0 && str.charAt(i) !== '0') {
            answer++;
        }
    }
    return answer;
}
