let arr = [-2, 0, 1, 5, -10, 6, -3, 8, 9, -6];
let arra = [];

for (let i = 0; i < arr.length; i++) {
    if (arr[i] < 0) {
        arra.unshift(arr[i])
    } else if ( arr[i] > 0) {
        arra.push(arr[i])
    }
}
console.log("Mảng sau khi được sắp xếp lại theo đề bài là: ", arra);
