// for (let i = 0; i <= 100; i++) {
//        if (i % 2 === 0) {
//         console.log("Số chia hết cho 2 là: ". i)
//        }

// }

// let soduong = Number(prompt("Nhập số dương tính tổng: "));

// let sum = 0;
// while (soduong > 0) {
//     sum += soduong;
//     soduong = Number(prompt("Nhập số dương tính tổng: "));

// }
// console.log("Tổng các số lớn hơn 0 là: ", sum);

let total = 0;
let userInput;

do {
    userInput = Number(prompt("Nhập một số nguyên dương: "));
    if (!isNaN (userInput ) &&  userInput > 0) {
        total += userInput;
    } else {
        break;
    }
}while (true);
console.log("Tổng các số nguyên dương đã nhập là: ", + total);