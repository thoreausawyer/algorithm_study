function solution(num_list) {
    let answer = new Array(num_list.length);
    let count = 0;
    for(let i = num_list.length - 1; i >= 0; i--) {
        answer[count] = num_list[i];
        count++;
    }
    return answer;
}