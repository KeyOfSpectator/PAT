////
////  19 9OJ_1126.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/23.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//int buf[81];
//
//int main(){
//    int n;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &n)!=EOF){
//        for(int i=0 ; i<n ; i++){
//            int k;
//            scanf("%d" , &k);
//            for(int j = 0 ; j<k ; j++){
//                scanf("%d" , &buf[j]);
//            }
//            bool flag = false;
//            for(int j=0 ; j<k ; j++){
//                
//                if(j==0 && k>1 && buf[1]!=buf[0]){
//                    printf("0");
//                    flag = true;
//                }
//                else if( j==(k-1) && k>1 && (buf[k-1] != buf[k-2]) ){
//                    if(flag) printf(" ");
//                    printf("%d" , j);
//                    flag = true;
//                }
//                else if( (buf[j] < buf[j-1] && buf[j] < buf[j+1]) || (buf[j] > buf[j-1] && buf[j] > buf[j+1])){
//                    if(flag) printf(" ");
//                    printf("%d" , j);
//                    flag = true;
//                }
//                
//            }
//            printf("\n");
//        }
//    
//    }
//
//    return 0;
//}