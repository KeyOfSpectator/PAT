////
////  33_To Fill or Not to Fill (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/17.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//#include <string.h>
//using namespace std;
//
//struct Station{
//    double price;
//    int dis;
//    bool operator < (const Station A) const{
//        return price < A.price;
//    }
//};
//vector<Station> sta_list;
//
//double hash_table[30010];
//
//int C , D , A , N;
//int max_dis;
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(scanf("%d %d %d %d" , &C , &D , &A , &N)!=EOF){
//        
//        max_dis = C*A;
//        
////        memset(hash_table , -1 , sizeof(hash_table));
//        for(int i=0 ; i<D ; i++){
//            hash_table[i] = -1;
//        }
//        
//        for(int i=0 ; i<N ; i++){
//            Station s;
//            scanf("%lf %d" , &s.price , &s.dis);
//            sta_list.push_back(s);
//        }
//        sort(sta_list.begin() , sta_list.end());
//        
//        for(int i=0 ; i<sta_list.size() ; i++){
//            for(int j=sta_list[i].dis ; j<sta_list[i].dis + max_dis ; j++){
//                if(j>D) break;
//                if(hash_table[j] != -1){
//                    continue;
//                }
//                hash_table[j] = sta_list[i].price / A;
//            }
//        }
//        
//        double ans = 0;
//        int count = 0;
//        bool flag = true;
//        for(int i=0 ; i<D ; i++){
//            if(hash_table[i] == -1){
//                flag = false;
//                break;
//            }
//            ans += hash_table[i];
//            count++;
//        }
//        
//        if(flag){
//            printf("%.02lf\n" , ans);
//        }
//        else
//            printf("The maximum travel distance = %.02lf\n" , (double)count);
//        
//    }
//
//    return 0;
//}