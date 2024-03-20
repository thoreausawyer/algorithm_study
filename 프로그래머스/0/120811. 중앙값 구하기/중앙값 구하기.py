def solution(array):
    # 버블 정렬
    n = len(array)
    for i in range(n - 1):
        for j in range(n - i - 1):
            if array[j] > array[j + 1]:
                # 두 원소의 위치 교환
                array[j], array[j + 1] = array[j + 1], array[j]

    # 중앙값 저장
    answer = array[len(array) // 2]
    return answer