////
////  27_Colors in Mars (20).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/17.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//using namespace std;
//
//char c[13] = {
//    '0',
//    '1',
//    '2',
//    '3',
//    '4',
//    '5',
//    '6',
//    '7',
//    '8',
//    '9',
//    'A',
//    'B',
//    'C'
//};
//
//string convert(int x){
//    string ret;
//    int a = x/13;
//    ret += c[a];
//    ret += c[x%13];
//    return ret;
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    int a , b , c;
//    while(scanf("%d %d %d" , &a , &b , &c)!=EOF){
//        string ans = "#";
//        ans += convert(a);
//        ans += convert(b);
//        ans += convert(c);
//        cout << ans << endl;
//        
//    }
//    
//    return 0;
//}