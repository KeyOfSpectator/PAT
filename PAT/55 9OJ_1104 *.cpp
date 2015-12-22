////
////  55 9OJ_1104.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/9.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//int prime[1010];
//bool mark[1010];
//int primeSize;
//
//void init(){
//    primeSize = 0;
//    for(int i = 2 ; i<1010 ; i++){
//        if(mark[i] == true) continue;
//        prime[primeSize++] = i;
//        for(int j = i*i ; j<1010 ; j+= i){
//            mark[j] = true;
//        }
//    }
//}
//
//int cnt1[1010];
//int cnt2[1010];
//
//int main(){
//    int n , a;
//    init();
//    while(scanf("%d %d" , &n , &a)!=EOF){
//        for(int i=0 ; i<1010 ; i++)
//            cnt1[i] = cnt2[i] = 0;
//        for(int i=0 ; i<primeSize ; i++){
//            int t = n;
//            while(t){
//                cnt1[i] += t/prime[i];
//                t = t/prime[i];
//            }
//        
//        }
//        int ans = 10000000000;
//        for(int i=0 ; i<primeSize ; i++){
//            while(a%prime[i] == 0){
//                cnt2[i] ++;
//                a /= prime[i];
//            }
//            
//            if(cnt2[i] == 0) continue;
//            if(cnt1[i] / cnt2[i] < ans)
//                ans = cnt1[i] / cnt2[i];
//            
//        }
//        printf("%d\n" , ans);
//            
//    }
//
//    return 0;
//}