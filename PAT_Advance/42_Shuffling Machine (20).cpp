////
////  42_Shuffling Machine (20).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/26.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//char char_first[5] = {
//    'S',
//    'H',
//    'C',
//    'D',
//    'J',
//};
//
//int K;
//int init[55];
//int tmp1[55];
//int tmp2[55];
//
//int main(){
//
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//
//    
//    while(scanf("%d" , &K)!=EOF){
//        for(int i=1 ; i<=54 ; i++){
//            scanf("%d" , &init[i]);
//        }
//        
//        for(int i=1 ; i<=54 ; i++){
//            tmp1[i] = i;
//        }
//        while(K--){
//            for(int i=1 ; i<=54 ; i++ ){
//                tmp2[init[i]] = tmp1[i];
//            }
//            for(int i=1 ; i<=54 ; i++){
//                tmp1[i] = tmp2[i];
//            }
//        }
//        
//        //output
//        for(int i=1 ; i<=54 ; i++){
//            if(i!=1) printf(" ");
//            int first = (tmp1[i]-1)/13;
//            printf("%c" , char_first[first]);
//            int second = (tmp1[i]-1)%13+1;
//            printf("%d" , second);
//        }
//        
//        printf("\n");
//        
//    }
//    
//    return 0;
//}