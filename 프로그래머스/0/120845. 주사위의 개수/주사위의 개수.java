class Solution {
    public int solution(int[] box, int n) {
        int answer = 1;
        for(int k : box){
            answer *= k / n;
        }
        return answer;
    }
}