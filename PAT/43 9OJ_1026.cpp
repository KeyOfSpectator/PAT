////
////  43 9OJ_1026.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/29.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//int main(){
//    long long a , b;
//    int m;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &m)!=EOF){
//        if(m==0) break;
//        scanf("%lld%lld" , &a , &b);
//        a = a+b;
//        int ans[100];
//        int size = 0;
//        
//        do{
//            ans[size++] = a%m;
//            a /= m;
//        }
//        while(a!=0);
//        //if(a != 0) ans[size ++] = a%m;
//        for(int i=size-1 ; i>=0 ; i--){
//            printf("%d" , ans[i]);
//        }
//        printf("\n");
//    
//    }
//
//    return 0;
//}