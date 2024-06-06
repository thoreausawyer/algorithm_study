def solution(array, n):
    answer = 0
    list_ = []

    if len(array) == 1 and array[0] == n:
        answer = n
    else:
        # 리스트에 담기
        for a in array:
            list_.append(a)
        
        # n 추가 후 정렬
        if n not in list_:
            list_.append(n)
            list_.sort()
        
        # n 기준으로 앞의 수와 뒤의 수 변수 담기
        a = 101
        b = 101

        nIndex = list_.index(n)
        if nIndex - 1 != -1:
            a = list_[nIndex - 1]
        if nIndex + 1 != len(list_):
            b = list_[nIndex + 1]

        # 확인
        print(a)
        print(b)

        # n과 차
        absA = abs(a - n)
        absB = abs(b - n)

        print(absA)
        print(absB)

        if absA > absB:
            answer = b
        else:
            answer = a

    # 확인
    print(list_)

    if n in array:
        answer = n

    return answer
