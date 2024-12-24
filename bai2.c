#include <stdio.h>

int main() {
    FILE *file = fopen("bt01.txt", "r");
    if (file) {
        printf("%c\n", fgetc(file));
        fclose(file);
    }
    return 0;
}
