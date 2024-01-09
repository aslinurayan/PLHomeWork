#include <stdio.h>

int main() {

    //Q1
    // char str[80];
    // int wordCount = 1;
    // int aCharacterCount = 0;
    // int isWord = 0;

    // printf("Enter a string: ");
    // fgets(str, 80, stdin);

    // for (int i = 0; str[i] != '\0'; i++) {
    //     if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
    //         if (isWord) /*isWord == 1 ? */ {
    //             printf("%d. word has %d 'a' characters.\n", wordCount, aCharacterCount);
    //         }
    //         isWord = 0;
    //         aCharacterCount = 0; //if you don't write here it will continue increasingly
    //         wordCount++;
    //     } 
    //     else {
    //         if (str[i] == 'a') {
    //             aCharacterCount++;
    //         }
    //         isWord = 1;
            
    //     }
        
    // }

    // if (isWord) {
    //     printf("%d. word has %d 'a' characters.\n", wordCount, aCharacterCount);
    // }

    // char str[50];
    // printf("Enter string : ");
    // gets(str);
    // int wordCounter = 0 , aCounter = 0;
    // for(int i = 0; str[i] != '\0'; i++)
    // {
    //     if(str[i]=='a')
    //     {
    //         aCounter++;
    //     }
    //     else if(str[i]==' ')
    //     {
    //         wordCounter++;
    //         printf("%d. word has %d 'a' \n" , wordCounter, aCounter);
    //         aCounter = 0; //you should reset because it will countinue with next word
    //     }
    // }
    // wordCounter++; //Because if last one is null there is another word
    // printf("%d. word has %d 'a' \n" , wordCounter, aCounter);


    //Q2
    char str[100];
    char str2[100];
    printf("Enter first string: ");
    gets(str);
    
    printf("Enter second string: ");
    gets(str2);
    int length = 0;
    int i = 0;
    for( i = 0; str[i] != '\0'; i++)
    {
        length++;
        
    }
    printf("%s ", str2);
    for(i = length; i >= 0 ; i--)
    {
        printf("%c", str[i]); // "%c" for just one character
    }
    printf("\n");



    return 0;
}