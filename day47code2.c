//find the longest world in a sentence?
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[50] = "";
    char word[50];
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int i = 0, j = 0;
    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > strlen(longest)) {
                strcpy(longest, word);
            }
            j = 0; // reset for next word
        }
        i++;
    }

    // Check last word
    word[j] = '\0';
    if (strlen(word) > strlen(longest)) {
        strcpy(longest, word);
    }

    printf("Longest word: %s\n", longest);
    return 0;
}

