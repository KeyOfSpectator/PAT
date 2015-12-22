////
////  53_Path of Equal Weight (30).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/12/1.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Node{
//    int id;
//    vector<Node> children;
//    int weight;
//    
//    bool operator < (const Node B) const{
//        return weight > B.weight;
//    }
//    
//}node[100];
//
//int N , M , W;
//vector<int> ans;
//
//void DFS(int root , int sum){
//    ans.push_back(node[root].weight);
//    sum += node[root].weight;
//    if(node[root].children.size() == 0 && sum==W){
//        for(int i=0 ; i<ans.size() ; i++){
//            if(i!=0)
//                printf(" ");
//            printf("%d" , ans[i]);
//        }
//        printf("\n");
//    }
//    else if(node[root].children.size() != 0){
//        sort(node[root].children.begin() , node[root].children.end());
//        
//        for(int i=0 ; i<node[root].children.size() ; i++){
//            DFS(node[root].children[i].id , sum);
//        }
//        
//    }
//    sum -= node[root].weight;
//    ans.pop_back();
//        
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(scanf("%d %d %d" , &N , &M , &W)!=EOF){
//        
//        
//        for(int i=0 ; i<N ; i++){
//            scanf("%d" , &node[i].weight);
//            node[i].id = i;
//            
//        }
//        
//        for(int i=0 ; i<M ; i++){
//            int tmp_id , tmp_num;
//            scanf("%d %d" , &tmp_id , &tmp_num);
//            
//            for(int j=0 ; j<tmp_num ; j++){
//                int tmp;
//                scanf("%d" , &tmp);
//                node[tmp_id].children.push_back(node[tmp]);
//            }
//        }
//    
//        DFS(0 , 0);
//    
//    
//    }
//    
//
//
//    return 0;
//}