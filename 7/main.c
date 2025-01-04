#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *writeFile1, *readFile, *writeFile2;
    char sentence[100];

    // Write to the first file
    writeFile1 = fopen("first_file.txt", "w");
    if (writeFile1 == NULL) {
        perror("Error opening first_file.txt for writing");
        return 1;
    }
    fprintf(writeFile1, "This is a sample sentence.");
    fclose(writeFile1);

    // Read from the first file
    readFile = fopen("first_file.txt", "r");
    if (readFile == NULL) {
        perror("Error opening first_file.txt for reading");
        return 1;
    }
    if (fgets(sentence, sizeof(sentence), readFile) == NULL) {
        perror("Error reading from first_file.txt");
        fclose(readFile);
        return 1;
    }
    fclose(readFile);

    // Write to the second file
    writeFile2 = fopen("second_file.txt", "w");
    if (writeFile2 == NULL) {
        perror("Error opening second_file.txt for writing");
        return 1;
    }
    fprintf(writeFile2, "%s", sentence);
    fclose(writeFile2);

    printf("Sentence written to first_file.txt and then written to second_file.txt\n");

    return 0;
}