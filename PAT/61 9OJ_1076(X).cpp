////
////  61 9OJ_1076.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/10.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//
//struct bigInteger{
//    int digit[100];
//    int size;
//    void init(){
//        for(int i=0 ; i<100 ; i++) digit[i] = 0;
//        size = 0;
//    }
////    void set(char str[]){
////        int L = strlen(str);
////        for(int i = L-1 , t = 0 , c=1 , j=0  ; i>=0 ; i--){
////            t = (str[i]-'0')*c;
////            c*=10;
////            j++;
////            if(j==4 || i==0){
////                digit[size++] = t;
////                t = 0;
////                j = 0;
////                c = 1;
////            }
////        }
////        
////    }
//    
//    void set(int x){
//        init();
//        int tmp = x%=10000;
//        x /= 10000;
//        while(tmp!=0){
//            digit[size++] = tmp;
//            tmp = x%=10000;
//            x /= 10000;
//        }
//        
//    }
//    
//    void output(){
//        for(int i=size-1 ; i>=0 ; i--){
//            if(i!=size-1)
//                printf("%04d" , digit[i]);
//            else
//                printf("%d" , digit[i]);
//        }
//        printf("\n");
//    }
//    
//    bigInteger operator * (const int &A) const {
//        bigInteger ret;
//        ret.init();
//        int carry = 0;
//        for(int i=0 ;   i<size ; i++){
//            int tmp = A * digit[i] + carry;
//            carry = tmp / 10000;
//            tmp %= 10000;
//            ret.digit[ret.size++] = tmp;
//        }
//        if(carry != 0){
//            ret.digit[ret.size++] = carry;
//        }
//        return ret;
//    }
//    
//}a , b;
//
//
//
//int main(){
//    int n;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &n)!=EOF){
//        a.set(1);
//        for(int i=1 ; i<=n ;i++){
//            //b.set(i);
//            a = a*i;
//        }
//        a.output();
//        
//        
//    
//    }
//    return 0;
//}