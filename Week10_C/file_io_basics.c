#include <stdio.h>

int main(void) {
    FILE *out = fopen("numbers_c.txt", "w");
    if (out == NULL) {
        perror("File creation failed");
        return 1;
    }

    fprintf(out, "10 20 30 40 50");
    fclose(out);

    FILE *in = fopen("numbers_c.txt", "r");
    if (in == NULL) {
        perror("File opening failed");
        return 1;
    }

    int number, sum = 0;
    while (fscanf(in, "%d", &number) == 1)
        sum += number;

    printf("Sum of numbers: %d\n", sum);
    fclose(in);
    return 0;
}
