const fizzBuzz = function(n) {
    let answer = [];

    for (let i = 1; i <= n; i++) {
        let temp = "";

        if (i % 3 === 0) temp += "Fizz";
        if (i % 5 === 0) temp += "Buzz";
        if (temp === "") temp = `${i}`;

        answer.push(temp);
    }

    return answer;
};

console.log(fizzBuzz(15));