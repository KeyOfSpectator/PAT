//
//
////
////  52 9OJ_1163.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/1.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <math.h>
//
//bool judge(int x){
//    if(x<=1) return false;
//    int bound = sqrt(x)+1 ;
//    for(int i=2 ; i<bound ; i++){
//        if(x%i == 0)
//            return false;
//    }
//    return true;
//}
//
//int main(){
//    int n;
//    while(scanf("%d" , &n)!=EOF){
//        bool first = true;
//        for(int i=2 ; i<n ; i++){
//            
//            if(judge(i) && i%10 == 1){
//                if(first)
//                    first = false;
//                else
//                    printf(" ");
//                printf("%d" , i);
//            }
//        }
//        if(first)
//            printf("-1");
//        printf("\n");
//    }
//
//    return 0;
//}