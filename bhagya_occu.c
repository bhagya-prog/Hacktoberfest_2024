#include <stdio.h>
int count_occurrences(const char *str, char ch) {
    int count = 0;
    while (*str) {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    
    return count;
}

int main() {
    char input_string[100];
    char character;
    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);
    printf("Enter the character to find: ");
    scanf("%c", &character);
    int occurrence_count = count_occurrences(input_string, character);
    printf("The character '%c' occurred %d time(s) in the string.\n", character, occurrence_count);
    
    return 0;
}
