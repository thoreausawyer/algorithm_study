class Solution {
    public int solution(String s) {
        int answer = 0;
        String[] str = {};
        str = s.split(" ");
        int[] arr = new int[str.length];
        for(int i = 0; i <= arr.length - 1; i++){
            if(str[i].equals("Z")){
                arr[i] = Integer.valueOf(str[i-1]);
                answer -= arr[i];
            }else{
                arr[i] = Integer.valueOf(str[i]);
                answer += arr[i];
            }
        }
        return answer;
    }
}