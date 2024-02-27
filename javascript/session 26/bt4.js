
let a = Number(prompt("Nhập số nguyên dương a: "));
let b = Number(prompt("Nhập số nguyên dương b: "));

let arra = [];
let arrb = [];

for (let i = 1; i <= a; i++) {
    if ( i % b === 0) {
        arrb.push(i);
    }
}

if (arrb.length > 0) {
    console.log("Các sô chia hết cho", b, "là: ", a);
    console.log(arrb);
} else {
    console.log("Không có số nào chia hết cho ",b);
}
