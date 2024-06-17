import java.util.*;
class Solution {
    public String solution(String s) {
        // 결과를 저장할 
        StringBuilder answer = new StringBuilder();
        
        // 한 번만 등장하는 문자 찾기
        for (char c = 'a'; c <= 'z'; c++) {
            if (s.indexOf(c) != -1 && s.indexOf(c) == s.lastIndexOf(c)) {
                answer.append(c);
            }
        }

        return answer.toString();
    }
}