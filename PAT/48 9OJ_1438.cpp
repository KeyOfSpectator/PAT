////
////  48 9OJ_1438.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/31.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//int get_gcb(int a, int b){
//    if(b == 0) return a;
//    else{
//        return get_gcb(b , a%b);
//    }
//}
//
//int main(){
//    int a , b;
//    while(scanf("%d %d" , &a , &b )!=EOF){
//        if(a*b != 0)
//            printf("%d\n" , (a*b)/get_gcb(a , b));
//        else
//            printf("0\n");
//    }
//
//    return 0;
//}