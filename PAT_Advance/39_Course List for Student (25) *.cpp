////
////  39_Course List for Student (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/25.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// 卡时 不能用string
//// find 时 O1
//// 计算name为一个hash值，然后查找
//
//#include <stdio.h>
//#include <string>
////#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <algorithm>
//#include <string.h>
//using namespace std;
//
//struct ptrCmp{
//    bool operator()( const char* s1 , const char* s2 ) const{
//        return strcmp(s1 , s2) < 0;
//    }
//};
//
//vector<int> stuID_coursesID[999999];
//map<char* , int , ptrCmp> stuName_stuID;
//int col;
//int N , K;
//
//
//int getID(char* stu_name){
////    char* tmp;
////    strcpy(tmp , stu_name);
//    map<char* , int>::iterator it = stuName_stuID.find(stu_name);
//    if(it == stuName_stuID.end()){
//        pair<char* , int> pair_tmp(stu_name , col++);
//        stuName_stuID.insert(pair_tmp);
//        return col-1;
//    }
//    else
//        return it->second;
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%d %d" , &N , &K);
////    cin >> N >> K;
//    col = 0;
//    
//    for(int i=0 ; i<K ;i++){
//        int id , n;
//        scanf("%d %d" , &id , &n);
////        cin >> id >> n;
//        for(int j=0 ; j<n ; j++){
//            char* stu_name = new char[4];
////            string stu_name;
////            cin >> stu_name;
//            scanf("%s" , stu_name);
//            int stu_id = getID(stu_name);
//            stuID_coursesID[stu_id].push_back(id);
//        }
//        
//    }
//    
//    //sort
//    for(int i=0 ; i<col ; i++){
//        sort(stuID_coursesID[i].begin() , stuID_coursesID[i].end());
//    }
//    
//    for(int i=0 ; i<N ; i++){
//        char* query_name = new char[4];
////        string query_name;
////        cin >> query_name;
//        scanf("%s" , query_name);
//        printf("%s " , query_name);
//        map<char* , int>::iterator it = stuName_stuID.find(query_name);
//        if(it == stuName_stuID.end())
//            printf("0\n");
//        else{
//            printf("%d" , stuID_coursesID[it->second].size());
////            sort(stuID_coursesID[it->second].begin() , stuID_coursesID[it->second].end());
////            for(set<int>::iterator it = stuID_coursesID[it->second].begin() ; it != stuID_coursesID[it->second].end() ; it++){
////            
////            }
////            while(stuID_coursesID[it->second].size()!=0){
////                printf(" %d" , stuID_coursesID[it->second].begin());
////                stuID_coursesID[it->second].erase(stuID_coursesID[it->second].begin());
////            }
//            for(int j=0 ; j<stuID_coursesID[it->second].size() ; j++){
//                printf(" %d" , stuID_coursesID[it->second][j]);
//            }
//            
//            printf("\n");
//        }
//    }
//
//    return 0;
//}