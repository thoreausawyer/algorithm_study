class Solution {
    public int solution(String my_string) {
        int answer = 0;

        my_string = my_string.replaceAll("[a-z,A-Z]", "");
        String[] arr = new String[my_string.length()];

        for(int i = 0; i <= my_string.length()-1; i++){
            arr[i] = String.valueOf(my_string.charAt(i)) ;
            answer += Integer.parseInt(arr[i]);
        }
        return answer;
    }
}