let a = Number(prompt("Nhập cạnh a: "));
let b = Number(prompt("Nhập cạnh b: "));
let c = Number(prompt("Nhập cạnh C: "));

if (a > 0 && b > 0 & c > 0 && a + b > c && a + c > b && b + c > a ) {
 alert("Ba cạnh hợp lệ")
} else {
    alert("Ba cạnh không hợp lệ")
}