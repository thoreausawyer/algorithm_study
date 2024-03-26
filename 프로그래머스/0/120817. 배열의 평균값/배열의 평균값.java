class Solution {
    public double solution(int[] numbers) {
        // 배열의 모든 원소를 더하기 위한 변수 선언
        int sum = 0;
        
        // 배열의 모든 원소를 더함
        for (int i = 0; i < numbers.length; i++) {
            sum += numbers[i];
        }
        
        // 배열의 평균 계산
        double average = (double) sum / numbers.length;
        
        return average; // 평균값 반환
    }
}
