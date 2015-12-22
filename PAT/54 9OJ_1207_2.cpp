////
////  54 9OJ_1207_2.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/9.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//int prime[100001];
//bool mark[100001];
//int primeSize;
//
//void init(){
//    primeSize = 0;
//    for(int i=2 ; i<100001 ; i++){
//        if(mark[i] == true) continue;
//        prime[primeSize++] = i;
//        if(i>=1000) continue;
//        for(int j=i*i ; j<100001 ; j+= i){
//            mark[j] = true;
//        }
//    }
//
//}
//
//int main(){
//    init();
//    int n;
//    while(scanf("%d" , &n)!=EOF){
//        int ansPrime[30];
//        int ansSize = 0;
//        int ansNum[30];
//        for(int i=0 ; i<primeSize ; i++){
//            if(n%prime[i] == 0){
//                ansPrime[ansSize] = prime[i];
//                ansNum[ansSize] = 0;
//                while(n%prime[i] == 0){
//                    ansNum[ansSize] ++;
//                    n/= prime[i];
//                }
//                ansSize ++;
//                if(n==1) break;
//            }
//        
//        } // end for
//        
//        if(n!=1){
//            ansPrime[ansSize] = n;
//            ansNum[ansSize++] = 1;
//        }
//        
//        int ans = 0;
//        for(int j=0 ; j<ansSize ; j++){
//            ans += ansNum[j];
//        }
//        printf("%d\n" , ans);
//    
//    }
//    
//    
//    return 0;
//}