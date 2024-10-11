#include <stdio.h>
#include <ctype.h>  
int countVowels(char str[]) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        char ch = tolower(str[i]); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        i++;
    }
    
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int vowels = countVowels(str);
    printf("Number of vowels: %d\n", vowels);
    
    return 0;
}
