////
////  25_PAT Ranking (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/12.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int N;
//
//struct Node{
//    string ID;
//    int score;
//    
//    int total_rank;
//    int local_rank;
//    int local_num;
//    
//    bool operator < (const Node &B) const {
//        if(score == B.score)
//            return ID < B.ID;
//        return score > B.score;
//    }
//};
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%d" , &N);
//    vector<Node> total_list;
//    int total_count = 0;
//    
//    for(int i=1 ; i<=N ; i++){
//        int K;
//        scanf("%d" , &K);
//        total_count += K;
//        
//        vector<Node> local_list;
//        
//        for(int j=0 ; j<K ; j++){
//            Node input;
//            
//            cin >> input.ID;
//            cin >> input.score;
//            input.local_num = i;
//            
//            local_list.push_back(input);
//            
//        }
//        
//        sort(local_list.begin() , local_list.end());
//        
//        int indx = 1;
//        for(int j = 0 ; j < local_list.size() ; j++){
//            if( j!=0  && local_list[j].score == local_list[j-1].score){
//                local_list[j].local_rank = local_list[j-1].local_rank;
//            }
//            else{
//                local_list[j].local_rank = j+1;
//            }
//            total_list.push_back(local_list[j]);
//        }
//        
//    }
//    
//    sort(total_list.begin() , total_list.end());
//    int indx = 1;
//    printf("%d\n" , total_count);
//    for(int i = 0 ; i < total_list.size() ; i++){
//        if( i!=0  && total_list[i].score == total_list[i-1].score){
//            total_list[i].total_rank = total_list[i-1].total_rank;
//        }
//        else{
//            total_list[i].total_rank = i+1;
//        }
//        printf("%s %d %d %d\n" , total_list[i].ID.c_str() , total_list[i].total_rank , total_list[i].local_num , total_list[i].local_rank);
//    }
//    
//    return 0;
//}