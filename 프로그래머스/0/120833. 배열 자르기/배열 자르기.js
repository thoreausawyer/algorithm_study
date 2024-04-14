function solution(numbers, num1, num2) {
    if (num1 < 0 || num2 >= numbers.length || num1 > num2) {
        return [];
    }
    return numbers.slice(num1, num2 + 1);
}
