class Solution {
    public int solution(int[] dot) {
        int answer = 0;
        return answer = dot[0] > 0 && dot[1] > 0 ? 1 : dot[0] > 0 && dot[1] < 0 ? 4 : dot[0] < 0 && dot[1] < 0 ? 3 : 2;
    }
}