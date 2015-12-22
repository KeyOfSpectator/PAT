////
////  37 9OJ_1183.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/29.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
////int squre(int level){
////    int result = 1;
////    while(level--){
////        result *= 10;
////    }
////    return result;
////}
////
////int getLevel(int n){
////    int i=1;
////    while(n>squre(i++)) ;
////    return i;
////    
////}
//
//int getMinSqure(int n){
//    int result = 1;
//    while(n>result){
//        result *= 10;
//    }
//    return result;
//}
//
//int main(){
//    int n;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &n)!=EOF){
//        int minS = getMinSqure(n);
//        int s = n*n;
//        if(s % minS == n){
//            printf("Yes!\n");
//        }
//        else
//            printf("No!\n");
//        
//    
//    }
//
//    return 0;
//}