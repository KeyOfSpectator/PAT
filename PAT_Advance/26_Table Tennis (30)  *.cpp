////
////  26_Table Tennis (30).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/13.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// 大坑 http://www.cnblogs.com/huhuuu/p/3360207.html
//
//#include <stdio.h>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <string.h>
//using namespace std;
//
//#define INF 999999
//
//struct Node{
//    int time;
//    int lastTime;
//    int service_time;
//    int wait_time;
//    int isVIP;
//};
//
//vector<Node> input;
//vector<Node> ans;
//
//int N , K , M;
//
//int start_time = 8*3600;
//int end_time = 21*3600;
//int cur_time;
//int free_count;
//int table_num;
//
//bool isVIP_table[101];
//int table_time[101];
//int table_count[101];
//
//bool cmp_1(Node A , Node B){
//    return A.time < B.time;
//}
//
//int pop_table(){
//    int min_time = INF;
//    int min_indx = -1;
//    for(int i=1 ; i<=K ; i++){
//        if(table_time[i]!=-1 && table_time[i] < min_time){
//            min_time = table_time[i];
//            min_indx = i;
//        }
//    }
//    free_count++;
//    table_time[min_indx] = -1;
//    cur_time = min_time;
//    return min_indx;
//}
//
//void push_table(Node node , int cur_time , int table_num){
//    free_count--;
//    table_time[table_num] = cur_time + node.lastTime;
//    table_count[table_num] ++;
//}
//
//void print_time(int time){
//    int hour = time/3600;
//    time %= 3600;
//    int min = time/60;
//    time %= 60;
//    printf("%02d:%02d:%02d" , hour , min , time);
//}
//
//void updateInfo(int userID , int tableID){
//    input[userID].service_time = max(input[userID].time , table_time[tableID]);
//    input[userID].wait_time = input[userID].service_time - input[userID].time;
//    table_count[tableID]++;
//    table_time[tableID] = input[userID].service_time + input[userID].lastTime;
//    
//    ans.push_back(input[userID]);
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    
//    while(scanf("%d" , &N)!=EOF){
//        
//        input.clear();
//        ans.clear();
//        
//        for(int i=0 ; i<N ; i++){
//            int hour , min , sec , process , isV;
//            scanf("%02d:%02d:%02d %d %d" , &hour , &min , &sec , &process , &isV);
//            Node node;
//            node.time = hour*3600 + min*60 + sec;
//            if(process > 120)
//                process = 120;
//            node.lastTime = process*60;
//            node.isVIP = isV;
//            node.service_time = INF;
//            node.wait_time = INF;
//            input.push_back(node);
//        }
//        
//        scanf("%d %d" , &K , &M );
//        free_count = K;
//        memset(isVIP_table , false , sizeof(isVIP_table));
//        memset(table_count , 0 , sizeof(table_count));
////        memset(table_time , 8*3600 , sizeof(table_time));
//        for(int i=1 ; i<=K ; i++) table_time[i] = 8*3600;
//        for(int i=0 ; i<M ; i++){
//            int k;
//            scanf("%d" , &k);
//            isVIP_table[k] = true;
//        }
//        
//        sort(input.begin() , input.end() , cmp_1);
//        
//        
////        while(cur_indx < input.size()){
//        for(int cur_indx = 0 ; cur_indx < N ; cur_indx++){
//        
//            if(input[cur_indx].service_time != INF) continue;
//            
//            int min_free_time = INF;
//            for(int i=1 ; i<=K ; i++){
//                if(table_time[i] != -1 && table_time[i] < min_free_time){
//                    min_free_time = table_time[i];
//                }
//            }
//            int timePoint = max(min_free_time , input[cur_indx].time);
//            
//            if(timePoint >= 21*3600) break;
//            
//            vector<int> userList;
//            vector<int> tableList;
//            
//            for(int j=cur_indx ; j<N ; j++){
//                if(input[j].service_time == INF && input[j].time <= timePoint) userList.push_back(j);
//            }
//            for(int i=1 ; i<=K ; i++){
//                if(table_time[i]!=-1 && table_time[i]<= timePoint) tableList.push_back(i);
//            }
//            
//            bool flag = false; // record if it is served
//            if(userList.size() == 1 && tableList.size()>1){ // one vip User look for vip table
//                if(input[userList[0]].isVIP == 1){
//                    for(int i=0 ; i<tableList.size() ; i++){
//                        if(isVIP_table[tableList[i]]){
//                            flag = true;
//                            updateInfo(userList[0] , tableList[i]);
//                            break;
//                        }
//                    }
//                }
//            }
//            else if(tableList.size() == 1 && userList.size() > 1){ // one vip table for vip user first
//                if(isVIP_table[tableList[0]]){
//                    for(int i=0 ; i<userList.size() ; i++){
//                        if(input[userList[i]].isVIP == 1){
//                            flag = true;
//                            updateInfo(userList[i] , tableList[0]);
//                            break;
//                        }
//                    }
//                }
//            }
//            else if(tableList.size() > 1 && userList.size() > 1){
//                for(int i=0 ; i<tableList.size() ; i++){
//                    if(isVIP_table[tableList[i]]){
//                        for(int j=0 ; j<userList.size() ; j++){
//                            if(input[userList[j]].isVIP == 1){
//                                flag = true;
//                                updateInfo(userList[j] , tableList[i]);
//                                break;
//                            }
//                        }
//                    }
//                }
//            }
//            
//            if(!flag){
//                updateInfo(userList[0] , tableList[0]);
//            }
//            cur_indx--;
//        
//        }
//        
//        
////        while(cur_indx < input.size()){
////            if(free_count > 0){
////                
////                if(table_time[table_num] != -1) {
////                    table_num++;
////                    continue;
////                }
////                
////                if(cur_time >= end_time) break;
////                
////                if(input[cur_indx].time >= cur_time){
////                    push_table(input[cur_indx] , input[cur_indx].time , table_num);
////                    input[cur_indx].service_time = input[cur_indx].time;
////                    input[cur_indx].wait_time = 0;
////                    ans.push_back(input[cur_indx]);
////                }
////                else{
////                    
////                    if(isVIP_table[table_num]){
////                        Node tmp_node = input[cur_indx];
////                        for(int i=cur_indx ; input[cur_indx].time <= cur_time ; i++){
////                            if(input[i].isVIP == 1){
////                                tmp_node = input[i];
////                                vector<Node>::iterator it = input.begin();
//////                                for(int j=0 ; j<i ; j++) it++;
////                                it += i;
////                                input.erase(it);
////                                cur_indx--;
////                                break;
////                            }
////                        }
////                        push_table(tmp_node , cur_time , table_num);
////                        tmp_node.service_time = cur_time;
////                        tmp_node.wait_time = cur_time - tmp_node.time;
////                        ans.push_back(tmp_node);
////                    }
////                    else{
////                        push_table(input[cur_indx] , cur_time , table_num);
////                        input[cur_indx].service_time = cur_time;
////                        input[cur_indx].wait_time = cur_time - input[cur_indx].time;
////                        ans.push_back(input[cur_indx]);
////                    }
////                }
////                cur_indx++;
////                table_num++;
////            }
////            else{
////                table_num = pop_table(); // update cur_time
////                if(free_count == 0)
////                    table_num = 1;
////            }
////        }
//        
//        // ans
//        
//        for(int i=0 ; i<ans.size() ; i++){
//            print_time(ans[i].time);
//            printf(" ");
//            print_time(ans[i].service_time);
//            printf(" %d\n" , (int)(((double)(ans[i].wait_time)/60)+0.5));
//        }
//        for(int i=1 ; i<=K ; i++){
//            if(i!=1)
//                printf(" ");
//            printf("%d" , table_count[i]);
//        }
//        printf("\n");
//        
//    }
//
//    return 0;
//}