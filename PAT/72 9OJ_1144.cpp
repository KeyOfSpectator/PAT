////
////  72 9OJ_1144.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/10.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <math.h>
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
//struct Node{
//    int id;
//    double x;
//    double y;
//
//}node[101];
//
//struct Edge{
//    Node a;
//    Node b;
//    double cost;
//    bool operator < (const Edge &A) const{
//        return cost<A.cost;
//    }
//}edge[6001];
//
//int main(){
//    int n;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &n)!=EOF){
//        for(int i=1 ; i<=n ; i++){
//            scanf("%lf%lf" , &node[i].x , &node[i].y);
//            node[i].id = i;
//        }
//        int loc = 0;
//        for(int i=1 ; i<=n ; i++){
//            for(int j=i+1 ; j<=n ; j++){
//                double tmp = sqrt((node[j].x - node[i].x) * (node[j].x - node[i].x) + (node[j].y - node[i].y) * (node[j].y - node[i].y));
//                edge[loc].a = node[i];
//                edge[loc].b = node[j];
//                edge[loc++].cost = tmp;
//            }
//        }
//        
//        sort(edge , edge+(n-1)*n/2);
//        
//        for(int i=1 ; i<=n ; i++){
//            Tree[i] = -1;
//        }
//        
//        double ans = 0.0;
//        for(int i=0 ; i<loc ; i++){
//            int a = edge[i].a.id;
//            int b = edge[i].b.id;
//            a = findRoot(a);
//            b = findRoot(b);
//            if(a!=b){
//                ans+=edge[i].cost;
//                Tree[a] = b;
//            }
//        }
//        printf("%.2f\n" , ans);
//        
//        
//    }
//
//    return 0;
//}