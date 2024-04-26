class Solution {
    public int[] solution(int[] numbers, String direction) {
        int answer = 0;
        int lengthNumbers = numbers.length - 1;
        
        for(int i = 0; i <= lengthNumbers; i++){
            if(direction.equals("right")){
                if(lengthNumbers - i - 1 < 0) break;
                answer = numbers[lengthNumbers - i - 1];
                numbers[lengthNumbers - i - 1] = numbers[lengthNumbers - i];
                numbers[lengthNumbers - i] = answer;
            }else{
                if(i + 1 > lengthNumbers) break;
                answer = numbers[i + 1];
                numbers[i + 1] = numbers[i];
                numbers[i] = answer;
            }
        }
        return numbers;
    }
}