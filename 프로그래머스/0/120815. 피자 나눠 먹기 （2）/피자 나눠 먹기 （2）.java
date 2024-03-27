class Solution {
    public static int solution(int n) {
        int answer = 0;
            int a = 1;
            int b = 1;
                while(true){
                    if(n==6){
                    answer++; 
                    break;
                    }
                    if(n*a <= 6*b){
                        a++;
                    }else{
                        b++;
                        answer++;
                    }
                    if(n*a == 6*b){
                        answer++;
                        break;
                    }
                }
        return answer;
    }
}