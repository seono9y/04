//
//  main.c
//  exercise 04
//
//  Created by 추서연 on 2023/10/08.
//

#include <stdio.h>

int main (int argc, char *argv[])
{ 
    int a, b;
    
    printf("input two integers : ");
    scanf("%i %i", &a,&b);
    
    printf("%i + %i = %i \n", a, b, a+b);
    printf("%i - %i = %i \n", a, b, a+b);
    printf("%i * %i = %i \n", a, b, a+b);
    printf("%i / %i = %i \n", a, b, a+b);
    printf("%i %% %i = %i \n", a, b, a+b);

    return 0;
}
