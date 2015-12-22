////
////  77 9OJ_1008.cpp
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
//struct E{
//    int next ;
//    int d;
//    int p;
//
//};
//
//vector<E> edge[1001];
//int dist[1001];
//int price[1001];
//bool mark[1001];
//
//int main(){
//    
//    int n , m;
//    int s , e;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d %d" , &n , &m)!=EOF){
//        if(n==0&&m==0)break;
//        for(int i=1 ; i<=n ; i++) edge[i].clear();
//        while(m--){
//            int a , b , d , p;
//            scanf("%d %d %d %d" , &a , &b , &d , &p);
//            E tmp;
//            tmp.next = b;
//            tmp.d = d;
//            tmp.p = p;
//            edge[a].push_back(tmp);
//            tmp.next = a;
//            edge[b].push_back(tmp);
//        }
//        //int s , e;
//        scanf("%d %d" , &s , &e);
//        for(int i=1 ; i<=n ; i++){
//            dist[i] = -1;
//            mark[i] = false;
//            price[i] = 0;
//        }
//        dist[s] = 0;
//        mark[s] = true;
//        price[s] = 0;
//        int new_p = s;
//        
//        for(int i=1 ; i<n ; i++){
//            
//            for(int j=0 ; j<edge[new_p].size() ; j++){
//                int t = edge[new_p][j].next;
//                int tmp_d = edge[new_p][j].d;
//                int tmp_p = edge[new_p][j].p;
//                if(mark[t] == true) continue;
//                if(dist[t] == -1 || dist[t]>dist[new_p]+tmp_d || (dist[t] == dist[new_p]+tmp_d && price[t]>price[new_p]+tmp_p)){
//                    dist[t] = dist[new_p]+tmp_d;
//                    //if(price[t]>price[new_p]+tmp_p)
//                    //    price[t] = price[new_p]+tmp_p;
//                    price[t] = price[new_p]+tmp_p;
//                }
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
//        printf("%d %d\n" , dist[e] , price[e]);
//    }
//    
//    
//    return 0;
//}