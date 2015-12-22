////
////  33 9OJ_1113.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/27.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//int squre(int &x){
//    return x*=2;
//}
//
//int levelCount(int level){
//    int result = 1;
//    level --;
//    while(level--){
//        result *= 2;
//    }
//    return result;
//}
//
//int main(){
//    int m , n;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d %d" , &m , &n)!=EOF){
//        if(m==0 && n==0) break;
//        int level = 1;
//        int ans = 0;
//        int tmp = m;
//        while(n >= tmp){
//            if(n < (tmp*2) && (n-tmp+1)<=levelCount(level)){
//                //printf("%d %d\n" , (n-tmp+1) , levelCount(level+1));
//                ans += (n-tmp)+1;
//                break;
//            }
//            tmp = squre(tmp);
//            ans += levelCount(level++);
//        }
//        printf("%d\n" , ans);
//    
//    }
//
//    return 0;
//}