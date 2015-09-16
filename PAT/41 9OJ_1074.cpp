////
////  41 9OJ_1074.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/29.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//int squre(int x){
//    int result = 1;
//    while(x--){
//        result *= 10;
//    }
//    return result;
//}
//
//int buf[5];
//
//void check(int n){
//    int x = n*n;
//    int i=0;
//    int squre = 10;
//    while(x/squre > 0){
//        buf[i++] = (x%squre) / (squre/10);
//        squre *= 10;
//    }
//    buf[i++] = (x%squre) / (squre/10);
//    for(int j = 0 ; j<i ; j++){
//        if(buf[j]!= buf[i-j-1])
//            return;
//    }
//    
//    printf("%d\n" , n);
//}
//
//int main(){
//    
//    for(int i=0 ; i<256 ; i++){
////        int tmp = i*i;
//        check(i);
//    
//    }
//
//    return 0;
//}