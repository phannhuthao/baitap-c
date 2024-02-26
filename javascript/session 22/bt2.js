let n = Number(prompt("Nhập một số nguyên dương: "));

if (n < 0 || !Number.isInteger(n)) {
    console.log("Vui lòng nhập vào một số nguyên dương.");
  } else {
    let giaiThua = 1;
    for (let i = 1; i <= n; i++) {
      giaiThua *= i;
    }
    console.log(`Giai thừa của ${n} là: ${giaiThua}`);
  }