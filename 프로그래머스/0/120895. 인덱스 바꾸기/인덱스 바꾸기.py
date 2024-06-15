def solution(my_string, num1, num2):
    # 문자열을 리스트로 변환
    str_list = list(my_string)

    # num1 위치와 num2 위치의 문자를 교환
    str_list[num1], str_list[num2] = str_list[num2], str_list[num1]

    # 리스트를 다시 문자열로 변환
    answer = ''.join(str_list)
    return answer
