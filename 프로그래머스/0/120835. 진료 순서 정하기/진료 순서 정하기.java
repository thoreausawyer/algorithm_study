import java.util.Arrays;
class Solution {
    public int[] solution(int[] emergency) {
        Integer[] num = new Integer[emergency.length];
        for (int i = 0; i < emergency.length; i++) {
            num[i] = i;
        }
        Arrays.sort(num, (a, b) -> Integer.compare(emergency[b], emergency[a]));
        int[] result = new int[emergency.length];
        for (int i = 0; i < emergency.length; i++) {
            result[num[i]] = i + 1;
        }
        return result;
    }
}