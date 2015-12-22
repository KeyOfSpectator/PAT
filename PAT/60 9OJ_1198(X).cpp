////
////  60 9OJ_1198.cpp
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
//    
//    void init(){
//        for(int i=0 ; i<100 ; i++) digit[i] = 0;
//        size = 0;
//    }
//    
//    void set(char str[]){
//        init();
//        int L = strlen(str);
//        for(int i=L-1 , j=0 , t=0 , c=1; i>=0 ; i--){ // j count to 4 ; t is the tmp Num ; c is right 1 10 100 1000
//            t+= (str[i]-'0')*c;
//            j++;
//            c*=10;
//            if(j==4 || i==0){
//                digit[size++] = t;
//                t=0;
//                c=1;
//                j=0;
//                
//            }
//        }
//    }
//    
//    void output(){
//        for(int i=size-1 ; i>=0 ; i--){
//            if(i!=size-1) printf("%04d" , digit[i]);
//            else
//                printf("%d",digit[i]);
//        }
//        printf("\n");
//    }
//    
//    bigInteger operator + (const bigInteger &A) const{
//        bigInteger ret;
//        ret.init();
//        int carry = 0;
//        for(int i=0 ; i<A.size || i<size ; i++){
//            int tmp = A.digit[i] + digit[i] + carry;
//            carry = tmp/10000;
//            tmp %= 10000;
//            ret.digit[ret.size++] = tmp;
//        
//        }
//        if(carry!=0){
//            ret.digit[ret.size++] = carry;
//        }
//        return ret;
//    }
//}a , b , c;
//
//char str1[1002] , str2[1002];
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//
//    while(scanf("%s %s" , str1 , str2)!=EOF){
//        a.set(str1);
//        b.set(str2);
//        c = a+b;
//        c.output();
//    
//    }
//
//    return 0;
//}