#include <stdio.h>
int main ()
{
    int n = 42;
    printf ( "n++ is fourty-two: %d\n", n++ );
    printf ( "n is now fourty-three: %d\n", n );
    n = 42;
    printf ( "n=n+1 is fourty-three: %d\n", n=n+1 );
    n = 42;
    printf ( "n+=1 is also fourty-three: %d\n", n+=1 );
}
