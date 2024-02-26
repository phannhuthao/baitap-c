let a = Number(prompt("Nhập số a: "));
let b = Number(prompt("Nhập số b: "));

console.log("Giá trị của a:", a);
console.log("Giá trị của b:", b);

// for (let i = 1; i <= a; i++) {
//      if (i % b === 0) {
//         console.log(i);
//      }
// }

console.log("Các số chia hết cho", b, "trong khoảng từ 1 đến", a, ":");

let found = false; // Biến này sẽ giữ trạng thái xem có số nào chia hết cho b không

for (let i = 1; i <= a; i++) {
    if (i % b === 0) {
        console.log(i);
        found = true; // Đánh dấu là đã tìm thấy số chia hết cho b
    }
}

if (!found) {
    console.log("Không có số nào chia hết cho", b, "trong khoảng từ 1 đến", a);
}