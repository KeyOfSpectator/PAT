////
////  45 9OJ_1138_2.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/31.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//
//char str[32];
//int ten[32];
//int two[1000];
//int loc = 0;
//
//void output(){
//    for(int i=loc - 1 ; i>=0 ; i--){
//        printf("%d" , two[i]);
//    }
//    printf("\n");
//}
//
//void divide(int length){
//    int i=0 ;
//    loc = 0;
//    while(i<length){
//        two[loc++] = ten[length-1] % 2;
//        int j = i;
//        int d = 0;
//        while(j<length){
//            d = d * 10 + ten[j];
//            ten[j] = d/2;
//            d = d%2;
//            j++;
//        }
//        if(ten[i] == 0){
//            i++;
//        }
//    }
//}
//
//int transfer(){
//    int i = 0;
//    for(i ; str[i]!= 0 ; i++){
//        ten[i] = str[i] - '0';
//    }
//    memset(str , 0 , sizeof(str));
//    return i;
//}
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%s" , str)!=EOF){
//        
//        int length = transfer();
//        divide(length);
//        output();
//        
//        memset(str , 0 , sizeof(str));
//    }
//
//    return 0;
//}