let n = Number(prompt("Nhập một số nguyên dương bất kì: "));

if (isNaN(n) && n <= 0) {
    alert("Vui lòng nhập lại số: ");
} else {
        console.log("Bình phương của các số nguyên dương chẵn từ 1 đến ", N, "là: ");
        for (let i = 0; i < N ; i+= 2) {
        console.log(i**2);
        }
}