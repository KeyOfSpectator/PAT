////
////  17_Queueing at Bank (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/10.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//
//struct Time{
//    int hour;
//    int min;
//    int sec;
//    int total_sec;
//    bool operator < (const Time  &B) const{
//        return total_sec < B.total_sec;
//    }
//    
//    bool operator == (const Time  &B) const{
//        return total_sec == B.total_sec;
//    }
//    
////    Time operator + (const int minutes) const{
////        Time ret;
////        ret.hour += (hour + minutes)/60;
////        ret.min = (min + minutes)%60;
////        ret.sec = sec;
////        ret.total_sec = total_sec + minutes * 60;
////        return ret;
////    }
//};
//
//struct Node{
//    Time startTime;
//    Time endTime;
//    int last_min;
//    int wait_sec;
//}node[10001];
//
//int N , K;
//Time start_time;
//Time end_time;
//Time max_time;
//Time cur_time;
//int inside;
//int total_wait_sec;
//
//queue<Node> wait_queue;
//
//bool cmp(Node A , Node B){
//    return A.startTime < B.startTime;
//}
//
//vector<Node> cur_win[101];
//
//int cal_last_sec(Time A){
//    return A.hour * 60 * 60 + A.min * 60 + A.sec;
//}
//
//Time cal_endTime(Time startTime , int mins){
//    Time ret = startTime;
//    ret.hour += (ret.min + mins)/60;
//    ret.min = (ret.min + mins) %60;
//    ret.total_sec += mins * 60;
//    return ret;
//}
//
//Time find_lastnode(){
//    bool find = false;
//    Time min_time = max_time;
//    for(int i=0 ;i<K ; i++){
////        Time endTime_tmp = cal_endTime(cur_win[i][0].startTime, cur_win[i][0].wait_sec);
//        if(cur_win[i].size()>0 && cur_win[i][0].endTime < min_time ){
//            min_time = cur_win[i][0].endTime;
//            find = true;
//        }
//    }
//    if(!find)
//        return cur_time;
//    return min_time;
//}
//
//void pop_node(Time minTime){
//    for(int i=0 ; i<K ; i++){
//        if(cur_win[i].size()>0 && cur_win[i][0].endTime==minTime ){
//            cur_win[i].clear();
//            inside--;
//        }
//    }
//}
//
//void push_to_win(){
//    int i=0;
//    while(inside < K && wait_queue.size()!=0){
//        for( ; i<K ; i++){
//            if(cur_win[i].size() == 0){
//                Node tmp_node = wait_queue.front();
//                tmp_node.wait_sec = cur_time.total_sec - tmp_node.startTime.total_sec;
//                
//                total_wait_sec += tmp_node.wait_sec;
//                
//                tmp_node.endTime = cal_endTime(cur_time , tmp_node.last_min);
//                
//                cur_win[i].push_back(tmp_node);
//                
//                wait_queue.pop();
//                inside++;
//                i++;
//                break;
//            }
//        }
//    }
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(scanf("%d %d" , &N , &K)!=EOF){
//        for(int i=0 ; i<N ; i++){
//            scanf("%02d:%02d:%02d %d" , &node[i].startTime.hour , &node[i].startTime.min , &node[i].startTime.sec , &node[i].last_min);
//            
//            if(node[i].last_min > 60)
//                node[i].last_min = 60;
//            
//            node[i].startTime.total_sec = cal_last_sec(node[i].startTime);
//        }
//        
//        sort(node , node+N , cmp);
//
//        start_time.hour = 8;
//        start_time.min = 0;
//        start_time.sec = 0;
//        start_time.total_sec = cal_last_sec(start_time);
//        
//        end_time.hour = 17;
//        end_time.min = 0;
//        end_time.sec = 1;
//        end_time.total_sec = cal_last_sec(end_time);
//        
//        max_time.hour = 99;
//        max_time.min = 99;
//        max_time.sec = 99;
//        max_time.total_sec = 99999;
//        
//        
//        cur_time = start_time;
//        inside = 0;
//        int cur_node = 0;
// 
//        // first push
//        while(node[cur_node].startTime < cur_time || node[cur_node].startTime == cur_time){
//            wait_queue.push(node[cur_node++]);
//        }
//        push_to_win();
//        
//        // push rest
//        while(cur_node < N){
//            
//            
//            // if not min_time is cur_time
//            Time min_time = find_lastnode();
//            
//            // arrive
//            if((node[cur_node].startTime < min_time) || (node[cur_node].startTime == min_time)){
//                if(!(node[cur_node].startTime < end_time)){
//                    break;
//                }
//                cur_time = node[cur_node].startTime;
//                while(node[cur_node].startTime == cur_time){
//                    wait_queue.push(node[cur_node++]);
//                }
//                
//                if(node[cur_node].startTime == min_time)
//                    pop_node(min_time);
//                push_to_win();
//
//            }
//            
//            // pop
//            else if(inside > 0){
//                pop_node(min_time);
//                cur_time = min_time;
//               
//                push_to_win();
//            }
//            else{
//                cur_time = node[cur_node].startTime;
//            }
//        
//        }
//        
//        if(cur_node == 0)
//            printf("%.1f", 0.0);
//        double ans = (total_wait_sec/60 + (double)(total_wait_sec%60)/60)/cur_node;
//        printf("%.1f\n" , ans);
//        
//    }
//
//    return 0;
//}