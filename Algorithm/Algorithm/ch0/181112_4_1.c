//
//  181112_4_1.c
//  Algorithm
//
//  Created by jinzzam on 12/11/2018.
//  Copyright © 2018 jinzzam. All rights reserved.
//

#include <stdio.h>
#define QUEUE_CAPACITY 8

int queue[QUEUE_CAPACITY];
int head = 0;
int tail = -1;
int queue_size = 0;

void enqueue(int number){
    if(queue_size == QUEUE_CAPACITY){
        printf("queue full!\n");
        return;
    }
    tail++;
    queue[tail] = number;
    queue_size++;
    return;
}

int dequeue(){
    int num;
    if(queue_size == 0){
        printf("queue empty!\n");
        return 0;
    }
    num = queue[head++];
    queue_size--;
    return num;
}

int main(){
    int number, r;
    
    do{
        printf("input number : ");
        scanf("%d", &number);
        
        if(number > 0){
            enqueue(number);
        } else if (number == 0){
            r = dequeue();
            (r == 0) ? printf("") : printf("[%d]\n", r);
        }
    } while(number >= 0);
    return 0;
}
