////
////  23_Have Fun with Numbers (20).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/12.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int h1[11];
//int h2[11];
//
//string doubleStr(string input){
//    string ret;
//    int m = 0;
//    for(int i=input.size()-1 ; i>=0 ; i--){
//        int tmp = input[i]-'0';
//        tmp = tmp * 2 + m;
//        ret.insert(ret.begin() , tmp%10 + '0');
//        m = tmp/10;
//    }
//    if(m != 0)
//        ret.insert(ret.begin() , m + '0');
//    return ret;
//}
//
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    string input;
//    cin >> input;
//    memset(h1 , 0 , sizeof(h1));
//    memset(h2 , 0 , sizeof(h2));
//    
//    for(int i=0 ; i<input.size() ; i++){
//        h1[input[i]-'0']++;
// 
//    }
//    
//    string double_str = doubleStr(input);
//    
//    for(int i=0 ; i<double_str.size() ; i++){
//        h2[double_str[i]-'0']++;
//    }
//    
//    bool flag = true;
//    for(int i=0 ; i<10 ; i++){
//        if(h1[i]!=h2[i]){
//            flag = false;
//            break;
//        }
//    }
//    
//    if(flag)
//        printf("Yes\n");
//    else
//        printf("No\n");
//    printf("%s\n" , double_str.c_str());
//    
//    return 0;
//}