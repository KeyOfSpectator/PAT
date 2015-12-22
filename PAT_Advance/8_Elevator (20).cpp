////
////  8_Elevator (20).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/5.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//int floar[101];
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    int n;
//    while(scanf("%d" , &n)!=EOF){
//        for(int i=0 ; i<n ; i++){
//            scanf("%d" , &floar[i]);
//        }
//        
//        int ans = 0;
//        int start = 0;
//        int end;
//        for(int i=0 ; i<n ; i++){
//            end = floar[i];
//            if(end > start){
//                ans += (end - start) * 6;
//            }
//            if(end < start){
//                ans += (start - end) * 4;
//            }
//            ans += 5;
//            start = end;
//        }
//        
//        printf("%d\n" , ans);
//    }
//
//
//    return 0;
//}