#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *file = fopen("students_c.csv", "w");
    if (file == NULL) {
        perror("Cannot create CSV");
        return 1;
    }

    fprintf(file, "Alice,80\nBob,90\nCharlie,70\nInvalid,abc\n");
    fclose(file);

    file = fopen("students_c.csv", "r");
    if (file == NULL) {
        perror("Cannot open CSV");
        return 1;
    }

    char line[256], name[100], scoreText[100], *end;
    double score, total = 0;
    int count = 0;

    while (fgets(line, sizeof(line), file)) {
        char *comma = strchr(line, ',');
        if (comma == NULL) {
            printf("Skipping malformed row.\n");
            continue;
        }

        *comma = '\0';
        strcpy(name, line);
        strcpy(scoreText, comma + 1);

        score = strtod(scoreText, &end);
        while (*end == ' ' || *end == '\n' || *end == '\r' || *end == '\t')
            end++;

        if (end == scoreText || *end != '\0') {
            printf("Skipping invalid row: %s\n", name);
            continue;
        }

        printf("%s: %.2f\n", name, score);
        total += score;
        count++;
    }

    if (count > 0)
        printf("Average score: %.2f\n", total / count);
    else
        printf("No valid records found.\n");

    fclose(file);
    return 0;
}
