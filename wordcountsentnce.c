#include <stdio.h>
int main() {
    char sentence[1000];
    char word[100];
    int count = 0;
    int i, j, k;
    int sentence_len = 0, word_len = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == '\n') 
        {
            sentence[i] = '\0';
            break;
        }
    }
    sentence_len = i;
    printf("Enter a word to count: ");
    scanf("%s", word);
    for (i = 0; word[i] != '\0'; i++);
    word_len = i;
    for (i = 0; i <= sentence_len - word_len; i++) {
        for (j = 0, k = i; j < word_len && sentence[k] == word[j]; j++, k++);
        if (j == word_len && (i == 0 || sentence[i - 1] == ' ') && (sentence[i + word_len] == ' ' || sentence[i + word_len] == '\0')) 
        {
            count++;
        }
    }
    printf("The word '%s' appears %d times in the sentence.\n", word, count);
    return 0;
}