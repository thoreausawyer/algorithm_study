function solution(my_string) {
    // 알파벳을 제외한 모든 문자 필터링
    let filteredString = my_string.replace(/[a-zA-Z]/g, '');

    // 남은 문자들을 숫자로 변환
    let result = Array.from(filteredString).map(char => parseInt(char));

    // 결과를 정렬
    result.sort((a, b) => a - b);

    return result;
}
