def solution(numbers):
    length = len(numbers)
    for i in range(length - 1):
        for j in range(length - 1 - i):
            if numbers[j] > numbers[j + 1]:
                numbers[j], numbers[j + 1] = numbers[j + 1], numbers[j]

    answer = numbers[length - 1] * numbers[length - 2]
    return answer
