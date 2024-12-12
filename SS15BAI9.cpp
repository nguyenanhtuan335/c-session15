#include <stdio.h>
#include <string.h> 
// Thu vien de su dung ham strlen

void removeCharacter(char* str, char ch) {
    int length = strlen(str);
    int j = 0;

    for (int i = 0; i < length; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
	// Ket thuc chuoi moi
}

int main() {
    char str[] = "hello world"; 
	// Khai bao va gan gia tri cho chuoi bat ky
    char ch;

    printf("Chuoi da khai bao: %s\n", str);
    printf("Nhap mot ky tu de xoa: ");
    scanf("%c", &ch);
	 // Nhap ky tu tu nguoi dung

    removeCharacter(str, ch);

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ch, str);

    return 0;
}

