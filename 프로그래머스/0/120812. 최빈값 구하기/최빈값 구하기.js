function solution(array) {
    let count = new Map();

    for (let num of array) {
        count.set(num, (count.get(num) || 0) + 1);
    }

    let maxCount = 0;
    let mode = 0; 

    for (let [key, value] of count.entries()) {
        if (value > maxCount) {
            maxCount = value;
            mode = key;
        }
    }

    for (let [key, value] of count.entries()) {
        if (value === maxCount && key !== mode) {
            return -1;
        }
    }
    return mode;
}
