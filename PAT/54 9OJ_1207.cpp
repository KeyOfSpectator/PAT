////
////  54 9OJ_1207.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/1.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#define MAX_NUM 1000000000
//#define MAX_PRIME 10000
//
//bool hash[MAX_NUM];
//int prime[MAX_PRIME];
//
//bool judge(int x){
//    if(x <= 1) return false;
//    int bound = sqrt(x);
//    for(int i=2 ; i<bound+1 ; i++){
//        if(x%i==0) return false;
//    }
//    return true;
//}
//
//void tag(int x){
//    int tmp = x+x;
//    while(tmp < MAX_NUM){
//        hash[tmp] = false;
//        tmp += x;
//    }
//}
//
//void init(){
//    memset(hash , 1 , sizeof(hash));
//    int num = 2;
//    for(int i=0 ; i<MAX_PRIME ;){
//        if( hash[i] && judge(i)){
//            prime[i++] = num;
//            tag(num);
//        }
//        else
//            hash[num] = false;
//            
//        num++;
//    }
//
//}
//
//
//int main(){
//    
//    init();
//    
//    int n;
//    
//    while(scanf("%d" , &n)!=EOF){
//        int ans = 0;
//        int i=0;
//        while(hash[n]!=0){
//            while(n%prime[i]==0){
//                n = n/prime[i];
//                ans++;
//            }
//            i++;
//        }
//        ans++;
//        printf("%d\n" , ans);
//    }
//    
//    return 0;
//}