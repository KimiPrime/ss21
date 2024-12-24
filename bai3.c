#include <stdio.h>

int main(){
	FILE*fptr;
	fptr = fopen ("bt01.txt","a");
	char string[50];
	printf("nhap 1 chuoi ki tu: ");
    fgets(string, sizeof(string), stdin);
    fputs(string,fptr);
    fclose(fptr);

return 0;
}

