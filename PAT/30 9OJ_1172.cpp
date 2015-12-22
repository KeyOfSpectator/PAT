////
////  30 9OJ_1172.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/27.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//#include <queue>
//using namespace std;
//
//priority_queue<int , vector<int> , greater<int> > Q;
//
//int main(){
//    int n;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//
//    while(scanf("%d" , &n)!=EOF){
//        while(Q.size() != 0 ) Q.pop();
//        for(int i=0 ; i<n ; i++){
//            int tmp;
//            scanf("%d" , &tmp);
//            Q.push(tmp);
//        }
//        int ans = 0;
//        while(Q.size() != 1){
//            int a = Q.top();
//            Q.pop();
//            int b = Q.top();
//            Q.pop();
//            ans += a+b;
//            Q.push((a+b));
//            
//        }
//        //ans += Q.top();
//        printf("%d\n" , ans);
//    }
//    return 0;
//}
