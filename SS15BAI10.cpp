#include <stdio.h>
#include <string.h>  
// Thu vien de su dung ham strlen

int main() {
    char str[] = "bcdac"; 
	// Khai bao va gan gia tri cho chuoi bat ky
    int freq[256] = {0}; 
	 // Mang dem so lan xuat hien cua cac ky tu

    int length = strlen(str);

    // Dem so lan xuat hien cua tung ky tu
    for (int i = 0; i < length; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("Chuoi da khai bao: %s\n", str);
    printf("So lan xuat hien cua tung ky tu:\n");

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}

