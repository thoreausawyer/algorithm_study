import java.util.*;
class Solution {
    public int[] solution(int n) {
        ArrayList<Integer> result = new ArrayList<>();
        for(int i = 0; i <= n; i++){
            if(i % 2 != 0){
                result.add(i);
            }
        }
        int[] answer = new int[result.size()];
        answer = result.stream().mapToInt(Integer::intValue).toArray();
        return answer;
    }
}