#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void clean_student_names(const char *input_file, const char *output_file) {
    FILE *input, *output;
    char line[100];

    input = fopen(input_file, "r");
    if (input == NULL) {
        printf("Khong the mo file nay %s.\n", input_file);
        return;
    }

    output = fopen(output_file, "w");
    if (output == NULL) {
        printf("Khong the tao file nay %s.\n", output_file);
        fclose(input);
        return;
    }

    fgets(line, sizeof(line), input);
    fprintf(output, "%s", line);
    while (fgets(line, sizeof(line), input)) {
        line[strcspn(line, "\n")] = '\0';

        for (int i = 0; line[i] != '\0'; i++) {
            if (i == 0 || line[i - 1] == ' ') {
                line[i] = toupper(line[i]);
            } else {
                line[i] = tolower(line[i]);
            }
        }
        fprintf(output, "%s\n", line);
    }

    printf(" Xu ly va luu vao file %s thanh cong moi ban xem!\n", output_file);

    fclose(input);
    fclose(output);
}

int main() {
    const char *input_filename = "sinhvien.txt";
    const char *output_filename = "sinhvien_out.txt";
    clean_student_names(input_filename, output_filename);
    return 0;
}

