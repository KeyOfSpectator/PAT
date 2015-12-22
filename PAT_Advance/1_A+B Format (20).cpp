////
////  1_A+B Format (20).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/3.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <stack>
//#include <iostream>
//using namespace std;
//
//stack<char> sta;
//
//class Solution{
//public:
//    string add_formated(int a , int b){
//        while(!sta.empty()) sta.pop();
//        int sum = a+b;
//        string ret;
//        if(sum == 0)
//            return "0";
//        if(sum<0){
//            ret+='-';
//            sum = -sum;
//        }
//        int count = 0;
//        while(sum>0){
//            if(count == 3){
//                count = 0;
//                sta.push(',');
//            }
//            sta.push(sum%10 + '0');
//            sum/=10;
//            count++;
//        }
//        while(!sta.empty()){
//            ret+=sta.top();
//            sta.pop();
//        }
//        return ret;
//    }
//    
//};
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    int a , b;
//    Solution s;
//    while(scanf("%d%d" , &a , &b)!=EOF){
//        string ans = s.add_formated(a, b);
//        cout << ans << endl;
//    }
//
//    return 0;
//}