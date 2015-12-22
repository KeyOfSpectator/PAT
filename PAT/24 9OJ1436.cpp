//
////
////  24 9OJ1436.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/24.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//int buf[601];
//
//int main(){
//    int l , n;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d %d" , &l , &n)!=EOF){
//        for(int i=0 ; i<n ; i++){
//            scanf("%d" , &buf[i]);
//        }
//        sort(buf , buf+n);
//        int ans = 0;
//        int ans_total = 0;
//        for(int i=n-1 ; i>=0 ; i--){
//            ans_total += buf[i];
//            ans++;
//            if(ans_total >= l){
//                break;
//            }
//        }
//        if(ans_total < l)
//            printf("impossible\n");
//        else{
//            printf("%d\n" , ans);
//        }
//        
//    }
//
//    return 0;
//}