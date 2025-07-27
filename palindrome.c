#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], cleaned[100];
    int i, j = 0, len, isPalindrome = 1;
    printf("Enter a word or phrase: ");
    fgets(str, sizeof(str), stdin);  
    for (i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {
            cleaned[j++] = tolower(str[i]);
        }
    }
    cleaned[j] = '\0';

    len = strlen(cleaned);
    for (i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("It is a palindrome.\n");
    else
        printf("It is not a palindrome.\n"); 

    return 0;
}
