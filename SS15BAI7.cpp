#include <stdio.h>
#include <string.h> 
// Thu vien de su dung ham strlen

int main() {
    char str[] = "Hello my gmail is test123@gmail.com"; 
	// Khai bao va gan gia tri cho chuoi bat ky
    int letters = 0, digits = 0, special = 0;
    int length = strlen(str);

    // Dem so ky tu la chu cai, chu so va ky tu dac biet trong chuoi
    for (int i = 0; i < length; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            letters++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            special++;
        }
    }

    printf("Chuoi da khai bao: %s\n", str);
    printf("So ky tu la chu cai: %d\n", letters);
    printf("So ky tu la chu so: %d\n", digits);
    printf("So ky tu dac biet: %d\n", special);

    return 0;
}

