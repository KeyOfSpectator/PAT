////
////  57_Stack (30).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/12/2.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <stack>
//#include <vector>
////#include <string>
////#include <iostream>
////#include <sstream>
//using namespace std;
//
////stringstream ss;
//
//stack<int> s;
//vector<int> v;
//
//void insert(int x){
//    s.push(x);
//    
//    int l = 0 , r = v.size();
//    int mid;
//    while(l<r){
//        mid = (l+r)/2;
//        if(v[mid]<x){
//            l = mid+1;
//        }
//        else{
//            r = mid;
//        }
//    }
//    vector<int>::iterator it = v.begin();
//    it += r;
//    v.insert(it , x);
//    
//}
//
//int pop(){
//    
//    if(s.empty()) return -1;
//    
//    int num = s.top();
//    s.pop();
//    
//    int l = 0 , r = v.size();
//    int mid;
//    while(l<r){
//        mid = (l+r)/2;
//        if(v[mid]<num){
//            l = mid+1;
//        }
//        else{
//            r = mid;
//        }
//    }
//    vector<int>::iterator it = v.begin();
//    it += r;
//    
//    v.erase(it);
//    
//    return num;
//}
//
//int peekMedian(){
//    
//    if(v.size() == 0)
//        return -1;
//
//    int length = v.size();
//    int indx;
//    if(length%2==1){
//        indx = (length+1)/2;
//    }
//    else
//        indx = (length)/2;
//    
//    return v[indx-1];
//    
//}
//
//int N;
//int main(){
//
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%d\n" , &N);
//    v.clear();
//    while(!s.empty()) s.pop();
//    
//    for(int i=0 ; i<N ; i++){
////        string input;
//        char input[20];
////        getline(cin , input);
//        scanf("%s" , input);
//        if(input[1] == 'o'){
//            int ret = pop();
//            if(ret != -1)
//                printf("%d\n" , ret);
//            else
//                printf("Invalid\n");
//        }
//        else if(input[1] == 'e'){
//            int ret = peekMedian();
//            if(ret != -1)
//                printf("%d\n" , ret);
//            else
//                printf("Invalid\n");
//        }
//        else{
//            int num;
//            scanf("%d" , &num);
////            string tmp; int num;
////            ss << input;
////            ss >> tmp >> num;
////            ss.clear();
//            insert(num);
//        }
//    
//    }
//
//    return 0;
//}