////
////  60_Are They Equal (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/12/3.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <sstream>
//#include <string>
//using namespace std;
//
//stringstream ss;
//
//float A , B;
//int N;
//int a , b;
//int a_col , b_col;
//
//void calA(float X){
//    a_col = 0;
//    while(X > 1){
//        a_col ++;
//        X/=10;
//    }
//    while(X < 0.1){
//        a_col--;
//        X*=10;
//    }
//    
//    for(int i=0 ; i<N ; i++){
//        X*=10;
//    }
//    a = (int)X+(1e-6);
//    
//}
//
//void calB(float X){
//    b_col = 0;
//    while(X > 1){
//        b_col ++;
//        X/=10;
//    }
//    while(X < 0.1){
//        b_col--;
//        X*=10;
//    }
//    
//    for(int i=0 ; i<N ; i++){
//        X*=10;
//    }
//    b = (int)X+(1e-6);
//    
//}
//
//string calZero(){
//    string ret;
//    for(int i=0 ; i<N ; i++){
//        ret += "0";
//    }
//    return ret;
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%d %f %f" , &N , &A , &B);
//    A += (1e-6);
//    B += (1e-6);
//    
//    if(A == 0.0 && B == 0.0){
//        printf("YES 0.%s*10^0\n" , calZero().c_str());
//        return 0;
//    }
//    else if(A == 0.0 && B!=0.0){
//        calB(B);
//        printf("NO 0.%s*10^0 0.%d*10^%d\n" , calZero().c_str() ,  b , b_col);
//        return 0;
//    }
//    else if(A != 0.0 && B==0.0){
//        calA(A);
//        printf("NO 0.%d*10^%d 0.%s*10^0\n"  ,  a , a_col , calZero().c_str());
//        return 0;
//    }
//    
//    
//    calA(A);
//    calB(B);
//    
//    if(a_col == b_col && a == b){
//        printf("YES 0.%d*10^%d\n" , a , a_col);
//    }
//    else
//        printf("NO 0.%d*10^%d 0.%d*10^%d\n" , a , a_col , b , b_col);
//    
//    
//    
//    return 0;
//}