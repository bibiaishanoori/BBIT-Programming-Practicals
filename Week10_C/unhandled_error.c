#include <stdio.h>

int main(void) {
    FILE *file = fopen("missing_c.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int value;
    if (fscanf(file, "%d", &value) == 1)
        printf("Value: %d\n", value);
    else
        printf("Invalid or empty file.\n");

    fclose(file);
    return 0;
}
