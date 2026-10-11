#include <stdio.h>
#include <string.h>

int main() {
    char password[100];

    printf("Enter a password: ");
    scanf("%99s", password);

    int length = strlen(password);

    if (length < 8) {
        printf("Weak: too short (minimum 8 characters).\n");
    } else {
        printf("OK: length is good.\n");
    }

    return 0;
}