def solution(n):
    answer = 0
    if n % 7 == 0:
        answer = n // 7
    else:
        if n // 7 > 1:
            answer = n // 7 + 1
        elif 0 < n // 7 or n // 7 <= 1:
            answer = 1
    return answer