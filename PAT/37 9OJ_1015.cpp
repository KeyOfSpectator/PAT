////
////  37 9OJ_1015.cpp
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
//    //x--;
//    while(x--){
//        result *= 10;
//    }
//    return result;
//}
//
//int main(){
//    int a , b , k;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d %d %d" , &a , &b , &k)!=EOF){
//        if(a == 0 && b==0) break;
//        int s = squre(k);
//        int tail_a = a%s ;
//        int tail_b = b%s ;
//        if(tail_a != tail_b)
//            printf("%d\n" , (tail_a + tail_b));
//        else
//            printf("-1\n");
//    
//    }
//
//}