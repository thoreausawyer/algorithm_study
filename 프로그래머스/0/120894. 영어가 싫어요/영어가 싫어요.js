function solution(numbers) {
    // 숫자 단어와 실제 숫자를 매핑한 객체
        const numberMap = {
            "zero": 0,
            "one": 1,
            "two": 2,
            "three": 3,
            "four": 4,
            "five": 5,
            "six": 6,
            "seven": 7,
            "eight": 8,
            "nine": 9
        };

        // 숫자 단어를 숫자로 변환
        for (const [word, digit] of Object.entries(numberMap)) {
            numbers = numbers.replaceAll(word, digit);
        }

        // 변환된 문자열을 정수로 변환
        return parseInt(numbers);
}