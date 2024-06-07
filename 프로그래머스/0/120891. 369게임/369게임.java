class Solution {
    public int solution(int order) {
        int answer = 0;
        String str = Integer.toString(order);
        str = str.replaceAll("0", "");
        for(int i = 0; i <= str.length() - 1; i++){
            if(str.charAt(i) % 3 == 0 && str.charAt(i) != 0 ) answer++;
        }
        return answer;
    }
}