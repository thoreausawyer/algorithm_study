class Solution {
    public int solution(int[] numbers, int k) {
            int answer = 0;
            int i = 0;
            int count = 1;        
            while (true) {
                if(count > k) break;                
                answer = numbers[i];                    
                if(i == numbers.length - 1 && numbers.length % 2 != 0){
                    i = 0;
                    i += 1;
                }else if(i > numbers.length - 1 && numbers.length % 2 != 0){
                    i = 0;
                    i += 2;
                }else{
                    i += 2;
                    if(i > numbers.length -1) i = 0;
                }                                   
                count++;
            }
            return answer;
        }
}