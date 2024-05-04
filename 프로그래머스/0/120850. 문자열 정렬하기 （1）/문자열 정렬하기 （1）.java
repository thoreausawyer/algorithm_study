import java.util.Arrays;
class Solution {
    public int[] solution(String my_string) {
        my_string = my_string.replaceAll("[a-zA-Z]", "");
        int[] result = new int[my_string.length()];

        for(int i = 0; i <= my_string.length() - 1; i++){
            result[i] = Character.valueOf(my_string.charAt(i))-48;
        }

        Arrays.sort(result);

        return result;
    }
}