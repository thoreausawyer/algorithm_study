def solution(my_string):
        str = my_string

        seen = [False] * 256  # ASCII 문자 집합에 대한 배열
        result = []

        for c in str:
            if not seen[ord(c)]:
                seen[ord(c)] = True
                result.append(c)

        return ''.join(result)