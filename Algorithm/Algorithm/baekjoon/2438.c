//
//  2438.c
//  Algorithm
//
//  Created by jinzzam on 22/11/2018.
//  Copyright © 2018 jinzzam. All rights reserved.
//

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}
