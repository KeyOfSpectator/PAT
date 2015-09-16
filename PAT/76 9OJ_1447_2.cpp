////
////  76 9OJ_1447_2.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/11.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//struct Edge{
//    int next ;
//    int cost ;
//};
//
//vector<Edge> edge[101];
//
//int dist[101];
//bool mark[101];
//
//int main(){
//    
//    int n , m;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d %d" , &n , &m)!=EOF){
//        if(n==0 && m==0) break;
//        for(int i=1 ; i<=n ; i++) edge[i].clear();
//        while(m--){
//            int a , b , c;
//            scanf("%d %d %d" , &a , &b , &c);
//            Edge tmp;
//            tmp.next = b;
//            tmp.cost = c;
//            edge[a].push_back(tmp);
//            tmp.next = a;
//            edge[b].push_back(tmp);
//        }
//        for(int i=1 ; i<=n ; i++){
//            dist[i] = -1;
//            mark[i] = false;
//        }
//        dist[1] = 0;
//        mark[1] = true;
//        int new_p = 1;
//        for(int i=1 ; i<n ; i++){
//            
//            for(int j=0 ; j<edge[new_p].size() ; j++){
//                int t = edge[new_p][j].next;
//                int c = edge[new_p][j].cost;
//                if(mark[t] == true) continue;
//                if(dist[t] == -1 || dist[t]>dist[new_p]+c){
//                    dist[t] = dist[new_p] + c;
//                }
//                
//            }
//            int min = 123123123;
//            for(int j=1 ; j<=n ; j++){
//                if(mark[j] == true) continue;
//                if(dist[j] == -1) continue;
//                if(dist[j]<min){
//                    min = dist[j];
//                    new_p = j;
//                }
//                
//            }
//            mark[new_p] = true;
//        
//        }
//        printf("%d\n" , dist[n]);
//        
//    
//    }
//    
//    return 0;
//}