#include <stdio.h>
#include <string.h>

int main() {
    char password[50];

    printf("Enter password: ");
    scanf("%49s", password);

    if (strcmp(password, "hello123") == 0) {
        printf("Login successful!\n");
    } else {
        printf("Incorrect password!\n");
    }

    return 0;
}
