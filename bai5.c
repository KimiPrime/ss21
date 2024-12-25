#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
    fptr = fopen("bt05.txt", "w");
    if (fptr == NULL) {
        printf("Khong the mo file de ghi.\n");
        return 1;
    }

    char string[256];
    int n;

    printf("Vui long nhap so dong: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("So dong phai la mot so nguyen lon hon 0.\n");
        fclose(fptr);
        return 1;
    }

    getchar();

    for (int i = 1; i <= n; i++) {
        printf("Vui long nhap vao dong [%d]: ", i);
        fgets(string, sizeof(string), stdin);
        string[strcspn(string, "\n")] = '\0';
        fprintf(fptr, "%s\n", string);
    }

    fclose(fptr);

    fptr = fopen("bt05.txt", "r");
    if (fptr == NULL) {
        printf("Khong the mo file de doc.\n");
        return 1;
    }

    printf("\nNoi dung file sau khi ghi:\n");
    int i = 1;
    while (fgets(string, sizeof(string), fptr) != NULL) {
        printf("Dong [%d]: %s", i, string);
        i++;
    }

    fclose(fptr);
    return 0;
}
