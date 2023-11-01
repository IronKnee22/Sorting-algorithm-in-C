#include <stdio.h>
#include <string.h>

int main() {
    char names[][50] = {"Emily","Benjamin","Olivia","Jacob","Sophia"};
    int n = sizeof(names) / sizeof(names[0]);
    int i, j;
    char key[50];

    for (i = 1; i < n; i++) {
        strcpy(key, names[i]);
        j = i - 1;

        while (j >= 0 && strcmp(names[j], key) > 0) {
            strcpy(names[j + 1], names[j]);
            j = j - 1;
        }
        strcpy(names[j + 1], key);
    }

    printf("Sorrted array:\n");
    for (i = n-1; i >= 0; i--) {
        printf("%s\n", names[i]);
    }

    return 0;
}
