let a = Number(prompt("Nhập số a: "));
let b = Number(prompt("Nhập số b: "));
let tong = a + b;


if (a % b === 0) {
    alert("a chia hết cho b");
} else if (b % a === 0) {
    alert ("b chia hết cho a");
} else {
    alert ("Không có số nào chia hết cho số kia")
}
