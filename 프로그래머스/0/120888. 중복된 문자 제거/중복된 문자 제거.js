function solution(my_string) {
    let str = my_string;

    let seen = new Array(256).fill(false);
    let result = [];

    for (let i = 0; i < str.length; i++) {
        let c = str.charCodeAt(i);
        if (!seen[c]) {
            seen[c] = true;
            result.push(str.charAt(i));
        }
    }

    return result.join('');
}