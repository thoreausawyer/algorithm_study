class Solution {
    public int solution(int[] numbers) {
        int answer = 0;
        int temp = 0;
        int length = numbers.length - 1;
        for(int i = 0; i < length; i++){ // 끝번호까지와 그 전번호까지만 가면되니까 idex가 for문에 미만을 하고
            // i가 커질수록 비교할 뒤의 인덱스들도 밀려나니까 커진만큼 빼줘야, 비교할 인덱스가 맞음
            for(int j = 0; j < length - i; j++){
                if(numbers[j] > numbers[j+1]){  
                    temp = numbers[j]; 
                    numbers[j] = numbers[j+1];
                    numbers[j+1] = temp;
                }
            }
        }
        answer = numbers[length] * numbers[length-1];
        return answer;
    }
}