#include <stdio.h>
#include <math.h>

//Q1

float areaOfSquare(float length)
{
    return length*length;
}
int main()
{
    float length ;
    printf("Enter length : ");
    scanf("%f", &length);
    printf("Area of square : %.2f\n", areaOfSquare(length));
}

//Q2

int number(int sum)
{
    return sum/5;
}
int main()
{
    int sum = 0;
    int num;
    printf("Enter 5 numbers: \n");
    for(int i = 0; i<=4; i++)
    {
        scanf("%d" , &num );
        sum += num;
    }
    printf("Average: %d \n " ,number(sum));
}

//Q3

int primeNumbers(int num)
{
    for(int i = 2; i<=num/2; i++)
    {
        if(num % i == 0)
        {
            return 0; //not prime
        }

    }
    return 1;

}
int armstrongNumber(int num)
{   
    int originalNum = num;
    int exponent = 0;

    while(num>0)
    {
        num /= 10;
        exponent++;
    }
    num = originalNum;
    int order[90];
    int sum = 0;
    for(int i = 0; i < exponent; i++)
    {
        order[i] = num % 10;
        sum += pow(order[i], exponent);
        num  /= 10;
    }
    return sum == originalNum;
}


int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if(primeNumbers(num) && armstrongNumber(num))
    {
        printf("Both of them\n ");
    }
    else if(primeNumbers(num))
    {
        printf("Prime number\n");
    }
    else if(armstrongNumber(num))
    {
        printf("Arstrong number\n");
    }
    return 0;
}

//Q4

int wordCount(char str[])
{ 
    int wordCounter = 0;
    
    int i  = 0;
    while(str[i]!= '\0')
    {
        if(str[i]== ' ' || str[i]== '\t' || str[i]== '\n')
        {
            wordCounter++;
        }
        i++;

    }
    wordCounter++;


    return wordCounter;

}
int main()
{
    char str[1000];
    printf("Enter your sentence : ");
    gets(str);

    printf("This sentence has %d words\n", wordCount(str));
    return 0;


}
