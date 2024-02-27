let n = Number(prompt("Nhập số nguyên dương n: "));
let sum = 0;
let m = 0;

while (sum < n) {
    m++;
    sum += m;
}

m--;

console.log("Số nguyên dương m lớn nhất sao cho tổng từ 1 đến m nhỏ hơn", n, "là:", m);
