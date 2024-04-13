function solution(emergency) {
    let num = Array.from({ length: emergency.length }, (_, index) => index);
    num.sort((a, b) => emergency[b] - emergency[a]);
    let result = new Array(emergency.length);
    for (let i = 0; i < emergency.length; i++) {
        result[num[i]] = i + 1;
    }
    return result;
}
