const number = Number(prompt('nhập số nguyên dương:'));

if (isNaN(number) || number <= 0) {
    console.log("Vui lòng nhập một số nguyên dương.");
} else {
    let sum = 0;

    for (let i = 2; ; i += 2) {
        const square = i * i;
        if (sum + square >= number) {
            break;
        }
        console.log(square);
        sum += square;
    }

    console.log("Tổng các số đã in ra: " + sum);
}