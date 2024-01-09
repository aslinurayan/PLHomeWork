#include <stdio.h>

int main()
{
    //M[5][9] -> has 5 rows and 9 columns
    int M [2][3] = {{1,2},{3,4}};
    printf("%d" , M[0][0]); 

    int ogrenci_tablosu[ 5 ][ 8 ];
    int i, j;
    for( i = 0; i < 5; i++ ) {
        for(j = 0; j < 8; j++ ) {
            printf( "%d no.'lu ogrencinin ", ( i + 1 ) );
            printf( "%d no.'lu sınavı> ", ( j + 1 ) );
            scanf( "%d", &ogrenci_tablosu[ i ][ j ] );
        }
    } 

    
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

return 0;






}