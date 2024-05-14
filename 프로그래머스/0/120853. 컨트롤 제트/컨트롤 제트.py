def solution(s):
    answer = 0
    str_list = s.split(" ")
    arr = [0] * len(str_list)
    
    for i in range(len(arr)):
        if str_list[i] == "Z":
            arr[i] = int(str_list[i-1])
            answer -= arr[i]
        else:
            arr[i] = int(str_list[i])
            answer += arr[i]
            
    return answer
