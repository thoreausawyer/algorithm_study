class Solution {
    public int solution(String my_string) {
        
        String[] tokens = my_string.split(" ");
        
        int answer = Integer.parseInt(tokens[0]);
        
        for (int i = 1; i < tokens.length; i += 2) {
            String operator = tokens[i]; 
            int nextNumber = Integer.parseInt(tokens[i + 1]); 
            
            if (operator.equals("+")) {
                answer += nextNumber;
            } else if (operator.equals("-")) {
                answer -= nextNumber;
            }
        }
        
        return answer;
    }
}