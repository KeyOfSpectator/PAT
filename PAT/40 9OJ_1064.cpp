////
////  39 9OJ_1064.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/29.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//void check(int i){
//    int tmp = 9*i;
//    if(tmp>9999) return;
//    int a , b , c , d;
//    a = i%10;
//    b = (i%100) / 10;
//    c = (i%1000) / 100;
//    d = (i%10000)/1000;
//    int a2 , b2 , c2 , d2;
//    a2 = tmp%10;
//    b2 = (tmp%100) / 10;
//    c2 = (tmp%1000) / 100;
//    d2 = (tmp%10000) /1000;
//    
//    if( a == d2 && b == c2 && c == b2 && d == a2)
//        printf("%d\n" , i);
//}
//
//int main(){
//    
//    for(int i=1000 ; i<10000 ; i++){
//        check(i);
//    
//    }
//
//    return 0;
//}