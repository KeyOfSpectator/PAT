////
////  PAT 1001.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/8.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//int list[10];
//
//int abs(int x){
//    return x>0?x:-x;
//}
//
//int main(){
//    int a , b;
//    while(scanf("%d %d" , &a , &b)!=EOF){
//        int result = a+b;
//        if(result < 0)
//            printf("-");
//        if(result == 0){
//            printf("0\n");
//            continue;
//        }
//            
//        int count = 0;
//
//        while(result != 0){
//            list[count++] = abs(result%10);
//            result /= 10;
//        }
//        
//        int tmp = 0;
//        for(int i=count-1 ; i>=0 ; i--){
//            printf("%d" , list[i]);
//            tmp++;
//            if(i%3 == 0 && i!=0)
//                printf(",");
//        }
//        printf("\n");
//    
//    }
//
//    
//}