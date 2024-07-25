function solution(numbers) {
    // 배열의 모든 요소의 합을 계산
    const totalSum = numbers.reduce((accumulator, currentValue) => accumulator + currentValue, 0);
    
    // 총합을 요소의 개수로 나누어 평균 계산
    const average = totalSum / numbers.length;
    
    return average;
}