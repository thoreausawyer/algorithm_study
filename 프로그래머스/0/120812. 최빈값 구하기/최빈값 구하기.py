def solution(array):
    count = {}  # 각 숫자의 등장 횟수를 저장할 딕셔너리

    # 배열 내 각 숫자의 등장 횟수를 세기
    for num in array:
        if num in count:
            count[num] += 1
        else:
            count[num] = 1

    max_count = max(count.values())  # 가장 많이 등장한 횟수
    modes = [num for num, freq in count.items() if freq == max_count]  # 가장 많이 등장한 숫자들

    # 최빈값이 여러 개인지 확인
    if len(modes) > 1:
        return -1  # 최빈값이 여러 개이면 -1 반환
    else:
        return modes[0]  # 최빈값 반환