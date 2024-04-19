class Solution {
     public String solution(String rsp) {
        String[] rspString = rsp.split("");
        
        StringBuilder answer = new StringBuilder();

        for (String str : rspString) {
            if(str.equals("2")){
                answer.append(0);
            }else if (str.equals("0")) {
                answer.append(5);
            }else{
                answer.append(2);
            }
        }
        return answer.toString();
    }
}