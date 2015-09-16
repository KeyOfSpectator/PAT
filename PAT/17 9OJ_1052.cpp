////
////  17 9OJ_1052.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/22.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//int hash[201];
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    int n , target , result;
//    while(scanf("%d" , &n)!=EOF){
//        result = -1;
//        for(int i=0 ; i<n ; i++){
//            scanf("%d" , &hash[i]);
//        }
//        scanf("%d" , &target);
//        for(int i=0 ; i<n ; i++){
//            if(hash[i] == target){
//                result = i;
//            }
//                
//        }
//        printf("%d\n" , result);
//    }
//    
//}