let arr = [2, 4, 5, 3, 2, 6, 7, 9, 10, 1, 2, 6];

let nhap = Number(prompt("Nhập một số nguyên bất kì vào mảng: "));
let biendem = 0;

for (let i = 0; i < arr.length; i++) {
    if (arr[i] === nhap) {
        biendem++;
    }
}
console.log("Số lần xuất hiện của ", nhap, "là: ", biendem);
console.log("Các thành phần của mảng: ", arr);