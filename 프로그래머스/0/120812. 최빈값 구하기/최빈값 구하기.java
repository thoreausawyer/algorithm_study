import java.util.HashMap;
import java.util.Map;

public class Solution {

    public static int solution(int[] array) {
        Map<Integer, Integer> count = new HashMap<>();

        // 배열 내 각 숫자의 등장 횟수를 세기
        for (int num : array) {
            count.put(num, count.getOrDefault(num, 0) + 1);
        }

        int maxCount = 0; // 가장 많이 등장한 횟수
        int mode = 0; // 최빈값

        for (Map.Entry<Integer, Integer> entry : count.entrySet()) {
            int freq = entry.getValue();
            if (freq > maxCount) {
                maxCount = freq;
                mode = entry.getKey();
            }
        }

        // 최빈값이 여러 개인지 확인
        for (Map.Entry<Integer, Integer> entry : count.entrySet()) {
            if (entry.getValue() == maxCount && entry.getKey() != mode) {
                return -1;
            }
        }

        return mode; 
    }
}
