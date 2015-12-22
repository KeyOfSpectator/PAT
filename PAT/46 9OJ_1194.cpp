////
////  46 9OJ_1194.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/31.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//int eight[100];
//int loc = 0;
//
//int main(){
//    int n;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &n)!=EOF){
//        loc = 0;
//        do{
//            int tmp = n%8;
//            eight[loc++] = tmp;
//            n /= 8;
//            
//        }
//        while(n!=0);
//        for(int i = loc-1 ; i>=0 ; i--){
//            printf("%d" , eight[i]);
//        
//        }
//        printf("\n");
//    }
//
//    return 0;
//}