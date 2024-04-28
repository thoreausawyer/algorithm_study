def solution(box, n):
    answer = 1
    for k in box:
        answer *= k // n
    return answer