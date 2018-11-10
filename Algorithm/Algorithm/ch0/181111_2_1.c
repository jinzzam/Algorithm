//
//  181111_2_1.c
//  Algorithm
//
//  Created by jinzzam on 11/11/2018.
//  Copyright © 2018 jinzzam. All rights reserved.
//

#include <stdio.h>

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x = 1, y = 2;
    swap(&x, &y);
    printf("%d %d\n", x, y);
}
