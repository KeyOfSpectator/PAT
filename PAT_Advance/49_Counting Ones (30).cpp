////
////  50_Counting Ones (30).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/12/1.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <sstream>
//using namespace std;
//
//stringstream ss;
//
//int power(int a , int n){
//    int ret = 1;
//    for(int i=1 ; i<=n ; i++){
//        ret *= a;
//    }
//    return ret;
//}
//
//int main(){
//
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    int input;
//    cin >> input;
//    string str;
//    ss <<input;
//    ss >> str;
//    ss.clear();
//    
//    int sum = 0;
//    
//    for(int i=0 ; i<str.length() ; i++){
//        
//        sum += input/power(10 , (str.length() - i)) * power(10 , (str.length() - i - 1));
//        if(str[i]-'0' > 1)
//            sum += power(10 , (str.length() - i - 1));
//        else if(str[i]-'0' == 1)
//            sum += input% power(10 , (str.length() - i - 1)) + 1 ;
//        
//        
//    }
//    
//    printf("%d\n" , sum);
//
//
//    return 0;
//}