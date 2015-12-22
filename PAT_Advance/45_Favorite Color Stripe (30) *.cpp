////
////  45_Favorite Color Stripe (30).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/28.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
////  LCS special !!!
//
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//
//int N , M , L;
//vector<int> list1;
//vector<int> list2;
//int dp[201][10001];
//
//
//int max(int a , int b){
//    return a>b?a:b;
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//
//    while(scanf("%d" , &N)!=EOF){
//        
//        scanf("%d" , &M);
//        for(int i=0 ; i<M ; i++){
//            int tmp;
//            scanf("%d" , &tmp);
//            list1.push_back(tmp);
//        }
//        
//        scanf("%d" , &L);
//        for(int i=0 ; i<L ; i++){
//            int tmp;
//            scanf("%d" , &tmp);
//            list2.push_back(tmp);
//        }
//        
//        // init
//        for(int i=0 ; i<M ; i++){
//            if(list1[i] == list2[0]){
//                dp[i][0] = 1;
//            }
//            else if(i==0){
//                dp[0][0] = 0;
//            }
//            else{
//                dp[i][0] = dp[i-1][0];
//            }
//        }
//        
//        for(int i=0 ; i<M ; i++){
//            for(int j=1 ; j<L ; j++){
//                
//                if(list1[i] == list2[j]){
//                    if(i==0)
//                        dp[0][j] = dp[0][j-1]+1;
//                    else
//                        dp[i][j] = max( dp[i-1][j-1]+1  , dp[i][j-1]+1);
//                }
//                else{
//                    if(i==0)
//                        dp[0][j] = dp[0][j-1];
//                    else
//                        dp[i][j] = max( dp[i-1][j] , dp[i][j-1] );
//                }
//                
//            }
//        }
//        
//        printf("%d\n" , dp[M-1][L-1]);
//        
//    }
//    
//    
//    return 0;
//}