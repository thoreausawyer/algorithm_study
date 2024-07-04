def solution(my_string):

    tokens = my_string.split(" ")

    answer = int(tokens[0])

    for i in range(1, len(tokens), 2):
        operator = tokens[i]  
        next_number = int(tokens[i + 1]) 
        
        if operator == "+":
            answer += next_number
        elif operator == "-":
            answer -= next_number
    
    return answer