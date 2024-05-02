class Solution {
    public int solution(int n) {
        int answer = 1;
        int count = 1;
        while (answer <= n) {
            answer *= count;
            System.out.println(answer);
            count++;
        }
        return count-2;
    }
}