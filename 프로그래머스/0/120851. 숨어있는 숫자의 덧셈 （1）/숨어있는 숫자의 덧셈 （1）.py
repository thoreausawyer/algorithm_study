def solution(my_string):
    answer = 0
    
    my_string = ''.join(char for char in my_string if not char.isalpha())
    
    for char in my_string:
        answer += int(char)
    
    return answer
