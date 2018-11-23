//
//  1924.c
//  Algorithm
//
//  Created by jinzzam on 23/11/2018.
//  Copyright © 2018 jinzzam. All rights reserved.
//

//#include <stdio.h>
//
//int main(){
//    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    int month, date;
//    scanf("%d %d", &month, &date);
//    int sum = 0;
//    for(int i=1; i<month; i++){
//        sum += month_days[i-1];
//    }
//    sum += date;
//    int result = sum % 7;
//    switch(result){
//        case 1 : {
//            printf("MON");
//            break;
//        }
//        case 2 : {
//            printf("TUE");
//            break;
//        }
//        case 3 : {
//            printf("WED");
//            break;
//        }
//        case 4 : {
//            printf("THU");
//            break;
//        }
//        case 5 : {
//            printf("FRI");
//            break;
//        }
//        case 6 : {
//            printf("SAT");
//            break;
//        }
//        case 0 : {
//            printf("SUN");
//            break;
//        }
//    }
//}
