function solution(n) {
    let list = [];
    for (let i = 2; i <= n; i++) {
        if (n % i === 0) {
            while (n % i === 0) {
                n /= i;
            }
            list.push(i);
        }
    }
    return list;
}
