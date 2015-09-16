////
////  56 9OJ_1087.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/9.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//bool mark[100001];
//int prime[100001];
//int primeSize;
//
//void init(){
//    primeSize = 0;
//    for(int i=2 ; i<100001 ; i++){
//        if(mark[i]==true) continue;
//        prime[primeSize++] = i;
//        if(i>1000) continue;
//        for(int j = i*i ; j<100001 ; j+=i){
//            mark[j] = true;
//        }
//    }
//}
//
//int cnt[100001];
//int cntNum[100001];
//
//int main(){
//    int n , num;
//    init();
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &n)!=EOF){
//        while(n--){
//            scanf("%d" , &num);
//            if(num <= 1){
//                printf("1\n");
//                continue;
//            }
//            int ansSize = 1;
//            int ansCnt = 0;
//            for(int i=0 ; i<primeSize ; i++){
//                if(num % prime[i] == 0){
//                    //ansSize ++;
//                    cnt[ansCnt] = prime[i];
//                    cntNum[ansCnt] = 0;
//                    while(num%prime[i] == 0){
//                        cntNum[ansCnt] ++;
//                        num/=prime[i];
//                    }
//                    ansCnt++;
//                    if(num == 1) break;
//                }
//                
//                
//            }
//            
//            if(num != 1){
//                cnt[ansCnt] = num;
//                cntNum[ansCnt++] = 1;
//            }
//            
//            for(int i=0 ; i<ansCnt ; i++){
//                if(cntNum[i]>0)
//                    ansSize *= (cntNum[i]+1);
//            }
//            
//            printf("%d\n" , ansSize);
//            
//        }
//    
//    }
//
//    return 0;
//}