#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char plain[10], cipher[10];
    int key, i, length;

    printf("Enter the plain text: ");
    scanf("%s", plain);

    printf("Enter the key value: ");
    scanf("%d", &key);

    printf("\n\nPLAIN TEXT: %s", plain);
    printf("\nENCRYPTED TEXT: ");

    length = strlen(plain);

    for (i = 0; i < length; i++) {
        if (isalpha(plain[i])) {
            if (isupper(plain[i])) {
                cipher[i] = ((plain[i] - 'A' + key) % 26) + 'A';
            } else {
                cipher[i] = ((plain[i] - 'a' + key) % 26) + 'a';
            }
        } else {
            cipher[i] = plain[i];
        }
        printf("%c", cipher[i]);
    }

    printf("\nAFTER DECRYPTION: ");

    for (i = 0; i < length; i++) {
        if (isalpha(cipher[i])) {
            if (isupper(cipher[i])) {
                plain[i] = ((cipher[i] - 'A' - key + 26) % 26) + 'A';
            } else {
                plain[i] = ((cipher[i] - 'a' - key + 26) % 26) + 'a';
            }
        } else {
            plain[i] = cipher[i];
        }
        printf("%c", plain[i]);
    }

    printf("\n");
    return 0;
}
