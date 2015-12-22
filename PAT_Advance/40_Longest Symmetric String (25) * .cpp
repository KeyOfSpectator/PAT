////
////  40_Longest Symmetric String (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/25.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//using namespace std;
//
//// 1 暴力 ， 以每个字母为中心 ， 注意考虑偶数长度字符串
//// 2 动归 ， 每次向两侧增长长度1
//
//bool flag[1005][1005]; // i到j是否是symmetric ， true为是
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    string input;
//
//    getline(cin , input);
//    
//    int l = input.length();
//    
//    for(int i=0 ; i<=l ; i++){
//        flag[i][i] = true;
//        flag[i][i-1] = true;
//    }
//    
//    int max = 1;
//    for(int j=1 ; j<l ; j++){
//        for(int i=0 ; i<j ; i++){
//            flag[i][j] = false;
//            if(input[i] == input[j] && flag[i+1][j-1]){
//                flag[i][j] = true;
//                if(max < (j-i+1)){
//                    max = j-i+1;
//                }
//            }
//        }
//    }
//    
//    printf("%d\n" , max);
//
//    return 0;
//}