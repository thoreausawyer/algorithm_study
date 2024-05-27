class Solution {
    public String solution(String my_string) {
        String str = my_string;

        StringBuilder sb = new StringBuilder();
        boolean[] seen = new boolean[256]; 

        for (int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);
            if (!seen[c]) {
                seen[c] = true;
                sb.append(c);
            }
        }

        return sb.toString();

    }
}