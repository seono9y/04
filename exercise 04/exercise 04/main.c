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
    
    printf("input seconds :");
    scanf("%i", &a);
    

    if (a >= 0) {
        int hours = a / 3600;
        int remainingSeconds = a % 3600;
        int minutes = remainingSeconds / 60;
        int seconds = remainingSeconds % 60;

        printf("시간: %i 시, 분: %i 분, 초: %i 초\n", hours, minutes, seconds);
    } else {
        printf("올바른 정수를 입력하세요.\n");
    }

    return 0;
}
    
