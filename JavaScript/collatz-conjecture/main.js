let x = 2;
let steps = 0;

while (x > 1) {
    if (x % 2 == 0) {
        x /= 2;
    } else {
        x = (x * 3) + 1;
    }
    steps++;
}

console.log(`It takes ${steps} steps to get to 1!`);