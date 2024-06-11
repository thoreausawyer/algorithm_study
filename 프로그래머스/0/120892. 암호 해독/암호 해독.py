def solution(cipher: str, code: int) -> str:
    answer = ""
    print(len(cipher))

    if code == 1 or len(cipher) == 1:
        answer = cipher
    else:
        for i in range(code, len(cipher) + 1, code):
            answer += cipher[i - 1]

    return answer
