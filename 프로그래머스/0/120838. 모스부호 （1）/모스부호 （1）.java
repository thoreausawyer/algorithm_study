class Solution {
    public String solution(String letter) {
        String[] arrayStrings = letter.split(" ");
        String answer = "";
        for (int i = 0; i < arrayStrings.length; i++) {
            switch (arrayStrings[i]) {
                case ".-" : answer +='a'; break;
                case "-..." : answer +='b'; break;
                case "-.-." : answer +='c'; break;
                case "-.." : answer +='d'; break;
                case "." : answer +='e'; break;
                case "..-." : answer +='f'; break;
                case "--." : answer +='g'; break;
                case "...." : answer +='h'; break;
                case ".." : answer +='i'; break;
                case ".---" : answer +='j'; break;
                case "-.-" : answer +='k'; break;
                case ".-.." : answer +='l'; break;
                case "--" : answer +='m'; break;
                case "-." : answer +='n'; break;
                case "---" : answer +='o'; break;
                case ".--." : answer +='p'; break;
                case "--.-" : answer +='q'; break;
                case ".-." : answer +='r'; break;
                case "..." : answer +='s'; break;
                case "-" : answer +='t'; break;
                case "..-" : answer +='u'; break;
                case "...-" : answer +='v'; break;
                case ".--" : answer +='w'; break;
                case "-..-" : answer +='x'; break;
                case "-.--" : answer +='y'; break;
                case "--.." : answer += 'z'; break;
            }
        }
        return answer;
    }
}