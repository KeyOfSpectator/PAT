////
////  18_Public Bike Management (30).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/11.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Ans{
//    vector<int> nodes;
//    int post;
//    int last;
//    int bigone;
//};
//
//struct Edge{
//    int next;
//    int c;
//};
//bool mark[501];
//int dist[501];
//int node[501];
//vector<Edge> edge[501];
//vector<int> post_node[501];
//vector<Ans> ans;
//int C , N , S , M;
//
//void DFS(int post_id , Ans ans_each){
//    ans_each.nodes.push_back(post_id);
//    if(post_id == 0){
//        ans.push_back(ans_each);
//        return;
//    }
//    for(int i=0 ; i<post_node[post_id].size() ; i++){
//        Ans tmp_ans = ans_each;
//        DFS(post_node[post_id][i] , tmp_ans);
//    }
//}
//
//Ans calAns(Ans a){
//    Ans ret = a;
//    int take = 0;
//    int more = 0;
//    
//    for(int i=a.nodes.size()-2 ;i>=0 ; i--){
//        
//        if(more + node[ a.nodes[i] ] < C/2){
//            take += C/2 - (more + node[ a.nodes[i] ]);
//            more = 0;
//        }
//        else{
//            more = (more + node[ a.nodes[i] ]) - C/2;
//        }
//
//    }
//    
//    ret.post = take;
//    ret.last = more;
//    
//    return ret;
//}
//
//bool cmp(Ans A , Ans B){
//    if(A.post != B.post)
//        return A.post < B.post;
//    return A.last < B.last;
//}
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d %d %d %d" , &C , &N , &S , &M)!=EOF){
//        
//        
//        for(int i=1 ; i<=N ; i++){
//            scanf("%d" , &node[i]);
//        }
//        
//        for(int i=0 ; i<=N ; i++){
//            edge[i].clear();
//            post_node[i].clear();
//            dist[i] = -1;
//            mark[i] = false;
//        }
//        
//        for(int i=0 ; i<M ; i++){
//            Edge tmp_edge;
//            int a , b , weight;
//            scanf("%d %d %d" , &a , &b , &weight);
//            tmp_edge.next = b;
//            tmp_edge.c = weight;
//            edge[a].push_back(tmp_edge);
//            tmp_edge.next = a;
//            edge[b].push_back(tmp_edge);
//            
//        }
//        
//        if(N == 0){
//            printf("0 0 0\n");
//            continue;
//        }
//            
//        
//        
//        int new_p = 0;
//        mark[0] = true;
//        dist[0] = 0;
//        
//        for(int i=0 ; i<=N ; i++){
//            for(int i=0 ; i<edge[new_p].size() ; i++ ){
//                int b = edge[new_p][i].next;
//                int l = edge[new_p][i].c;
//                if( mark[b] ) continue;
//                if(dist[b] == -1 || dist[b] >= dist[new_p] + l){
//                    if(dist[b] > dist[new_p] + l)
//                        post_node[b].clear();
//                    dist[b] = dist[new_p] + l;
//                    post_node[b].push_back(new_p);
//                }
//                
//                
//            }
//            
//            int min = 99999;
//            int indx = -1;
//            for(int i=0 ; i<=N ; i++){
//                if(mark[i]) continue;
//                if(dist[i] == -1) continue;
//                if(dist[i] < min){
//                    min = dist[i];
//                    indx = i;
//                }
//            }
//            new_p = indx;
//            mark[new_p] = true;
//        }
//        
//        Ans ans_each;
//        DFS(S , ans_each);
//        
//        int min_post = 99999;
//        Ans ans_final;
//        for(int i=0 ; i<ans.size() ; i++){
//            ans[i] = calAns(ans[i]);
//        }
//        
//        sort(ans.begin() , ans.end() , cmp);
//        ans_final = ans[0];
//        
//        printf("%d 0" , ans_final.post);
//        for(int i=ans_final.nodes.size()-2 ; i>=0 ; i--){
//            printf("->%d" , ans_final.nodes[i]);
//        }
//        printf(" %d\n" , ans_final.last);
//    
//    }
//
//
//    return 0;
//}