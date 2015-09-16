////
////  53 9OJ_1440.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/1.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//
//#define MAX_NUM 1000000
//
//bool hash[MAX_NUM];
//int prime[50000];
//
//bool judge(int x){
//    if(x <= 1) return false;
//    int bound = sqrt(x);
//    for(int i=2 ; i<bound+1 ; i++){
//        if(x%i == 0) return false;
//    }
//    
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
//    for(int i=0 ; i<50000 ; ){
//        if(hash[num] && judge(num)){
//            prime[i++] = num;
//            tag(num);
//        }
//        else
//            hash[num] = 0;
//        num++;
//    }
//}
//
//
//int main(){
//    init();
//    int n;
//    while(scanf("%d" , &n)!=EOF){
//        if(n==0) break;
//        int ans = 0;
//        for(int i=0 ; prime[i]<n ; i++){
//            int d = n - prime[i];
//            if(d<prime[i]) break;
//            if(hash[d] == 1)
//                ans ++;
//        }
//        printf("%d\n" , ans);
//    
//    }
//    
//    
//    return 0;
//}