#include <stdio.h>
#include <string.h>
char first_non_repeating_char(const char *str) {
    int count[256] = {0}; 
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0'; 
}

int main() {
    char input_string[100];
    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);
    char result = first_non_repeating_char(input_string);
    
    if (result) {
        printf("The first non-repeating character is: %c\n", result);
    } else {
        printf("No non-repeating character found.\n");
    }

    return 0;
}
