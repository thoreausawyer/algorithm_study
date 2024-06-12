class Solution {
    public String solution(String my_string) {
        String answer = "";
        int a = 0;
        for(int i = 0; i<=my_string.length() - 1; i++){
            if((int)my_string.charAt(i) < 97){
                a = ((int)my_string.charAt(i) + 32);
                answer += (char)a;
            }else{
                a = ((int)my_string.charAt(i) - 32);
                answer += (char)a;
            }
        }
        return answer;
    }
}