function solution(num_list) {
     let answer = [0, 0];
    let num1 = 0;
    let num2 = 0;

    for (let i = 0; i < num_list.length; i++) {
        if (num_list[i] % 2 !== 0) {
            num1++;
        } else {
            num2++;
        }
    }

    answer[1] = num1;
    answer[0] = num2;
    
    return answer;
}