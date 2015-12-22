////
////  16_Phone Bills (25)_2.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/9.
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
//struct Node{
//    
//    string name;
//    int month;
//    int day;
//    int hour;
//    int min;
//    
//    string status;
//    
//    int total_min;
//    int total_money;
//
//};
//
//int rate[24];
//vector<Node> input;
//vector<Node> ans;
//
//int cal_money(int time){
//    int hour = time/60;
//    int min = time%60;
//    double ret = 0.0;
//    int i = 0;
//    for(i=0 ; i<hour ; i++){
//        ret += rate[i%24] * 60;
//    }
//    ret += rate[i%24] * min;
////    ret /= 100;
//    return ret;
//}
//
//Node cal_node(Node node){
//    node.total_min = node.day * 24 * 60 + node.hour * 60 + node.min;
//    node.total_money = cal_money(node.total_min);
//    return node;
//}
//
//bool cmp(Node A , Node B){
////    if(A.name != B.name)
////        return A.name < B.name;
////    return A.total_min < B.total_min;
//    
//    if(A.name < B.name)
//        return 1;
//    else if(A.name == B.name && A.total_min < B.total_min)
//        return 1;
//    else
//        return 0;
//}
//
//
//int main(){
//
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    for(int i=0 ; i<24 ; i++){
//        scanf("%d" , &rate[i]);
//    }
//    
//    int N;
//    scanf("%d" , &N);
//    
//    for(int i=0 ; i<N; i++){
//        Node node;
//        cin >> node.name;
////        scanf("%02d:%02d:%02d:%02d" , &node.month , &node.day , &node.hour , &node.min);
//        
//        cin >> node.month;
//        getchar();
//        cin >> node.day;
//        getchar();
//        cin >> node.hour;
//        getchar();
//        cin>> node.min;
//        
//        
//        cin >> node.status;
//        node = cal_node(node);
//        input.push_back(node);
//    
//    }
//    
//    sort(input.begin() , input.end() , cmp);
//    
//
//    bool haveOnline = false;
//    string cur_name;
//    for(int i=0 ; i<N ;i++){
//        if(haveOnline == false && input[i].status == "on-line"){
//            ans.push_back(input[i]);
//            cur_name = input[i].name;
//            haveOnline = true;
//        }
//        else if(haveOnline == true && input[i].status == "on-line"){
//            ans.pop_back();
//            ans.push_back(input[i]);
//            cur_name = input[i].name;
//            haveOnline = true;
//        }
//        else if(haveOnline == true && input[i].status == "off-line" && cur_name == input[i].name){
//            ans.push_back(input[i]);
//            haveOnline = false;
//        }
//    }
//    
//    // !!!
//    if((*(ans.end()-1)).status == "on-line"){
//        ans.pop_back();
//    }
//    
//    double total_cost = 0;
//    cur_name = "";
//    for(int i=0 ; i<ans.size() ; i+=2){
//        if(cur_name != ans[i].name){
//            if(cur_name != ""){
//                printf("Total amount: $%.2f\n" , total_cost/100);
//                total_cost = 0;
//                printf("%s" , ans[i].name.c_str());
//                printf(" %02d\n" , ans[i].month);
//            }
//            else{
//                printf("%s" , ans[i].name.c_str());
//                printf(" %02d\n" , ans[i].month);
//            }
////            cout << ans[i].name;
////            printf(" %02d\n" , ans[i].month);
//            cur_name = ans[i].name;
//        }
//        printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n" , ans[i].day , ans[i].hour , ans[i].min , ans[i+1].day , ans[i+1].hour , ans[i+1].min , ans[i+1].total_min-ans[i].total_min , ((double)(ans[i+1].total_money-ans[i].total_money)/100) );
//        total_cost += ans[i+1].total_money-ans[i].total_money;
//    }
//    printf("Total amount: $%.2f\n" , total_cost/100);
//    
//    
//    return 0;
//}