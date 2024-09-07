def solution(my_string):
    answer = ""
    
    for char in my_string:
        char_code = ord(char)
        
        # 대문자인 경우 (ASCII 코드가 65~90)
        if char_code < 97:
            answer += chr(char_code + 32)  # 소문자로 변환
        else:
            answer += chr(char_code - 32)  # 대문자로 변환
    
    return answer