function solution(numer1, denom1, numer2, denom2) {
    // 두 분수를 더한 후 분자와 분모를 구함
    let numerator = numer1 * denom2 + numer2 * denom1;
    let denominator = denom1 * denom2;

    // 최대 공약수를 구함
    let gcdValue = gcd(numerator, denominator);

    // 기약 분수로 변환
    numerator /= gcdValue;
    denominator /= gcdValue;

    // 결과를 배열로 반환
    return [numerator, denominator];
}

// 최대 공약수를 구하는 함수
function gcd(a, b) {
    while (b) {
        let temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}