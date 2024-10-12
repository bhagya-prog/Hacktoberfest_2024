#include <stdio.h>
#include <ctype.h>
int count_vowels(const char *str) {
    int count = 0;
    char ch;
    while (*str) {
        ch = tolower(*str);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        
        str++;
    }
    
    return count;
}

int main() {
    char input_string[100];
    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);
    int vowel_count = count_vowels(input_string);
    printf("Number of vowels: %d\n", vowel_count);
    
    return 0;
}
