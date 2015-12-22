////
////  3_Emergency (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/3.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <string.h>
//using namespace std;
//
//#define MAX_INT 1e6
//
//struct Edge{
//    int next;
//    int c;
//};
//
//int member[501];
//vector<Edge> edge[501];
//bool mark[501];
//int dis[501];
//int max_mem[501];
//int max_diff_road[501];
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    int N,M,C1,C2;
//    while(scanf("%d %d %d %d" , &N , &M , &C1 , &C2 )!=EOF){
//        //init
//        for(int i=0 ; i<501 ; i++){edge[i].clear();}
//        memset(dis , -1 , sizeof(dis));
//        memset(mark , 0 , sizeof(mark));
//        memset(max_mem , -1 , sizeof(max_mem));
//        memset(max_diff_road , 0 , sizeof(max_diff_road));
//        
//        //input
//        for(int i=0 ; i<N ; i++){
//            scanf("%d" , &member[i]);
//        }
//        for(int i=0 ; i<M ; i++){
//            int start , end , l;
//            scanf("%d %d %d" , &start , &end , &l);
//            Edge e;
//            e.next = end;
//            e.c = l;
//            edge[start].push_back(e);
//            e.next = start;
//            e.c = l;
//            edge[end].push_back(e);
//        }
//        
//        //
//        dis[C1] = 0;
//        mark[C1] = true;
//        max_mem[C1] = member[C1];
//        max_diff_road[C1] = 1;
//        int newP = C1;
//        
//        for(int i=0 ; i<N-1 ; i++){ // N-1 points
//            
//            for(int j=0 ; j<edge[newP].size() ; j++){
//                
//                int t = edge[newP][j].next;
//                int c = edge[newP][j].c;
//                
//                if(mark[t]) continue;
//                if(dis[t] == -1 || dis[t] > (dis[newP] + c)){
//                    dis[t] = dis[newP]+c;
//                    max_mem[t] = max_mem[newP] + member[t];
//                    max_diff_road[t] = max_diff_road[newP];
//                }
//                else if(dis[t] == dis[newP]+c){
//                    max_diff_road[t] += max_diff_road[newP];
//                    if(max_mem[t] < max_mem[newP]+member[t]){
//                        max_mem[t] = max_mem[newP] + member[t];
//                    }
//                }
//
//                
//                
//            }
//            int min = MAX_INT;
//            for(int j=0 ; j<N ; j++){
//                if(mark[j] == true) continue;
//                if(dis[j] == -1) continue;
//                if(dis[j]<min){
//                    min = dis[j];
//                    newP = j;
//                }
//                
//            }
//            mark[newP] = true;
//        }
//        printf("%d %d\n" , max_diff_road[C2] , max_mem[C2]);
//    }
//
//    return 0;
//}