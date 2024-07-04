#include <stdio.h>
#include <string.h>


int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}


int countAnagrams(char* word) {
    int length = strlen(word);
    int count[256] = {0};


    for (int i = 0; i < length; i++) {
        count[(unsigned char)word[i]]++;
    }


    int anagrams = factorial(length);


    for (int i = 0; i < 256; i++) {
        if (count[i] > 1) {
            anagrams /= factorial(count[i]);
        }
    }

    return anagrams;
}

int main() {
    char word[15];
    printf("Enter a word: ");
    scanf("%14s", word);

    int anagrams_count = countAnagrams(word);
    printf("Number of anagrams: %d\n", anagrams_count);

    return 0;
}
