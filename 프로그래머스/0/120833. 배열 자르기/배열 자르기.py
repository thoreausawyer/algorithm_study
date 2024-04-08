def solution(numbers, num1, num2):
    if num1 < 0 or num2 >= len(numbers) or num1 > num2:
        return []
    return numbers[num1:num2 + 1]