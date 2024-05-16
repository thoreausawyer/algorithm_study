def solution(n):
    answer = 0
    for i in range(2, n + 1):
        prime = True
        for j in range(2, int(i ** 0.5) + 1):
            if i % j == 0:
                prime = False
                break
        if not prime:
            answer += 1
    return answer
