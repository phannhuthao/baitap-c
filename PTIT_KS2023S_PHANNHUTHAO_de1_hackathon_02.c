#include <stdio.h>
#include <string.h>
struct sinhvien {
    int id;
    char name[50];
    char birthday[50];
    char address[50];
    int status;
};
// Phan Nhựt Hào
// Thầy cô chấm bài em thì lúc nhập tên thầy co viết có dấu cách _ để chương trình phân biet được ví dụ là khi muốn cập nhật 1 sinh viên mới thầy cô ghi thế này Phan_Nhut_Hao

struct sinhvien studentList [100];
int studentCount = 4;

void studentlistschool() { // case 1
    printf("Danh sach sinh vien:\n ");
    for (int i = 0; i < studentCount; i++) {
        printf("Ten: %s, ID: %d, Ngay sinh: %s, Dia chi: %s, Trang thai: %d\n",studentList[i].name,studentList[i].id,studentList[i].birthday,studentList[i].address,studentList[i].status);
    }
}

void addStudent() { // case 2
    printf("Nhap thong tin cho sinh vien moi:\n");
    struct sinhvien newStudent;
    printf("Nhap ID: ");
    scanf("%d", &newStudent.id);
    printf("Nhap ten: ");
    scanf("%s", newStudent.name);
    printf("Nhap ngay sinh: ");
    scanf("%s", newStudent.birthday);
    printf("Nhap dia chi: ");
    scanf("%s", newStudent.address);
    printf("Nhap trang thai: ");
    scanf("%d", &newStudent.status);

    studentList[studentCount] = newStudent;
    studentCount++;
}

void updateStudent() { // case 3
    char searchName[50];
    printf("Nhap ten sinh vien muon chinh sua: ");
    scanf("%s", searchName);

    int found = 0;
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(studentList[i].name, searchName) == 0) {
            printf("Nhap thong tin moi cho sinh vien:\n");
            printf("Nhap ID: ");
            scanf("%d", &studentList[i].id);
            printf("Nhap ten: ");
            scanf("%s", studentList[i].name);
            printf("Nhap ngay sinh: ");
            scanf("%s", studentList[i].birthday);
            printf("Nhap dia chi: ");
            scanf("%s", studentList[i].address);
            printf("Nhap trang thai: ");
            scanf("%d", &studentList[i].status);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien.\n");
    }
}

void DeleteStudent() { // case 4
    char deleteName[50];
    printf("Nhap ten sinh vien muon xoa: ");
    scanf("%s", deleteName);

    int found = 0;
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(studentList[i].name, deleteName) == 0) {
            for (int j = i; j < studentCount - 1; j++) {
                studentList[j] = studentList[j + 1];
            }
            studentCount--;
            found = 1;
            printf("Da xoa sinh vien.\n");
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien.\n");
    }
}

void bubbleSort() { // case 5
    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = 0; j < studentCount - i - 1; j++) {
            if (strcmp(studentList[j].name, studentList[j + 1].name) > 0) {
                struct sinhvien temp = studentList[j];
                studentList[j] = studentList[j + 1];
                studentList[j + 1] = temp;
            }
        }
    }
    printf("Danh sach sinh vien sau khi sap xep:\n");
    studentlistschool();
}


void Searchstudent(char searchName[50]) { // case 6
    int left = 0, right = studentCount - 1;
    int found = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (strcmp(studentList[mid].name, searchName) == 0) {
            printf("Thong tin cua sinh vien:\n");
            printf("ID: %d, Ten: %s, Ngay sinh: %s, Dia chi: %s, Trang thai: %d\n",
                   studentList[mid].id, studentList[mid].name, studentList[mid].birthday,
                   studentList[mid].address, studentList[mid].status);
            found = 1;
            break;
        } else if (strcmp(studentList[mid].name, searchName) < 0) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien.\n");
    }
}

void searchByStatus(int searchStatus) { // case 7
    printf("Thong tin sinh vien theo trang thai %d:\n", searchStatus);
    for (int i = 0; i < studentCount; i++) {
        if (studentList[i].status == searchStatus) {
            printf("ID: %d, Ten: %s, Ngay sinh: %s, Dia chi: %s, Trang thai: %d\n",
                   studentList[i].id, studentList[i].name, studentList[i].birthday,
                   studentList[i].address, studentList[i].status);
        }
    }
}

int main () {
    struct sinhvien student1 = {5,"NInh_Thanh_Dat","8/11/2005","Nha_tho_Gia_Yen",1};
    struct sinhvien student2 = {2,"Nguyen_Hoang_An","19/3/2005","Gia_Tan_3",2};
    struct sinhvien student3 = {3,"Nguyen_Tan_Duy","11/10/2005","Nha_Moi",3};
    struct sinhvien student4 = {4,"Tran_Minh_Thuc","17/4/2005","Gan_Nha_tho_Gia_Yen",4};
    studentList[0] = student1;
    studentList[1] = student2;
    studentList[2] = student3;
    studentList[3] = student4;

    int choice;
    char searchName[50];
    int searchStatus;


    printf("***************MENU***************\n");
    printf("1.In toan bo danh sach sinh vien co o trong mang studentList tren cung 1 hang:\n ");
    printf("2.Thuc hien chuc nang them moi sinh vien vao vi tri cuoi cung cua studentList, thong tin sinh vien do nguoi nhap vao:\n");
    printf("3.Cap nhat thong tin cua mot sinh vien:\n");
    printf("4.Xoa mot sinh vien:\n");
    printf("5.Xap sep sinh vien:\n");
    printf("6.Tim kiem va in ra thong tin cua sinh vien (tim kiem theo ten):\n");
    printf("7.Tim kiem va in ra toan bo thong tin sinh vien theo status:\n");
    printf("8.Thoat\n");

    do {
        int choice;
        printf("Nhap so ban muon chon:");
        scanf("%d",&choice);


        switch (choice) {
            case 1:
                studentlistschool();
                break;
            case 2:
                addStudent();
                break;
            case 3:
                updateStudent();
                break;
            case 4:
                DeleteStudent();
                break;
            case 5:
                bubbleSort();
                break;
            case 6:
                printf("Nhap ten sinh vien can tim: ");
                scanf("%s", searchName);
                Searchstudent(searchName);
                break;
            case 7:
                printf("Nhap trang thai can tim: ");
                scanf("%d", &searchStatus);
                searchByStatus(searchStatus);
                break;
            case 8:
                printf("Ket thuc chuong trinh . Vui long chon lai so \n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai so \n");
        }
    }while (choice != 8);
    return 0;
}
