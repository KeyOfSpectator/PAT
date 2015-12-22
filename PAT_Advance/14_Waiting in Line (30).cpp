////
////  14_Waiting in Line (30).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/8.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//
////本题容易出错的地方：是在17:00及以后开始服务的客户输出"Sorry"，而不是17:00之前结束服务的输出"Sorry"；
////如客户cId是16:59开始服务，服务时间为2，则输出的应该是17:01，而不是"Sorry"。
//
//
//#include <stdio.h>
//#include <queue>
//#include <string>
//using namespace std;
//
//struct Cus{
//    int id;
//    int spent;
//};
//
//int cus[1001];
//int inside;
//int cur_time;
//int cus_loc;
//queue<Cus> win[21];
//int win_spent[21];
//int end_time[1001];
//
//int n , m , k , q;
//
//int find_shortest_queue(){
//    int min = 1001;
//    int min_indx = -1;
//    for(int i=1 ; i<=n ; i++){
//        if(win[i].size() < min){
//            min = win[i].size();
//            min_indx = i;
//        }
//    }
//    return min_indx;
//}
//
//void put_inside(int cus_loc){
//    int queue_id = find_shortest_queue();
//    
//    Cus tmp;
//    tmp.id = cus_loc;
//    tmp.spent = cus[cus_loc];
//    
//    win[queue_id].push( tmp );
//    inside++;
//}
//
//int find_recent_end(){
//    int min = 1e6;
//    int min_indx = -1;
//    for(int i=1 ; i<=n ; i++){
//        if(win[i].size()==0)
//            continue;
//        if( win[i].front().spent - win_spent[i] < min ){
//            min_indx = i;
//            min = win[i].front().spent - win_spent[i];
//        }
//    }
//    return min_indx;
//}
//
//void spent_time_and_pop(int spent){
//    for(int i=1 ; i<=n ; i++){
//        if(win[i].size()==0)
//            continue;
//        win_spent[i] += spent;
//        if(win[i].front().spent <= win_spent[i] ){
//            win_spent[i] = 0;
//            
//            end_time[win[i].front().id] = cur_time;
//            
//            win[i].pop();
//            
//            inside--;
//        }
//        else{
//            //win_spent[i] += spent;
//        }
//    }
//}
//
//void parse_output(int time){
//    int hour = time/60+8;
//    int min = time%60;
//    printf("%02d:%02d\n" , hour , min);
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(scanf("%d %d %d %d" , &n, &m , &k , &q)!=EOF){
//        
//        for(int i=1 ; i<=k ; i++){
//            scanf("%d" , &cus[i]);
//        }
//        
//        // init
//        inside = 0;
//        cur_time = 0;
//        cus_loc = 1;
//        for(int i=0 ; i<=n ; i++){
//            while(!win[i].empty()) win[i].pop();
//            end_time[i] = 0;
//            win_spent[i] = 0;
//        }
//        
//        // first inside
//        for(int i=0 ; i<n*m && cus_loc<=k ; i++){
//            put_inside(cus_loc);
//            cus_loc++;
//        }
//        
//        while(cus_loc<=k){
//            int queue_id = find_recent_end();
//            int spent_time = win[ queue_id ].front().spent - win_spent[queue_id];
//            cur_time += spent_time;
//            spent_time_and_pop(spent_time);
//            
//            for(int i=inside ; i<n*m && cus_loc<=k; i++){
//                put_inside(cus_loc);
//                cus_loc++;
//            }
//        }
//        
//        while(inside>0){
//            int queue_id = find_recent_end();
//            int spent_time = win[ queue_id ].front().spent - win_spent[queue_id];
//            cur_time += spent_time;
//            spent_time_and_pop(spent_time);
//        }
//        
//        //query
//        for(int i=0 ; i<q ; i++){
//            int query_id;
//            scanf("%d" , &query_id);
//            
//            if(end_time[query_id] - cus[query_id] >= 540)
//                printf("Sorry\n");
//            else{
//                parse_output(end_time[query_id]);
//            }
//        }
//        
//        
//    
//    }
//
//    return 0;
//}