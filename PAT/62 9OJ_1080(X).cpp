////
////  62 9OJ_1080.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/10.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//struct bigInteger{
//    int digit[100];
//    int size;
//    void init(){
//        for(int i=0 ;i<100 ; i++) digit[i]=0;
//        size = 0;
//    }
//    void set(int x){
//        init();
//        do{
//            digit[size++] = x%10000;
//            x/=10000;
//        }while(x!=0);
//    }
//    void output(){
//        for(int i = size-1 ; i>=0 ; i--){
//            if(i!=size-1)
//                printf("%04d" , digit[i]);
//            else
//                printf("%d" , digit[i]);
//        }
//        printf("\n");
//    }
//    bigInteger operator + (const bigInteger &A) const{
//        bigInteger ret;
//        ret.init();
//        int carry = 0;
//        for(int i=0 ; i<size ; i++){
//            int tmp = A.digit[i] + digit[i] + carry;
//            ret.digit[ret.size++] = tmp%10000;
//            carry = tmp/10000;
//        }
//        if(carry != 0){
//            ret.digit[ret.size++] = carry;
//        }
//        return ret;
//    }
//    
//    bigInteger operator * (const int &A) const {
//        bigInteger ret;
//        ret.init();
//        int carry = 0;
//        for(int i=0 ; i<size ; i++){
//            int tmp = A * digit[i] + carry;
//            ret.digit[ret.size++] = tmp%10000;
//            carry = tmp / 10000;
//            
//        }
//        if(carry != 0 ){
//            ret.digit[ret.size++] = carry;
//        }
//        return ret;
//        
//    }
//    
//    bigInteger operator / (const int &A) const{
//        bigInteger ret;
//        ret.init();
//        
//        int remainder = 0;
//        
//        for(int i=size-1 ; i>=0 ; i--){
//            int t = ((remainder * 10000) + digit[i]) / A;
//            int r = ((remainder * 10000) + digit[i]) % A;
//            ret.digit[i] = t;
//            remainder = r;
//        }
//        ret.size = 0;
//        for(int i=0 ; i<100 ; i++){
//            if(digit[i]!=0) ret.size = i;
//        }
//        ret.size++;
//        return ret;
//        
//    }
//    
//    int operator % (const int &A) const {
//        int remainder = 0;
//        for(int i=size-1 ; i>=0 ; i--){
//            int t = (remainder * 10000 + digit[i]) / A;
//            int r = (remainder * 10000 + digit[i]) % A;
//            remainder = r;
//        }
//        return remainder;
//    }
//};
//
//int main(){
//
//    return 0;
//}
