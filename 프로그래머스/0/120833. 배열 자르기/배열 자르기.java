import java.util.Arrays;
class Solution {
    public int[] solution(int[] numbers, int num1, int num2) {
        if (num1 < 0 || num1 >= numbers.length || num2 < 0 || num2 >= numbers.length) {
            return new int[0];
        }
        return Arrays.copyOfRange(numbers, num1, num2 + 1);
    }
}