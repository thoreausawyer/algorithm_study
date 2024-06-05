function solution(array, n) {
    let answer = 0;
    let list = [];

    if (array.length === 1 && array[0] === n) {
        answer = n;
    } else {
        // 리스트에 담기
        for (let a of array) {
            list.push(a);
        }
        // n 추가 후 정렬
        if (!list.includes(n)) {
            list.push(n);
            list.sort((a, b) => a - b);
        }

        // n 기준으로 앞의 수와 뒤의 수 변수 담기
        let a = 101;
        let b = 101;

        let nIndex = list.indexOf(n);
        if (nIndex - 1 !== -1) a = list[nIndex - 1];
        if (nIndex + 1 !== list.length) b = list[nIndex + 1];

        // 확인
        console.log(a);
        console.log(b);

        // n과 차
        let absA = Math.abs(a - n);
        let absB = Math.abs(b - n);

        console.log(absA);
        console.log(absB);

        if (absA > absB) {
            answer = b;
        } else {
            answer = a;
        }
    }

    // 확인
    console.log(list);

    if (array.includes(n)) {
        answer = n;
    }

    return answer;
}