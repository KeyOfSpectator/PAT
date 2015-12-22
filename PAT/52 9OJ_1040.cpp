////
////  52 9OJ_1040.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/1.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#define MAX_NUM 105000
//
//
//bool hash[MAX_NUM];
//
//int ans[10001];
//
//bool judge(int x){
//    if(x<=1) return false;
//    int bound = sqrt(x);
//    for(int i=2 ; i<bound+1 ; i++ ){
//        if(x%i == 0) return false;
//    }
//    return true;
//}
//
//void tag(int x){
//    int tmp = x;
//    while(tmp < MAX_NUM){
//        hash[tmp] = false;
//        tmp += x;
//    }
//}
//
//void init(){
//    memset(hash , 1 , sizeof(hash));
//    int num  = 1;
//    for( int i=0 ; i<10000 ; ){
//        if(hash[num] && judge(num)){
//            tag(num);
//            ans[i] = num;
//            i++;
//        }
//        num++;
//    }
//    
//}
//
//int main(){
//
//    init();
//    
//    int n;
//    while(scanf("%d" , &n)!=EOF){
//        printf("%d\n" , ans[n-1]);
//    }
//    
//    return 0;
//}