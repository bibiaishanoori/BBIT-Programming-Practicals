#include <stdio.h>

double calculateAverage(int scores[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }

    return (double)sum / size;
}

void displayAboveAverage(int scores[], int size, double average) {
    printf("\nScores above average (%.2f):\n", average);

    int found = 0;

    for (int i = 0; i < size; i++) {
        if (scores[i] > average) {
            printf("Score %d at position %d\n", scores[i], i + 1);
            found = 1;
        }
    }

    if (!found) {
        printf("None\n");
    }
}

int main() {
    const int SIZE = 10;
    int scores[SIZE];

    printf("Enter 10 student scores:\n");

    for (int i = 0; i < SIZE; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    double average = calculateAverage(scores, SIZE);

    printf("\n--- Results ---\n");
    printf("Average score: %.2f\n", average);

    displayAboveAverage(scores, SIZE, average);

    int highest = scores[0];
    int lowest = scores[0];
    int highestPosition = 1;
    int lowestPosition = 1;
    int aboveAverageCount = 0;

    for (int i = 0; i < SIZE; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
            highestPosition = i + 1;
        }

        if (scores[i] < lowest) {
            lowest = scores[i];
            lowestPosition = i + 1;
        }

        if (scores[i] > average) {
            aboveAverageCount++;
        }
    }

    printf("\nHighest score: %d at position %d\n",
           highest, highestPosition);
    printf("Lowest score: %d at position %d\n",
           lowest, lowestPosition);
    printf("Number of scores above average: %d\n",
           aboveAverageCount);

    return 0;
}
