////
////  16_Phone Bills (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/8.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <algorithm>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//
//struct Node{
//    string name;
//    int month;
//    int day;
//    int hour;
//    int min;
//    bool isOnLine;
//}node[1001];
//
//struct Pair{
//    
//    Node Anode;
//    Node Bnode;
//    
//    int total_min;
//    double money;
//    
//};
//
//int rate[25];
//
//bool cmp(Node A , Node B){
//    if(A.name != B.name)
//        return A.name < B.name;
//    if(A.day != B.day)
//        return A.day < B.day;
//    if(A.hour != B.hour)
//        return A.hour < B.hour;
//    
//    if(A.min == B.min){
//        return A.isOnLine;
//    }
//    
//    return A.min < B.min;
//}
//
//void print_ans(string name , vector<Pair> pair){
//    if(pair.size() == 0) return;
//    cout << name << " ";
//    printf("%02d\n" , pair[0].Anode.month);
//    
//    double total_money = 0.0;
//    for(int i=0 ; i<pair.size() ; i++){
//        printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2lf\n" , pair[i].Anode.day , pair[i].Anode.hour , pair[i].Anode.min , pair[i].Bnode.day , pair[i].Bnode.hour , pair[i].Bnode.min , pair[i].total_min , pair[i].money);
//        total_money += pair[i].money;
//    }
//    printf("Total amount: $%.2lf\n" , total_money);
//    
//}
//
//Pair cal_pair(Pair pair){
//    pair.total_min = (pair.Bnode.day - pair.Anode.day)*24*60 + (60-pair.Anode.min) + (pair.Bnode.hour - pair.Anode.hour - 1)*60 + (pair.Bnode.min);
//    pair.money = (pair.Bnode.day - pair.Anode.day)*60*rate[24];
//    
//    for(int i=pair.Anode.hour+1 ; i<pair.Bnode.hour ; i++){
//        pair.money += 60 * rate[i];
//    }
//    if(pair.Anode.day == pair.Bnode.day && pair.Anode.hour == pair.Bnode.hour){
//        pair.money += (pair.Bnode.min - pair.Anode.min) * rate[pair.Anode.hour];
//    }
//    else{
//        pair.money += (60-pair.Anode.min) * rate[pair.Anode.hour];
//        pair.money += (pair.Bnode.min) * rate[pair.Bnode.hour];
//    }
//    pair.money /= 100.0;
//    
//    return pair;
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    //
//    int a_day = 0;
//    for(int i=0 ; i<24 ; i++){
//        scanf("%d" , &rate[i] );
//        a_day += rate[i];
//    }
//    rate[24] = a_day;
//    int n;
//    scanf("%d" , &n);
//    for(int i=0 ; i<n; i++){
//        string tmp_line;
//        cin >> node[i].name;
//        scanf("%02d:%02d:%02d:%02d" , &node[i].month , &node[i].day , &node[i].hour , &node[i].min);
//        cin >> tmp_line;
//        if(tmp_line == "on-line")
//            node[i].isOnLine = true;
//        else
//            node[i].isOnLine = false;
//    }
//    
//    sort(node , node+n , cmp);
//    
//    vector<Pair> ans_pair;
//    bool haveOnline = false;
//    string ans_name = ""; // dont have online
//    Node tmp_node;
//    for(int i=0 ; i<n; i++){
//        if(ans_name != node[i].name){
//            
//            print_ans(ans_name , ans_pair);
//            
//            ans_pair.clear();
//            
//            ans_name = node[i].name;
//            
//            if(node[i].isOnLine == true){
//                
//                haveOnline = true;
//                
//                tmp_node = node[i];
//            }
//            else
//                continue;
//        }
//        else{
//            if(node[i].isOnLine == true){
//                haveOnline = true;
//                tmp_node = node[i];
//            }
//            else{
//                if(haveOnline){
//                    Pair tmp_pair;
//                    tmp_pair.Anode = tmp_node;
//                    tmp_pair.Bnode = node[i];
//                    tmp_pair = cal_pair(tmp_pair);
//                    ans_pair.push_back(tmp_pair);
//                    
//                    haveOnline = false;
//                }
//            }
//        }
//    }
//    print_ans(ans_name , ans_pair);
//
//    
////    bool test = "CYLL" < "CYJJ";
//
//    return 0;
//}