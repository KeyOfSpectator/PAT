////
////  80 9OJ_1448.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/11.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <queue>
//#include <vector>
//using namespace std;
//
//vector<int> edge[501];
//queue<int> Q;
//int degree[501];
//
//
//int main(){
//    int n , m;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d %d" , &n , &m)!=EOF){
//        if(n==0 && m==0) break;
//        for(int i=0 ; i<n ; i++) {
//            degree[i] = 0;
//            edge[i].clear();
//        }
//        while(m--){
//            int a , b;
//            scanf("%d %d" , &a , &b);
//            edge[a].push_back(b);
//            degree[b]++;
//        }
//        while(Q.empty()==false) Q.pop();
//        for(int i=0 ; i<n ; i++){
//            if(degree[i]==0)
//                Q.push(i);
//        
//        }
//        int cnt = 0;
//        while(Q.empty()==false){
//            int tmp = Q.front();
//            Q.pop();
//            cnt++;
//            for(int i=0 ; i<edge[tmp].size() ; i++){
//                degree[edge[tmp][i]]--;
//                if(degree[edge[tmp][i]]==0)
//                    Q.push(edge[tmp][i]);
//            }
//        }
//        if(cnt == n)
//            printf("YES\n");
//        else
//            printf("NO\n");
//    
//    
//    }
//
//    return 0;
//}