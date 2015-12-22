////
////  5_Spell It Right (20).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/5.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//using namespace std;
//
//string english[10] = {
//    "zero",
//    "one",
//    "two",
//    "three",
//    "four",
//    "five",
//    "six",
//    "seven",
//    "eight",
//    "nine"
//};
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    string input;
//    cin >> input;
//    int len = input.length();
//    int sum = 0;
//    for(int i=0 ; i<len ; i++){
//        sum += input[i]-'0';
//    }
//    
//    string ans;
//    while(sum > 0){
//        int tmp = sum%10;
//        sum/=10;
//        ans.insert(0 , english[tmp]);
//        if(sum>0){
//            ans.insert(0 , " ");
//        }
//    }
//    if(ans == ""){
//        ans = "zero";
//    }
//    cout << ans << endl;
//    return 0;
//}