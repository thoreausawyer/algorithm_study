class Solution {
    public int solution(int n) {
        int answer = 0;
        if( n % 7 == 0){
            answer = n/7;
        }else{
            if(n/7 > 1){
                answer = n/7 + 1;
            }
            else if(0 < n/7 || n/7 <= 1){
                answer = 1;
            }
        }
        return answer;
    }
}