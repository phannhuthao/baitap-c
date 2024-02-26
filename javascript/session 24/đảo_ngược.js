let n = Number(prompt("Nhập số nguyên dương bất kì:" ));

if (n <= 0) {
    let n = Number(prompt("Số bạn vừa nhập sai. Vui lòng nhập số nguyên dương lại:" )) 

    function đảo_ngược(num) {
        let reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num = Math.floor(num / 10);
        }
        return reversed;
    }
    console.log("Số đảo ngược của", n, "là:", đảo_ngược(n));
} 


function đảo_ngược(num) {
    let reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num = Math.floor(num / 10);
    }
    return reversed;
}

console.log("Số đảo ngược của", n, "là:", đảo_ngược(n));