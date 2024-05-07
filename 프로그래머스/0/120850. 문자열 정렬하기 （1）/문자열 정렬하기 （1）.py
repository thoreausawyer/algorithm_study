def solution(my_string):
    my_string = ''.join(filter(lambda x: not x.isalpha(), my_string))
    result = [int(char) for char in my_string]
    result.sort()
    return result