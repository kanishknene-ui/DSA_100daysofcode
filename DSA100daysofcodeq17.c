#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, length;
    char temp;

    printf("Enter the code name: ");
    scanf("%s", name);

    length = strlen(name);

    for(i = 0; i < length / 2; i++) {
        temp = name[i];
        name[i] = name[length - i - 1];
        name[length - i - 1] = temp;
    }

    printf("Mirrored Code Name: %s\n", name);

    return 0;
}