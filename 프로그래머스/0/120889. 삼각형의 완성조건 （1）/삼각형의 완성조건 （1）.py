def solution(sides):
    # 배열을 오름차순으로 정렬
    sides.sort()

    # 가장 긴 변이 나머지 두 변의 합보다 작은지 확인
    if sides[2] < sides[0] + sides[1]:
        return 1  # 삼각형이 가능하면 1 반환
    else:
        return 2  # 삼각형이 불가능하면 2 반환
