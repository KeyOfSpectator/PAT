////
////  2_A+B for Polynomials (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/3.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//
//#define EXT 1e-6
//
//double hash_list[1001];
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    memset(hash_list , 0 , sizeof(hash_list));
//    int k;
//    int count = 0;
//    while(scanf("%d" , &k)!=EOF){
//        int N;
//        double a;
//        while(k--){
//            scanf("%d %lf" , &N , &a);
//            hash_list[N] += a;
//
//        }
//        scanf("%d" , &k);
//        while(k--){
//            scanf("%d %lf" , &N , &a);
//            hash_list[N] += a;
//        }
//        
//        for(int i=0 ; i<=1000 ; i++){
//            if( hash_list[i]>0?hash_list[i]:-hash_list[i]  > EXT)
//                count++;
//        }
//
//        printf("%d" , count);
//        for(int i=1000 ; i>=0 ; i--){
//            if( hash_list[i]>0?hash_list[i]:-hash_list[i] > EXT){
//                printf(" %d %.1lf" , i , hash_list[i]);
//            }
//        }
//        printf("\n");
//    
//    }
//
//
//    return 0;
//}