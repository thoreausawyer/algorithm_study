def solution(n):
    prime_factors = []
    i = 2
    while i <= n:
        if n % i == 0:
            while n % i == 0:
                n //= i
            prime_factors.append(i)
        i += 1
    return prime_factors
