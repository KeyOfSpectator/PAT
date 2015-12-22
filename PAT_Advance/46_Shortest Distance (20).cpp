////
////  46_Shortest Distance (20).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/12/1.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//int min(int a , int b){
//    return a<b?a:b;
//}
//
//int max(int a, int b){
//    return a>b?a:b;
//}
//
//int N , M;
//int input[100001];
//
//int main(){
//
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%d" , &N);
//    input[0] = 0;
//    for(int i=1 ; i<=N ; i++){
//        scanf("%d" , &input[i]);
//        if(i!=0)
//            input[i] += input[i-1];
//    }
//    
//    scanf("%d" , &M);
//    for(int i=0 ; i<M ; i++){
//        int a , b;
//        scanf("%d %d" , &a , &b);
//        int sum = (input[ max(a , b)-1 ] - input[ min(a,b)-1 ]);
//        printf("%d\n" , min(sum , input[N] - sum));
//    }
//    
//    
//    return 0;
//}