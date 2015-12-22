////
////  57 9OJ_1441.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/9.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//int main(){
//    int a , b;
//    while(scanf("%d %d" , &a , &b)!=EOF){
//        if(a == 0 && b==0) break;
//        
//        int ans = 1;
//        while(b != 0){
//            if(b%2==1){
//                ans*=a;
//                ans %= 1000;
//            
//            }
//            b/=2;
//            a*=a;
//            a%=1000;
//        }
//        printf("%d\n" , ans);
//    
//    }
//
//    return 0;
//}