////
////  30_Travel Plan (30).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/17.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <string>
//#include <string.h>
//using namespace std;
//
//struct Edge{
//    int next;
//    int d;
//    int c;
//};
//
//bool mark[501];
//int fa[501];
//int dist[501];
//int cost[501];
//
//vector<Edge> edge[501];
//int N , M , S , D;
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(scanf("%d %d %d %d" , &N , &M , &S , &D)!=EOF){
//        for(int i=0 ; i<M ; i++){
//            Edge e;
//            int a , b;
//            scanf("%d %d %d %d" , &a , &b , &e.d , &e.c);
//            e.next = b;
//            edge[a].push_back(e);
//            e.next = a;
//            edge[b].push_back(e);
//        
//        }
//        memset(mark , false , sizeof(mark));
//        for(int i=0 ; i<N ; i++){
//            fa[i] = i;
//            dist[i] = -1;
//            cost[i] = 0;
//        }
//        
//        mark[S] = true;
//        dist[S] = 0;
//        int newP = S;
//        
//        for(int i=0 ; i<N-1 ; i++){
//            
//            for(int j=0 ; j<edge[newP].size() ; j++){
//                int b = edge[newP][j].next;
//                int d = edge[newP][j].d;
//                int c = edge[newP][j].c;
//                
//                if(mark[b]) continue;
//                
//                if(dist[b] == -1 || dist[b] > dist[newP] + d || ((dist[b] == dist[newP] + d)&&(cost[b] > cost[newP] + c)  )){
//                    dist[b] = dist[newP] + d;
//                    cost[b] = cost[newP] + c;
//                    fa[b] = newP;
//                }
//            }
//            
//            int min = 999999;
//            for(int j=0 ; j<N ; j++){
//                if(mark[j]) continue;
//                if(dist[j] == -1) continue;
//                if(dist[j] < min){
//                    min = dist[j];
//                    newP = j;
//                }
//            }
//            mark[newP] = true;
//            
//        }
//        
//        // output
//        vector<int> ret;
//        
//        int root = D;
//        while(root!=S){
//            ret.push_back(root);
//            root = fa[root];
//        }
//        ret.push_back(root);
//        
//        for(int i=ret.size()-1 ; i>=0 ; i--){
//            if(i!=ret.size()-1)
//                printf(" ");
//            printf("%d" , ret[i]);
//        }
//        
////        ret += " ";
////        ret += dist[D]+'0';
////        ret += " ";
////        ret += cost[D]+'0';
//        
////        printf("%s" , ret.c_str());
//        printf(" %d %d\n" , dist[D] , cost[D]);
//    
//    }
//
//    return 0;
//}