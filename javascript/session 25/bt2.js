let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

let timkiem = Number(prompt("Nhập giá trị tìm phần tử trong mảng: "));

let index = arr.indexOf(timkiem);

if (index !== -1) {
    console.log("Vị trí của phần tử", timkiem, "trong mảng là", index);
    console.log("Các phần từ có trong mảng là: ", arr)
} else {
    console.log("Phần tử không tồn tại trong mảng");
}
