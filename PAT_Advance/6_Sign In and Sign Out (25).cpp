////
////  6_Sign In and Sign Out (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/5.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct Person{
//    string ID;
//    int start_time;
//    int end_time;
//}person[501];
//
//bool cmp_starttime(Person a , Person b){
//    return a.start_time < b.start_time;
//}
//
//bool cmp_endtime(Person a , Person b){
//    return a.end_time > b.end_time;
//}
//
//int col = 0;
//
//int cal_time(string time){
//    int ret = 0;
//    ret += ((time[0]-'0') * 10 + (time[1]-'0'))*3600;
//    ret += ((time[3]-'0') * 10 + (time[4]-'0'))*60;
//    ret += ((time[6]-'0') * 10 + (time[7]-'0'));
//    return ret;
//}
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    int M;
//    while(scanf("%d" , &M)!=EOF){
//        while(M--){
//            string ID , start_time , end_time;
//            cin >> ID >> start_time >> end_time;
//            int start_time_num = cal_time(start_time);
//            int end_time_num = cal_time(end_time);
//            person[col].ID = ID;
//            person[col].start_time = start_time_num;
//            person[col++].end_time = end_time_num;
//        }
//    }
//    
//    string ans;
//    sort(person , person+col , cmp_starttime);
//    ans += person[0].ID;
//    ans += " ";
//    sort(person , person+col , cmp_endtime);
//    ans += person[0].ID;
//    
//    cout << ans << endl;
//
//    return 0;
//}