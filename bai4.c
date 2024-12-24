#include <stdio.h>

int main() {
    FILE *fptr = fopen("bt01.txt", "r");
    char line[100];
    if (fgets(line, sizeof(line), fptr)) {
        printf("Dong dau tien trong file: %s", line);
    }

    fclose(fptr);
    return 0;
}

