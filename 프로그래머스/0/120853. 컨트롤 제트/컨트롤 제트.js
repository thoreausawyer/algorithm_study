function solution(s) {
    let answer = 0;
    const strList = s.split(" ");
    const arr = new Array(strList.length).fill(0);
    
    for (let i = 0; i < arr.length; i++) {
        if (strList[i] === "Z") {
            arr[i] = parseInt(strList[i - 1]);
            answer -= arr[i];
        } else {
            arr[i] = parseInt(strList[i]);
            answer += arr[i];
        }
    }
    
    return answer;
}
