let n = prompt("Nhập số nguyên n: ");
let countEvenDigits = 0;

for (let i = 0; i < n.length; i++) {
    let digit = parseInt(n[i]);
    if (!isNaN(digit) && digit % 2 === 0) {
        countEvenDigits++;
    }
}

console.log("Số lượng chữ số chẵn trong", n, "là:", countEvenDigits);

