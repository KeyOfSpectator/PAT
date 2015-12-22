////
////  11_World Cup Betting (20).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/7.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//using namespace std;
//
//double input[3];
//double value[3];
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//
//    
//    string ans;
//    for(int i=0 ; i<3 ; i++){
//        cin >> input[0] >> input[1] >> input[2];
//        if(input[0] > input[1] && input[0] > input[2]){
//            value[i] = input[0];
//            if(i!=0)
//                ans += " ";
//            ans += "W";
//        }
//        else if(input[1] > input[0] && input[1] > input[2]){
//            value[i] = input[1];
//            if(i!=0)
//                ans += " ";
//            ans += "T";
//        }
//        else{
//            value[i] = input[2];
//            if(i!=0)
//                ans += " ";
//            ans += "L";
//        }
//    }
//    double ans_value = (value[0] * value[1] * value[2] * 0.65 - 1.0) * 2.0;
////    double tmp = ans_value*100 - (int)(ans_value*100);
////    if(  tmp>0.5 || ( (tmp-0.5)>0?(tmp-0.5):-(tmp-0.5) < 1e-6 ) )
////        ans_value += 0.01;
//    cout << ans;
//    printf(" %.2lf\n" , ans_value);
//    
//    
//
//    return 0;
//}