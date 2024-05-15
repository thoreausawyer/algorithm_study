def solution(numbers, k):
    answer = 0
    i = 0
    count = 1
    
    while True:
        if count > k:
            break
        
        answer = numbers[i]
        
        if i == len(numbers) - 1 and len(numbers) % 2 != 0:
            i = 0
            i += 1
        elif i > len(numbers) - 1 and len(numbers) % 2 != 0:
            i = 0
            i += 2
        else:
            i += 2
            if i > len(numbers) - 1:
                i = 0
        
        count += 1
    
    return answer
