////
////  71 9OJ_1017.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/10.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//int Tree[101];
//
//int findRoot(int x){
//    if(Tree[x] == -1) return x;
//    int tmp = findRoot(Tree[x]);
//    Tree[x] = tmp;
//    return tmp;
//}
//
//struct Edge{
//    int a , b;
//    int cost;
//    bool operator < (const Edge &A) const{
//        return cost<A.cost;
//    }
//}edge[6001];
//
//int main(){
//    
//    int n;
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//
//    while(scanf("%d" , &n)!=EOF & n!=0){
//        for(int i=1 ; i<=(n-1)*n/2 ; i++){
//            scanf("%d%d%d" , &edge[i].a , &edge[i].b , &edge[i].cost);
//        }
//        sort(edge+1 , edge+1+(n-1)*n/2);
//        for(int i=1 ; i<=n ; i++){
//            Tree[i] = -1;
//        }
//        int ans = 0;
//        for(int i=1 ; i<=(n-1)*n/2 ; i++){
//            int a = findRoot(edge[i].a);
//            int b = findRoot(edge[i].b);
//            if(a!=b){
//                Tree[a] = b;
//                ans+= edge[i].cost;
//            }
//        }
//        printf("%d\n" , ans);
//    }
//
//    return 0;
//}