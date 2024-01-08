#include <stdio.h> 
//#define MAX_SIZE 10
#define MAX_SIZE 5


int main()
{

    //Q1
    // int n;
    // printf("how many numbers : ");
    // scanf("%d" , &n);

    // float numbers[n];

    // printf("Enter numbers \n ");
    // for(int i = 0; i< n; i++ )
    // {
    //     printf("numbers[%d]: ", i );
    //     scanf("%f" , &numbers[i]);
        
    // } 
    // float sum = 0.0;
    // for(int i = 0; i<n; i++)
    // {
    //     sum += numbers[i];
    // }

    // float result = sum / n ;
    

    // printf("Sum : %.2f \n" , sum);
    // printf("Result : %.2f \n" , result);

    //Q2
    

    // int n;
    // int counter = 0;
    // int numbers[MAX_SIZE];


    // while(counter < MAX_SIZE)
    // {
    //     printf("Enter number: ");
    //     scanf("%d" ,&n);
    //     if(n==-1)
    //        break;

    //     numbers[counter] = n; //you are keeping value of array 
    //     counter ++;  

    // }
    // for(int i = 0; i<counter; i++)
    // {
    //     int result = 0;
    //     result = numbers[i]*numbers[i];
    //     printf("%d. square : %d \n ", numbers[i], result );

    //}

    //Q3
    // int n;
    // int counter = 0;
    // int orders[MAX_SIZE];
    // printf("Enter number: ");
    // scanf("%d" , &n);
    

    // while(counter < MAX_SIZE )
    // {
    //     orders[counter]= n % 10;
    //     n = n / 10;
    //      if (orders[counter] != 0) {
    //         printf(" order: %d\n", orders[counter]);
    //     }
    //     counter ++;
        
    // }

    //Q4
    // int n;
    // int numbers[10];
    // for (int i = 0; i <= 9 ; i++)
    // {
    //     printf("Enter number : " );
    //     scanf("%d" , &n);
    //     numbers[i] = n;

        
    // }
    // for(int i = 9 ; i>=0 ; i--)
    //     {
    //         printf("%d. value : %d \n " ,10 - i , numbers[i]);
                      
    //     }



    return 0;

}