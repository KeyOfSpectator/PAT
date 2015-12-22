////
////  26 9OJ_1153.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/25.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//#include <stack>
//using namespace std;
//
//stack<int> s;
//
//char str[101];
//char ans[101];
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%s" , str)!=EOF){
//        int length = strlen(str);
//        
//        for(int i=0 ; i<length ; i++){
//            if(str[i] == '('){
//                s.push(i);
//                ans[i] = ' ';
//            }
//            else if(str[i] == ')'){
//                if(s.empty() == false){
//                    s.pop();
//                    ans[i] = ' ';
//                }
//                else{
//                    ans[i] = '?';
//                }
//            }
//            else{
//                ans[i] = ' ';
//            }
//        }
//        while(s.empty()==false){
//            ans[s.top()] = '$';
//            s.pop();
//        }
//        ans[length] = 0;
//        puts(str);
//        puts(ans);
//    
//    }
//
//    return 0;
//}