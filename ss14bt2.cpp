#include <stdio.h>
#include <string.h> 
int main() {
    char str[] = "Hello World"; 
    printf("Chuoi da khai bao: %s\n", str);
    printf("Cac ky tu trong chuoi:\n");

    for (int i = 0; i < strlen(str); i++) {
        printf("%c ", str[i]); 
    }
    printf("\n");
    return 0;
}

