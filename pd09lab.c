#include <stdio.h>
int main()
{
    Q1
   int A;
   int B;
   int C;
   printf("Enter first number : \n");
   scanf("%d" , &A);
   printf("Enter second number : \n");
   scanf("%d" , &B);
   printf("Enter third number : \n");
   scanf("%d" , &C);

   if (A>B && B>C)
    printf("Largest number : %d \n" , A);
   else if (B>A && B>C)
    printf("Largest number : %d \n " , B);
   else
    printf("Largest number : %d \n " , C);
    Q2
    int N ;
    int i;
    int result = 1;
    printf("Enter a number:");
    scanf("%d" , &N);
    i = 1;
    while (i<=N)
    {
       result *= i;
       i++;
    }
    printf("Factorial N : %d \n", result);

    Q3
    for (int i = 1000; i<=2000 ; i++)
    {
        if(i % 2 == 0)
            printf("even number: %d\n", i);
        else 
            continue;
    }

    Q4
    int N,
    reversed = 0,
    reminder, 
    original;

    printf("Enter number: ");
    scanf("%d", &N);

    original = N; //You should keep N at diffirent value becasue N will be 0

    while (N != 0) {
        reminder = N % 10;
        reversed = reversed * 10 + reminder;
        N = N / 10;
    }

    if (original == reversed) 
        printf("Palindrome\n");
    else 
        printf("Not palindrome\n");

    Q5
    int N ;
    int result = 1;
    printf("Enter number : ");
    scanf("%d", &N);
    
    

     
    return 0;

}