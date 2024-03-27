def solution(n):
    answer = 0
    a = 1
    b = 1
    while True:
        if n == 6:
            answer += 1
            break
        if n * a <= 6 * b:
            a += 1
        else:
            b += 1
            answer += 1
        if n * a == 6 * b:
            answer += 1
            break
    return answer