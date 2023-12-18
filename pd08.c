#include <stdio.h>

int main()
{
    // "\" to the compiler next character is perceived normally gives the sign
    //  \n =>next line
    //  \t =>next tab
    //  \r =>takes per line (satır baiına alır)
    // "#include" => library calling
    // "#define" => assign equivalent expression
    // stdio.h => standard input/output
    // conio.h => dos supported input/output
    // math.h => mathematical functions 
    // stdlib.h => conversion ,sorting, searching etc.

    // "#c" for char
    // "#d" for int
    // "#f" for float
    // "#If" for double

    // getchar() take one character
    // putchar() write one character on screen putchar('B') / putchar(c)
    

    //Q1
    int num1;
    int num2;
    printf("Enter first num:");
    scanf("%d", &num1);
    printf("Enter second num:");
    scanf("%d", &num2);
    printf("entered num : %d\n", num1);
    printf("entered num : %d\n", num2);
    
    //Q2
    float r;
    float area;
    printf("Enter radius:");
    scanf("%f", &r);
    area = ((3.14)*r*r);
    printf("area:%f\n" ,area);

    //Q3
    int num;
    printf("Enter num:");
    scanf("%d" ,&num);
    if (num%2==0)
        printf("even\n");
    else
        printf("odd\n");

    //Q4
    int T;
    printf ("Temperature:");
    scanf("%d" ,&T);
    if (T<0)
        printf("Temperature is below the freezing point\n");
    else if (T>0)
        printf("Temperature is above the freezing point\n");
    else 
        printf("Temperature is freezing point\n");

    //Q5
    float F;
    float C;
    printf("Enter temperature in fahrenheit");
    scanf("%f" , &F);
    C = (F-32) / 1.8;
    printf("C:%f\n" ,C);
    
    //Q6
    float ft;
    float cm;
    printf("Enter length in feet:");
    scanf("%f" , &ft);
    cm = ft / (0.032808);
    printf("cm:%f\n" ,cm);

    //Q7
    int A, B, C;
    printf("Enter three numbers:\n");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    if (A > B && A > C)
        printf("A is the largest number\n");
    else if (B > C && B > A)
        printf("B is the largest number\n");
    else if (C > A && C > B)
        printf("C is the largest number\n");
    else if (A == B && B == C)
        printf("All numbers are equal\n");
    else
        printf("Two numbers are equal\n");


    return 0;






}