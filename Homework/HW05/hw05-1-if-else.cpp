/*
    รับตัวอักขระมาทั้งหมด 4 ค่า แล้วนำมาแสดงผลย้อนกลับ เช่น กรอกค่า L M X Y ต้องแสดงเป็น Y X M L เป็นต้น
    
    Test case:
        L M Y K
    Output:
        Result: K Y M L

    Test case:
        A B C D
    Output:
        Result: D C B A
*/
#include <stdio.h>
int main() {
    char char1[15], char2[15], char3[15], char4[15] ;
    int a = 0, b = 1, c = 2, d = 3, e = 4 ;
    printf( "enter u character : " ) ;
    scanf( "%s %s %s %s", char1, char2, char3, char4 ) ;
    if ( e > d ) {
        printf( "Result: %s", char4 ) ;
        if ( e > c ) {
            printf(" %s", char3) ;
            if ( e > b ) {
                printf( " %s", char2 ) ;
                if ( e > a ) {
                    printf(" %s", char1) ;
                }
            }
        }
    } else {
        printf( "Error" );
    }
    return 0;
}