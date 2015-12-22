////
////  38_Recover the Smallest Number (30)_correct.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/25.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <algorithm>
//#include <string>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<string> list;
//
//bool cmp(string A , string B){
//    return A+B < B+A;
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    int n;
//    cin >> n;
//    for(int i=0 ; i<n ; i++){
//        string input;
//        cin >> input;
//        list.push_back(input);
//    }
//    
//    sort(list.begin() , list.end() , cmp);
//    
//    string ans;
//    for(int i=0 ; i<n ; i++){
//        ans += list[i];
//    }
//    
//    while(ans[0]=='0'){
//        ans.erase(ans.begin());
//    }
//    if(ans.size()==0){
//        printf("0\n");
//        return 0;
//    }
//    
//    printf("%s\n" , ans.c_str());
//
//    return 0;
//}