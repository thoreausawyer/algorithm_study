def solution(emergency):
    num = [i for i in range(len(emergency))]
    num.sort(key=lambda x: emergency[x], reverse=True)
    result = [0] * len(emergency)
    for i in range(len(emergency)):
        result[num[i]] = i + 1
    return result
