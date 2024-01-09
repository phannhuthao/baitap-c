#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STUDENTS 100

struct Student {
    char maSinhVien[6];
    char ten[31];
    char lop[11];
    float toan, ly, hoa;
    float diemTrungBinh;
};

struct Student studentList[MAX_STUDENTS];
int studentCount = 0;

void standardizeName(char *name);
void addStudent();
void editStudent();
void deleteStudent(int index);
void displayStudents();
void sortStudentsByAverage(int ascending);
void searchByClass();
void searchByScoreRange(float minScore, float maxScore);



int main () {

    printf ("CHUONG TRINH QUAN LY SACH C/C++\n");
    printf ("*************************MENU**************************\n");
    printf("1.Them thong tin sinh vien: \n");
    printf("2.Sua thong tin sinh vien: \n");
    printf("3.Xoa thong tin sinh vien: \n");
    printf("4.Hien thi thong tin sinh vien: \n");
    printf("5.Sap xep thong tin sinh vien theo diem trung binh tang: \n");
    printf("6.Sap xep thong tin sinh vien theo diem trung binh giam: \n");
    printf("7.Tim kiem sinh vien theo lop: \n");
    printf("8.Tim kiem sinh vien theo diem trong khoang n den m(n va m tu nhap so trong khoang muon nhap): \n");
    printf("9.Thoat\n");

    int choice;
    float minScore, maxScore;


    do {
        int temp;

        printf("Nhap 1 so ban muon chon:");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                editStudent();
                break;
            case 3:
                printf("Nhap thu tu sinh vien can xoa: ");
                int index;
                scanf("%d", &index);
                deleteStudent(index - 1); // Chuyển từ số người dùng nhập thành index bắt đầu từ 0
                break;
            case 4:
                displayStudents();
                break;
            case 5:
                sortStudentsByAverage(1); // Sắp xếp tăng dần
                displayStudents(); // Hiển thị danh sách sinh viên sau khi sắp xếp
                break;
            case 6:
                sortStudentsByAverage(0); // Sắp xếp giảm dần
                displayStudents(); // Hiển thị danh sách sinh viên sau khi sắp xếp
                break;
            case 7:
                searchByClass();
                break;
            case 8:
                printf("Nhap diem thap nhat trong khoang: ");
                scanf("%f", &minScore);
                printf("Nhap diem cao nhat trong khoang: ");
                scanf("%f", &maxScore);
                searchByScoreRange(minScore, maxScore);
                break;
            case 9:
                printf("Ket thuc chuong trinh: ");
                break;
            default:
                printf("Vui long nhap lai: ");
                break;
        }
    } while ( choice != 10);
    return 0;
}

void standardizeName(char *name) {
    // Viết hoa chữ cái đầu của mỗi từ
    int len = strlen(name);
    for (int i = 0; i < len; ++i) {
        if (i == 0 || (name[i - 1] == ' ' && i < len - 1)) {
            name[i] = toupper(name[i]);
        } else {
            name[i] = tolower(name[i]);
        }
    }
}

void addStudent() { //case 1
    if (studentCount >= MAX_STUDENTS) {
        printf("Danh sach sinh vien da day. Khong the them sinh vien moi.\n");
        return;
    }

    struct Student newStudent;

    printf("Nhap ma sinh vien (toi da 5 ky tu): ");
    scanf("%5s", newStudent.maSinhVien);
    // Kiểm tra mã sinh viên

    printf("Nhap ten sinh vien (tu 5 den 30 ky tu): ");
    getchar(); // Đọc ký tự newline còn lại từ lệnh scanf trước
    fgets(newStudent.ten, sizeof(newStudent.ten), stdin);
    newStudent.ten[strcspn(newStudent.ten, "\n")] = '\0'; // Xóa ký tự newline thừa

    printf("Nhap lop: ");
    scanf("%10s", newStudent.lop);
    printf("Nhap diem mon Toan: ");
    scanf("%f", &newStudent.toan);
    printf("Nhap diem mon Ly: ");
    scanf("%f", &newStudent.ly);
    printf("Nhap diem mon Hoa: ");
    scanf("%f", &newStudent.hoa);

    newStudent.diemTrungBinh = (newStudent.toan + newStudent.ly + newStudent.hoa) / 3.0;

    standardizeName(newStudent.ten);

    // Thêm sinh viên mới vào danh sách
    studentList[studentCount] = newStudent;
    studentCount++;

    FILE *file = fopen("student.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return;
    }
    fprintf(file, "Ma sinh vien: %.5s Ten: %s Lop: %s Toan %.2f Ly: %.2f Hoa: %.2f Diem trung binh: %.2f\n",
            newStudent.maSinhVien, newStudent.ten, newStudent.lop,
            newStudent.toan, newStudent.ly, newStudent.hoa,
            newStudent.diemTrungBinh);

    fclose(file);

    printf("Da them sinh vien moi.\n");
}

void editStudent() { //case 2
    char searchID[6];
    printf("Nhap ma sinh vien can sua: ");
    scanf("%5s", searchID);

    int foundIndex = -1; // -1: Khong tim thay
    for (int i = 0; i < studentCount; ++i) {
        if (strcmp(studentList[i].maSinhVien, searchID) == 0) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1) {
        printf("Khong tim thay sinh vien co ma %s.\n", searchID);
        return;
    }

    printf("Nhap ten sinh vien (tu 5 den 30 ky tu): ");
    getchar(); // Đọc ký tự newline còn lại từ lệnh scanf trước
    fgets(studentList[foundIndex].ten, sizeof(studentList[foundIndex].ten), stdin);
    studentList[foundIndex].ten[strcspn(studentList[foundIndex].ten, "\n")] = '\0'; // Xóa ký tự newline thừa

    printf("Nhap lop: ");
    scanf("%10s", studentList[foundIndex].lop);
    printf("Nhap diem mon Toan: ");
    scanf("%f", &studentList[foundIndex].toan);
    printf("Nhap diem mon Ly: ");
    scanf("%f", &studentList[foundIndex].ly);
    printf("Nhap diem mon Hoa: ");
    scanf("%f", &studentList[foundIndex].hoa);

    studentList[foundIndex].diemTrungBinh = (studentList[foundIndex].toan + studentList[foundIndex].ly + studentList[foundIndex].hoa) / 3.0;
    standardizeName(studentList[foundIndex].ten);

    FILE *file = fopen("student.txt", "w+");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    for (int i = 0; i < studentCount; ++i) {
        fprintf(file, "Ma sinh vien: %.5s Ten: %s Lop: %s Toan: %.2f Ly: %.2f Hoa: %.2f Diem trung binh: %.2f\n",
                studentList[i].maSinhVien, studentList[i].ten, studentList[i].lop,
                studentList[i].toan, studentList[i].ly, studentList[i].hoa,
                studentList[i].diemTrungBinh);
    }

    fclose(file);

    printf("Da sua lai thong tin vien: %s.\n", searchID);
}

void deleteStudent(int index) { //case 3
    if (index < 0 || index >= studentCount) {
        printf("Khong tim thay sinh vien co thu tu nhu vay.\n");
        return;
    }
    // Di chuyển các sinh viên phía sau lên trên để xóa sinh viên tại vị trí index
    for (int i = index; i < studentCount - 1; ++i) {
        studentList[i] = studentList[i + 1];
    }
    studentCount--;

    FILE *file = fopen("student.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file student.txt.\n");
        return;
    }

    // Ghi lại dữ liệu còn lại vào file student.txt
    for (int i = 0; i < studentCount; ++i) {
        fprintf(file, "%s\n", studentList[i].maSinhVien);
        // Ghi thêm các trường thông tin khác của sinh viên
    }
    fclose(file);

    printf("Da xoa sinh vien va cap nhat trong file: student.txt \n");
}

void displayStudents() { //case 4
    if (studentCount == 0) {
        printf("Danh sach sinh vien khong co \n");
        return;
    }

    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < studentCount; ++i) {
        printf("Ma sinh vien: %s Ten: %s Lop: %s Toan: %.2f Ly: %.2f Hoa: %.2f Diem trung binh: %.2f\n",
               studentList[i].maSinhVien,studentList[i].ten,studentList[i].lop,studentList[i].toan,studentList[i].ly,studentList[i].hoa,studentList[i].diemTrungBinh);
    }
}

void sortStudentsByAverage(int ascending) { //case 5,6
    struct Student temp;

    for (int i = 0; i < studentCount - 1; ++i) {
        for (int j = 0; j < studentCount - i - 1; ++j) {
            if (ascending) {
                if (studentList[j].diemTrungBinh > studentList[j + 1].diemTrungBinh) {
                    // Hoán đổi thông tin của hai sinh viên nếu điểm trung bình của sinh viên sau lớn hơn sinh viên trước
                    temp = studentList[j];
                    studentList[j] = studentList[j + 1];
                    studentList[j + 1] = temp;
                }
            } else {
                if (studentList[j].diemTrungBinh < studentList[j + 1].diemTrungBinh) {
                    // Hoán đổi thông tin của hai sinh viên nếu điểm trung bình của sinh viên sau nhỏ hơn sinh viên trước
                    temp = studentList[j];
                    studentList[j] = studentList[j + 1];
                    studentList[j + 1] = temp;
                }
            }
        }
    }

    if (ascending) {
        printf("Da sap xep sinh vien theo diem trung binh tang dan.\n");
    } else {
        printf("Da sap xep sinh vien theo diem trung binh giam dan.\n");
    }
}

void searchByClass() { //case 7
    char searchClass[15];
    printf("Nhap lop can tim kiem: ");
    scanf("%s", searchClass);

    int found = 0;
    printf("\n Ket qua tim kiem: \n");
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(studentList[i].lop, searchClass) == 0) {
            printf("Ma sinh vien: %s Ten: %s Lop: %s Toan: %.2f Ly: %.2f Hoa: %.2f Diem Trung Binh: %.2f\n",
                   studentList[i].maSinhVien, studentList[i].ten,
                   studentList[i].lop, studentList[i].toan, studentList[i].ly,
                   studentList[i].hoa, studentList[i].diemTrungBinh);
            found = 1;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien nao thuoc lop nay!\n");
    }
}

void searchByScoreRange(float minScore, float maxScore) { //case 8
    if (minScore < 0 || maxScore > 10 || minScore > maxScore) {
        printf("Khoang diem nhap vao khong hop le!\n");
        return;
    }

    int found = 0;
    printf("\nKet qua tim kiem theo khoang diem tu %.2f den %.2f:\n", minScore, maxScore);
    for (int i = 0; i < studentCount; i++) {
        if (studentList[i].diemTrungBinh >= minScore && studentList[i].diemTrungBinh<= maxScore) {
            printf("Ma sinh vien: %5s Ten: %s Lop: %s Toan: %.2f Ly: %.2f Hoa: %.2f Diem Trung binh: %.2f\n", studentList[i].maSinhVien, studentList[i].ten,
                   studentList[i].lop, studentList[i].toan, studentList[i].ly,
                   studentList[i].hoa, studentList[i].diemTrungBinh);
            found = 1;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien nao trong khoang diem nay!\n");
    }
}







