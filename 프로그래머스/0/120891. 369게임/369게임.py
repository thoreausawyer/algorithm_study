def solution(order):
    answer = 0
    str_order = str(order)
    str_order = str_order.replace('0', '')
    for char in str_order:
        if int(char) % 3 == 0 and char != '0':
            answer += 1
    return answer
