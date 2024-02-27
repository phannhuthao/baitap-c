const a = Number(prompt("Nhập số nguyên a:"));
const b = Number(prompt("Nhập số nguyên b:"));

let kq = 1;

for (let i = 0; i < b; i++) {
  kq *= a;
}

console.log("Kết quả của", a, "mũ", b, "là:", result);