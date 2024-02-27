let n = Number(prompt("Nhập một số nguyên dương bất kỳ: "));
let sum = 0;

for (let i = 1; i <= n; i++) {
    console.log(i);
    sum += i;
    if (sum % 2 === 0) {
        sum++; 
    }
}

console.log("Tổng các số là:", sum);
