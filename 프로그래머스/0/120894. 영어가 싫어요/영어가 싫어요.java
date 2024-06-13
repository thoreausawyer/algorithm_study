class Solution {
    public long solution(String numbers) {
        Long answer = 0L;
        // 누적된 문자열 변수
        String a = "";
        // 완성된 문자열 정수 변환 누적 변수
        String addNumm = "";

        for(int i = 0; i <= numbers.length() - 1; i++){
            // 문자열 순서대로 누적
            a += numbers.charAt(i);
            // 누적된 것 비교
            if(a.equals("one")){
                addNumm += 1;
                a = "";
            }else if(a.equals("two")){
                addNumm += 2;
                a = "";
            }else if(a.equals("three")){
                addNumm += 3;
                a = "";
            }else if(a.equals("four")){
                addNumm += 4;
                a = "";
            }else if(a.equals("five")){
                addNumm += 5;
                a = "";
            }else if(a.equals("six")){
                addNumm += 6;
                a = "";
            }else if(a.equals("seven")){
                addNumm += 7;
                a = "";
            }else if(a.equals("eight")){
                addNumm += 8;
                a = "";
            }else if(a.equals("nine")){
                addNumm += 9;
                a = "";
            }else if(a.equals("zero")){
                addNumm += 0;
                a = "";
            };
        }

        answer = Long.parseLong(addNumm);
    
        return answer;
    }
}