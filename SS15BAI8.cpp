#include <stdio.h>
#include <string.h> 
// Thu vien de su dung ham strlen

void capitalizeWords(char* str) {
    int length = strlen(str);
    int capitalize = 1; 
	// Bien de theo doi khi nao can viet hoa ky tu

    for (int i = 0; i < length; i++) {
        if (capitalize && (str[i] >= 'a' && str[i] <= 'z')) {
            str[i] = str[i] - 'a' + 'A'; 
			// Chuyen chu thuong thanh chu hoa
            capitalize = 0;
        } else if (str[i] == ' ') {
            capitalize = 1; 
			// Gap khoang trang thi ky tu tiep theo se duoc viet hoa
        } else {
            capitalize = 0; 
			// Cac ky tu khac thi khong viet hoa
        }
    }
}

int main() {
    char str[] = "hello world"; 
	// Khai bao va gan gia tri cho chuoi bat ky

    capitalizeWords(str);

    printf("Chuoi da duoc viet hoa chu cai dau cua cac tu: %s\n", str);

    return 0;
}

