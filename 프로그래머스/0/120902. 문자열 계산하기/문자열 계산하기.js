function solution(my_string) {
    let tokens = my_string.split(" ");
    let answer = parseInt(tokens[0]);
    
    for (let i = 1; i < tokens.length; i += 2) {
        let operator = tokens[i];
        let nextNumber = parseInt(tokens[i + 1]);
        
        if (operator === "+") {
            answer += nextNumber;
        } else if (operator === "-") {
            answer -= nextNumber;
        }
    }
    
    return answer;
}