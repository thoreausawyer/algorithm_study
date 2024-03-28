class Solution {
    public int solution(int slice, int n) {
        int answer = 1;
        while(true){
            if(n==1) break;
            if(slice*answer / n <= 1 && slice*answer >= n) { 
                break;
            }else{
                 answer++;
            }
        }
        return answer;
    }
}