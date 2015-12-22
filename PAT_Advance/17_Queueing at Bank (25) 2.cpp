////
////  17_.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/11.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//struct Node{
//    int total_sec;
//    int process;
//};
//
//int N , K;
//vector<Node> input;
//int start_time_sec;
//int end_time_sec;
//int cur_time_sec;
//int wait_sec_total;
//
//priority_queue<int , vector<int> , greater<int>> wait_queue;
//int win[101];
//int inside;
//
//bool cmp(Node A , Node B){
//    return A.total_sec < B.total_sec;
//}
//
////void push_Win(){
////    int i=0;
////    while(!wait_queue.empty() && inside < K){
////        for( ; i<K ; i++){
////            if(win[i] == -1){
////                Node tmp_node = wait_queue.front();
////                
////                wait_sec_total += cur_time_sec - tmp_node.total_sec;
////                
////                wait_queue.pop();
////                
////                int end_time = cur_time_sec + tmp_node.process * 60;
////                win[i] = end_time;
////                inside ++;
////                break;
////            }
////        }
////    }
////}
////
////int find_last_end(){
////    int min = 999999;
////    if(inside == 0)
////        return min;
////    for(int i=0 ; i<K ; i++){
////        if(win[i]!=-1 && win[i]<min)
////            min = win[i];
////    }
////    return min;
////}
////
////void pop_win(int last_end_time){
////    for(int i=0 ; i<K ; i++){
////        if(win[i] <= last_end_time){
////            win[i] = -1;
////            inside --;
////        }
////    }
////}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    end_time_sec = 17*3600;
//    start_time_sec = 8*3600;
//    
//    while(scanf("%d %d" , &N , &K)!=EOF){
//        
//        while(!wait_queue.empty()) wait_queue.pop();
//        for(int i=0 ; i<K ; i++){
//            win[i] = -1;
//        }
//        wait_sec_total = 0;
//        
//        for(int i=0 ; i<N ; i++){
//            int hour , min , sec , process;
//            scanf("%02d:%02d:%02d %d" , &hour , &min , &sec , &process);
//            
//            //
//            if(process > 60)
//                process = 60;
//            
//            Node node;
//            node.total_sec = hour * 3600 + min * 60 + sec;
//            node.process = process * 60;
//            if(node.total_sec <= end_time_sec)
//                input.push_back(node);
//            
//        }
//        sort(input.begin() , input.end() , cmp);
//        
//        int cur_id = 0;
//        inside = 0;
////        while(cur_id < input.size()){
////            if(input[cur_id].total_sec <= start_time_sec){
////                wait_queue.push(input[cur_id++]);
////            }
////            else
////                break;
////        }
////        cur_time_sec = start_time_sec;
////        push_Win();
////        
////        while(cur_id < input.size() || wait_queue.size()!=0){
////            
////            int last_end_time = find_last_end();
////            
////            if(inside == 0){
////                last_end_time = input[cur_id].total_sec;
////            }
////            
////            while(cur_id < input.size()){
////                if(input[cur_id].total_sec <= last_end_time){
////                    wait_queue.push(input[cur_id++]);
////                }
////                else
////                    break;
////            }
////            
////            pop_win(last_end_time);
////            cur_time_sec = last_end_time;
////            push_Win();
////            
////        }
//        cur_time_sec = start_time_sec;
//        while(cur_id < input.size()){
//            if(inside < K){
//                while(inside < K && cur_id < input.size()){
//                    inside ++;
//                    if(input[cur_id].total_sec >= cur_time_sec){
//                        wait_queue.push(input[cur_id].total_sec + input[cur_id].process);
//                    }
//                    else{
//                        wait_sec_total += cur_time_sec - input[cur_id].total_sec;
//                        wait_queue.push(cur_time_sec + input[cur_id].process);
//                    }
//                    cur_id ++;
//                
//                }
//                
//            }
//            else if(!wait_queue.empty()){
//                cur_time_sec = wait_queue.top();
//                wait_queue.pop();
//                inside --;
//            }
//        }
//        
//        double ans = ((double)wait_sec_total)/(cur_id * 60.0);
////        double ans = (wait_sec_total/60 + (double)(wait_sec_total%60)/60)/cur_id;
//        printf("%.1f\n" , ans);
//        
//        
//        
//    }
//
//    return 0;
//}