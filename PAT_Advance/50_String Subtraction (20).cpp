////
////  50_String Subtraction (20).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/12/1.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <string.h>
//#include <iostream>
//using namespace std;
//
//int code[999999];
//
//int main(){
//
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    memset(code , -1 , sizeof(code));
//    string s1 , s2;
//    
//    getline(cin , s1);
//    getline(cin , s2);
//    
////    cin >> s1 >> s2;
//    
//    for(int i=0 ; i<s2.length() ; i++){
//        code[s2[i]]++;
//    }
//    
//    string ans;
//    
//    for(int i=0 ; i<s1.length() ; i++){
//        if(code[s1[i]]==-1){
//            ans+= s1[i];
//        }
//    }
//    
//    cout << ans << endl;
//
//    return 0;
//}