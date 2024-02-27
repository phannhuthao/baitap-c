let a = Number(prompt("Nhập số nguyên dương a: "));
let b = Number(prompt("Nhập số nguyên dương b: "));

let sole = 0;
let sochan = 0;

if (a === 0 && b === 0) {
    console.log("Vui lòng nhập lại: ")
} else {
    let sum = 0;
    const start = Math.min(a, b);
    const end = Math.max(a, b);
    for (let i = start; i <= end; i++) {
        sum += i;
    }
    console.log("Tổng các số nguyên từ " + start + " đến " + end + " là: " + sum);
}

