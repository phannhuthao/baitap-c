let n = Number(prompt("Nhập một số nguyên dương N vào: "));

function fibonacci(n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

if (n <= 0) {
    prompt("Vui lòng nhập số nguyên dương");
} else {
    console.log("Số Fibonacci thứ", n, "là:", fibonacci(n));
}

