#include <stdio.h>
#include <math.h>


int maximum(int a, int b, int c)
{
    int max = a;
    if(b>max)
    {
        max = b;
    }
    if(c>max)
    {
        max = c;
    }
    return max;
}

int main(void)
{
    int num1;
    int num2;
    int num3;

    printf("Enter number : ");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("Max number : %d\n", maximum(num1, num2, num3));
    return 0;
}

////////////////////
math.h --> mathematic
ctype.h --> uppercase,lowercase,properties of characters
stio.h --> standard input/output functions
stdlib.h --> numbers to text, text to numbers, memory, random
string.h --> string processing
time.h --> time and date

FUNCTİONS OF MATH
sqrt(x) --> square root 
exp(x) --> exponential 
log(x) --> natural log(base e) 
log10(x) --> logarithm (base 10)
fabs(x) --> absolute value
ceil(x) --> rounds to the smallest integer not less than x
floor(x) --> rounds to the largesr integer not greater than x
pow(x, y) --> x^y
fmod(x,y) --> x % y (float)
sin(x) --> sin(x) (x in radians)
cos(x) --> cos(x)
tan(x) --> tan(x)

STORAGE CLASSES
Auto
--created and destroyed
auto --> default for local variables
        auto double x,y;
regiter(kaydedici) --> put variable into high speed register
        register int counter;
Static
--entire program execution(süreç) , default value is zero
static --> local, defined in functions, keep value after function ends, its for own function

////////////////////
int multiplesOfFour(numbers[5])
{   
    for(int i= 0 ; i<5; i++)
    {
        if(numbers[i] % 4 == 0)
        {
            printf("This numbers is multiple of four.\n");
        }
        else
        {
            printf("It's not multiple of four\n");
        }
    }
    
    
}

int main (void)
{
    int numbers[5];

    printf("Enter numbers; \n");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &numbers[i]);    
    }

    printf("%d", multiplesOfFour(numbers));

    return 0;


}
