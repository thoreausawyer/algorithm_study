def solution(age):
    result = ""
    while age > 0:
        remainder = age % 10 
        result = chr(ord('a') + remainder) + result
        age //= 10 
    return result
