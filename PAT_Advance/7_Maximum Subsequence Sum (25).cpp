////
////  7_Maximum Subsequence Sum (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/5.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//using namespace std;
//
//int dp[10001];
//int num[10001];
//int start_index[10001];
//int col;
//
//int main(){
//
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    int n;
//    while(scanf("%d" , &n)!=EOF){
//        
//        memset(dp , 0 , sizeof(dp));
//        memset(start_index , -1 , sizeof(start_index));
//        
//        for(int i=0 ; i<n ; i++){
//            scanf("%d" , &num[i]);
//        }
//        
//        for(int i=0 ; i<n ; i++){
//            if(i==0){
//                dp[0] = num[0];
//                start_index[0] = 0;
//            }
//            else{
//                if(dp[i-1]>0){
//                    dp[i] = num[i]+dp[i-1];
//                    start_index[i] = start_index[i-1];
//                    
//                }
//                else{
//                    start_index[i] = i;
//                    dp[i] = num[i];
//                }
//            }
//        }
//        
//        int max = -1000000;
//        int start = 0;
//        int end = 0;
//        for(int i=n-1 ; i>=0 ; i--){
//            if(dp[i] >= max){
//                max = dp[i];
//                start = start_index[i];
//                end = i;
//            }
//        }
//        
//        if(max < 0){
//            max = 0;
//            start = 0;
//            end = n-1;
//        }
//        printf("%d %d %d\n" , max , num[start] , num[end]);
//    
//    }
//
//    return 0;
//}