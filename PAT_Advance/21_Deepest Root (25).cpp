////
////  21_Deepest Root (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/12.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//
//vector<int> edge[10001];
//vector<int> ans;
//int tree[10001];
//bool mark[10001];
//
//bool isloop;
//
//int DFS(int node){
//    int max = 0;
//    for(int i=0 ; i<edge[node].size() ; i++){
//        int next = edge[node][i];
//        if(mark[next]){
//            mark[next] = false;
//            int tmp = DFS(next);
//            if(tmp > max){
//                max = tmp;
//            }
//            mark[next] = true;
//        }
//    }
//    return max+1;
//}
//
//int findRoot(int x){
//    if(tree[x] == x) return x;
//    int root = findRoot(tree[x]);
//    tree[x] = root;
//    return root;
//}
//
//int N;
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(scanf("%d" , &N)!=EOF){
//        // init
//        for(int i=1 ; i<=N ; i++){
//            edge[i].clear();
//            tree[i] = i;
//            mark[i] = true;
//        }
//        ans.clear();
//        isloop = false;
//        
//        //
//        for(int i=0 ; i<N-1 ; i++){
//            int a, b;
//            scanf("%d %d" , &a , &b);
//            edge[a].push_back(b);
//            edge[b].push_back(a);
//        }
//        
//        int max = 0;
//        for(int i=1 ; i<=N ; i++){
//            mark[i] = false;
//            int tmp = DFS(i);
//            mark[i] = true;
//            
//            if(max < tmp){
//                ans.clear();
//                ans.push_back(i);
//                max = tmp;
//            }
//            else if(max == tmp){
//                ans.push_back(i);
//            }
//            
//            if(isloop)
//                break;
//            
//        }
//        
//        for(int i=1 ; i<=N ; i++){
//            for(int j=0 ; j<edge[i].size() ; j++){
//                int rootA = findRoot(i);
//                int rootB = findRoot(edge[i][j]);
//                if(rootA != rootB){
//                    tree[rootA] = rootB;
//                }
//            }
//        }
//        int count = 0;
//        for(int i=1 ; i<=N ; i++){
//            if(tree[i] == i)
//                count++;
//        }
//        
//        if(count > 1){
//            printf("Error: %d components\n" , count);
//            continue;
//        }
//        
//        sort(ans.begin() , ans.end());
//        for(int i=0 ; i<ans.size() ; i++){
//            printf("%d\n" , ans[i]);
//        }
//
//        
//        
//    
//    }
//
//    return 0;
//}