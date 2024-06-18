def solution(s):
        # 결과를 저장할 문자열
        answer = []
        
        # 한 번만 등장하는 문자 찾기
        for c in range(ord('a'), ord('z') + 1):
            char = chr(c)
            if s.find(char) != -1 and s.find(char) == s.rfind(char):
                answer.append(char)
        
        return ''.join(answer)