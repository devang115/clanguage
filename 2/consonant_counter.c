#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to count the occurrences of each consonant in a string
void countConsonants(const char *sentence, int counts[]) {
    // Initialize counts to 0
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }

    // Iterate through the sentence
    for (int i = 0; sentence[i] != '\0'; i++) {
        char ch = tolower(sentence[i]);
        // Check if the character is a consonant
        if (isalpha(ch) && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            counts[ch - 'a']++;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <sentence>\n", argv[0]);
        return 1;
    }

    char *sentence = argv[1];
    int consonantCounts[26];

    // Count the consonants
    countConsonants(sentence, consonantCounts);

    // Display the counts
    printf("Consonant counts:\n");
    for (int i = 0; i < 26; i++) {
        if (consonantCounts[i] > 0) {
            printf("%c: %d\n", 'a' + i, consonantCounts[i]);
        }
    }

    return 0;
}