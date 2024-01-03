#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct SinhVien {
    char ten[50];
    char lop[50];
    char ngaysinh[50];
    float gpa;
};

// Hàm so sánh để sắp xếp theo GPA
int soSanh(const void *a, const void *b) {
    struct SinhVien *sv1 = (struct SinhVien *)a;
    struct SinhVien *sv2 = (struct SinhVien *)b;
    return (sv2->gpa - sv1->gpa) * 10;
}

int main() {
    FILE *fileIn, *fileOut;
    fileIn = fopen("sinhvien.txt", "r");
    fileOut = fopen("sinhvien_out.txt", "w");

    if (fileIn == NULL || fileOut == NULL) {
        printf("Khong the mo file.");
        return 1;
    }

    struct SinhVien danhSachSV[100];
    int soLuongSV = 0;


    char line[100];
    while (fgets(line, sizeof(line), fileIn) != NULL) {

        char *token = strtok(line, ",");
        strcpy(danhSachSV[soLuongSV].ten, token);

        token = strtok(NULL, ",");
        strcpy(danhSachSV[soLuongSV].lop, token);

        token = strtok(NULL, ",");
        strcpy(danhSachSV[soLuongSV].ngaysinh, token);

        token = strtok(NULL, ",");
        danhSachSV[soLuongSV].gpa = atof(token);

        soLuongSV++;
    }


    qsort(danhSachSV, soLuongSV, sizeof(struct SinhVien), soSanh);


    for (int i = 0; i < soLuongSV; i++) {
        fprintf(fileOut, "%s,%s,%s,%.1f\n", danhSachSV[i].ten, danhSachSV[i].lop,
                danhSachSV[i].ngaysinh, danhSachSV[i].gpa);
    }

    fclose(fileIn);
    fclose(fileOut);

    return 0;
}

