//  main.c
//  lightHouseLabsFuzzBizzNezz
//
//  Created by Calvin Tirrell on 12/11/15.
//  Copyright © 2015 CT. All rights reserved.

#include <stdio.h>

void FuzzBizz(int b, int f, int n) {
    for (int x = 1; x <= n; x++) {
        if ((x%f == 0) && (x%b == 0)) {
            printf("FuzzBizz\n");
        } else if ((x%f == 0)) {
            printf("Fuzz\n");
        } else if ((x%b == 0)) {
            printf("Bizz\n");
        } else {
            printf("%d\n",x);
        }
    }
}

int main(int argc, const char * argv[]) {
    
    int b, f, n;
    
    printf("Please enter an integer between 100 and 500, including 100 and 500: \n");
    scanf("%d", &n);
    printf("Please enter another integer that is between 1 and 10, including 10: \n");
    scanf("%d", &f);
    printf("Please enter a third integer that is between 1 and 10, including 10: \n");
    scanf("%d", &b);
    printf("\n");
    FuzzBizz(b, f, n);
    return 0;
}