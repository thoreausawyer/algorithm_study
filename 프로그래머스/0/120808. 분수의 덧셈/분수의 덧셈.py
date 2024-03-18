def solution(numer1, denom1, numer2, denom2):
    # 분자와 분모를 구함
    numerator = numer1 * denom2 + numer2 * denom1
    denominator = denom1 * denom2

    # 최대 공약수를 구함
    gcd_value = gcd(numerator, denominator)

    # 기약 분수로 변환
    numerator //= gcd_value
    denominator //= gcd_value

    return [numerator, denominator]

# 최대 공약수를 구하는 함수
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a