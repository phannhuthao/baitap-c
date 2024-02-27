let arr = [1, 2, 3, 3.2, 5.3, 10];
let hasInteger = false;

for (let i = 0; i < arr.length; i++) {
    if (Number.isInteger(arr[i])) {
        console.log(arr[i]);
        hasInteger = true;
    }
}

if (!hasInteger) {
    console.log("Trong mảng không tồn tại số nguyên");
}




