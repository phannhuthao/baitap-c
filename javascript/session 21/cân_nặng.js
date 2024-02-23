var weight = Number(prompt("Nhập số cân nặng (kg): "));
var height = Number(prompt("Nhập số chiều cao (m): "));
var BMI = weight/(height^2);
alert('BMI của bạn là' + BMI);

if (BMI < 18.5 ) {
    alert("Gầy")
} else if (BMI > 18.5 && BMI <= 24.9 ) {
    alert("Bình Thường")
} else if (BMI > 25) {
    alert("Thừa Cân")
} else if ( BMI > 25 && BMI <= 29.9 ) {
    alert("Tiền Béo Phì")
} else if (BMI > 30 && BMI <=34.9) {
    alert("Béo Phì Đô I")
} else if (BMI > 35 && BMI <= 39.9) {
    alert("Béo Phì Độ II")
} else {
    alert("Béo Phì Độ III")
}

