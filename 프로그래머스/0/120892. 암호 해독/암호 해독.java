class Solution {
    public String solution(String cipher, int code) {
        String answer = "";
        System.out.println(cipher.length());

        if(code == 1 || cipher.length() == 1){
            answer = cipher;
        }else{
            for(int i = code; i <= cipher.length()-1/code; i+=code){
                answer += cipher.charAt(i-1);
            }
        }
        return answer;
    }
}