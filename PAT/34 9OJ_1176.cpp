////
////  34 9OJ_1176.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/28.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//int buf[1001];
//
//int squre(int x){
//    int result = 1;
//    x--;
//    while(x--){
//        result *= 2;
//    }
//    return result;
//}
//
//int main(){
//    int n , q;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &n)!=EOF){
//        for(int i=0 ; i<n ; i++){
//            scanf("%d" , &buf[i]);
//        }
//        scanf("%d" , &q);
//        
//        int start = squre(q)-1;
//        int end = squre(q+1)-1;
//        
//        if(start >= n){
//            printf("EMPTY\n");
//            continue;
//        }
//        if(end >= n){
//            end = n;
//        }
//        
//        for(int i = start ; i < end ; i++ ){
//            
//            printf("%d" , buf[i]);
//            
//            if(i< (end - 1))
//                printf(" ");
//        }
//        printf("\n");
//    
//    }
//
//
//    return 0;
//}