//
////
////  22 9OJ1434.cpp
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
//struct Node{
//    int s;
//    int e;
//    bool operator < (const Node &A) const{
//        return e<A.e;
//    }
//    
//}buf[101];
//
//
//int main(){
//    int n;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &n)!=EOF) {
//        if(n==0)break;
//        for(int i=0 ; i<n ; i++){
//            scanf("%d %d" , &buf[i].s , &buf[i].e);
//        }
//        sort(buf , buf+n);
//        int ans = 0 , flag = 0;
//        for(int i=0 ; i<n ; i++){
//            if(buf[i].s >= flag){
//                ans++;
//                flag = buf[i].e;
//            }
//        }
//        printf("%d\n" , ans);
//        
//    }
//    return 0;
//}