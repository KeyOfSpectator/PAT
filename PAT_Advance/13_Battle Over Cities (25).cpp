////
////  13_Battle Over Cities (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/7.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//
//// 不要想太复杂 没有积累
//
//#include <stdio.h>
//
//#include <vector>
//using namespace std;
//
//struct Edge{
//    int a;
//    int b;
//};
//
//int fa[1001];
//vector<Edge> edge;
//bool mark[1001];
//
//int findRoot(int x){
//    if(fa[x] == x)
//        return x;
//    else{
//        int root = findRoot(fa[x]);
//        fa[x] = root;
//        return root;
//    }
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    int n , m , k;
//    while(scanf("%d %d %d" , &n , &m , &k)!=EOF){
//        //init
//        for(int i=1 ; i<=n ; i++){
//            fa[i] = i;
//            mark[i] = true;
//        }
//        edge.clear();
//        
//        for(int i=0 ; i<m ; i++){
//            int a, b;
//            scanf("%d %d" , &a , &b);
//            Edge e;
//            e.a = a;
//            e.b = b;
//            edge.push_back(e);
//        }
//        
//        for(int i=0 ; i<k ; i++){
//            int target;
//            
//            scanf("%d" , &target);
//            
//            mark[target] = false;
//            
//            for(int i=1 ; i<=n ; i++){
//                fa[i] = i;
//            }
//            
//            for(vector<Edge>::iterator it = edge.begin() ; it != edge.end() ; ){
//                int a = it->a;
//                int b = it->b;
////                if(!mark[a] || !mark[b])
////                    it = edge.erase(it);
////                else{
//                
//                if(a != target && b!=target){
//                    int rootA = findRoot(a);
//                    int rootB = findRoot(b);
//                    if(rootA != rootB)
//                        fa[rootA] = rootB;
//                }
//                it++;
//                    
////                }
//            }
//            
//            int cnt = 0;
//            for(int i=1 ; i<=n ; i++){
//                
//                if(fa[i] == i && i!=target)
//                    cnt++;
//            }
////            if(cnt <= 1) cnt = 1;
//            printf("%d\n" , cnt-1);
//            
//        }
//    
//    }
//    
//    return 0;
//}