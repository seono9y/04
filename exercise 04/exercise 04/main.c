//
//  main.c
//  exercise 04
//
//  Created by 추서연 on 2023/10/08.
//

#include <stdio.h>

int main (int argc, char *argv[])
{ 
    int a;
    
    printf("input seconds : ");
    scanf("%i", &a);
    
    printf("%i seconds - %i:%i \n", a, a/60, a%60);
    
    return 0;
}
