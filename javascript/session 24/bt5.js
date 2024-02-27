let n = Number(prompt("Nhập một số nguyên dương N bất kỳ: "));
let S = 0;

for (let i = 1; i <= n; i++) {
    S += 1 / (i * i * i);
}

S = S.toFixed(5); // Làm tròn đến 5 chữ số thập phân

console.log("Kết quả của biểu thức S =", S);


