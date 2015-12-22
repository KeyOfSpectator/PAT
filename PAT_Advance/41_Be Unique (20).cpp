////
////  41_Be Unique (20).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/25.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <map>
//using namespace std;
//
//int N;
//int num[100005];
//int id_num[100005];
//map<int , int> num_id;
//int col;
//
//int main(){
//
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(scanf("%d" , &N)!=EOF){
//        
//        col = 0;
//        num_id.clear();
//        for(int i=0 ; i<N ; i++){
//            int tmp;
//            int id;
//            scanf("%d" , &tmp);
//            map<int , int>::iterator it = num_id.find(tmp);
//            if(it == num_id.end()){
//                pair<int , int> pair_tmp(tmp , col++);
//                num_id.insert(pair_tmp);
//                id = col-1;
//            }
//            else{
//                id = it->second;
//            }
//            id_num[id] = tmp;
//            num[id]++;
//            
//        }
//        
//        bool flag = false;
//        for(int i=0 ; i<col&&flag==false ; i++){
//            if(num[i] == 1){
//                flag = true;
//                printf("%d\n" , id_num[i]);
//                
//            }
//            
//        }
//        if(flag == false){
//            printf("None\n");
//        }
//        
//        
//    
//    }
//
//    return 0;
//}