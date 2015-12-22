////
////  42 9OJ_1124.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/29.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
///* big num */
//
//#include <stdio.h>
//
//
////int main(){
////    int n;
////    freopen("/Users/KeyOfSpectator/input", "r", stdin);
////    while(scanf("%d" , &n)!=EOF){
////        if(n==0) break;
////        while(n>=10){
////            int result = 0;
////            int squre = 10;
////            while(n/squre > 0){
////                result += ((n%squre) / (squre/10));
////                squre *= 10;
////            }
////            result += ((n%squre) / (squre/10));
////            n = result;
////        }
////        printf("%d\n" , n);
////    }
////
////    return 0;
////}
//
//char num[101];
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%s" , num)!=EOF){
//        if(num[1] == 0 && num[0] == '0' )break;
//        int n = 0;
//        for(int i=0 ; num[i]!=0 ; i++){
//            n += num[i] - '0';
//        }
//        while(n>=10){
//            int result = 0;
//            int squre = 10;
//            while(n/squre > 0){
//                result += ((n%squre) / (squre/10));
//                squre *= 10;
//            }
//            result += ((n%squre) / (squre/10));
//            n = result;
//        }
//        printf("%d\n" , n);
//    }
//
//    return 0;
//}