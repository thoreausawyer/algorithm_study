const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];

rl.on('line', function (line) {
    input = line.split(' ');
}).on('close', function () {
    let n = Number(input[0]);
    let star = "";
    for (let i = 1; i <= n; i++) {
        star += "*";
        console.log(star);
    }
});
