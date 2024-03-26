def solution(numbers):
    total_sum = sum(numbers)  # 배열의 모든 원소의 합 계산
    average = total_sum / len(numbers)  # 평균은 전체 합을 원소의 개수로 나눈 값
    return average