function solution(age) {
    let result = "";
    while (age > 0) {
        let remainder = age % 10;
        result = String.fromCharCode('a'.charCodeAt(0) + remainder) + result;
        age = Math.floor(age / 10);
    }
    return result;
}
