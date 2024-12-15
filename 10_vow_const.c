#include <stdio.h>
int main() 
{
    char str[100];
    int vowels = 0, consonants = 0;
    
    // Input the string
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
     // Read the whole line, including spaces

    // Iterate through the string and count vowels and consonants
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        // Check if the character is a letter
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
         {
            // Check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
                {
                vowels++;
            } else
            {
                consonants++;
            }
        }
    }
printf("vowels=%d",vowels);
printf("consonants=%d",consonants);
return 0;
}