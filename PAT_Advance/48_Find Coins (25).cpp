////
////  48_Find Coins (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/12/1.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//using namespace std;
//
//
//int N , M;
//int coins[5010];
//
//int main(){
//    
//    //freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    memset(coins , 0 , sizeof(coins));
//    
//    scanf("%d %d" , &N , &M);
//    
//    for(int i=0 ; i<N ; i++){
//        int tmp;
//        scanf("%d" , &tmp);
//        coins[tmp]++;
//    }
//    
//    for(int i=1 ; i<(M/2) ; i++){
//        if(coins[i] > 0 && coins[M-i] > 0){
//            printf("%d %d\n" , i , M-i);
//            return 0;
//        }
//    }
//    if( coins[M/2]>0 ){
//        coins[M/2]--;
//        if(coins[ M - M/2] > 0){
//            printf("%d %d\n" , M/2 , M-M/2);
//            return 0;
//        }
//    }
//    printf("No Solution\n");
//    
//    return 0;
//}