//
//  main.c
//  exercise 04
//
//  Created by 추서연 on 2023/10/08.
//

#include <stdio.h>

int main (int argc, char *argv[])
{ 
    unsigned int x;
    int b;
    
    printf("input a number :");
    scanf("%ui", &x);
    
    for (b=0; x!=0; x>>=1) // -> x = x >> 1
    {
        if(x & 1)
        {
            b++;
        }
    }
    printf("The result is : %i\n", b);
    return 0;
}
