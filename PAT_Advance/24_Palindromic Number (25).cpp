////
////  24_Palindromic Number (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/12.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//using namespace std;
//
//int K;
//string N;
//
//string reverse_add(string N){
//    string ret;
//    int m = 0;
//    for(int i=0 ; i<N.size() ; i++){
//        int tmp = (N[i]-'0') + (N[N.size()-1-i]-'0') + m;
//        ret.insert(ret.begin() , tmp%10 + '0');
//        m = tmp/10;
//    }
//    while(m>0){
//        ret.insert(ret.begin() , m%10 + '0');
//        m /= 10;
//    }
//    return ret;
//}
//
//bool isPalindromic(string s){
//    for(int i=0 ; i<(s.size()/2+1) ; i++){
//        if(s[i]!= s[s.size()-1-i]){
//            return false;
//        }
//    }
//    return true;
//}
//
//int main(){
//
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    cin >> N >> K;
//    
//    if(isPalindromic(N)){
//        printf("%s\n" , N.c_str());
//        printf("0\n");
//        return 0;
//    }
//    
//    int i;
//    for(i=0 ; i<K ; i++){
//        N = reverse_add(N);
//        if(isPalindromic(N)){
//            i++;
//            break;
//        }
//    }
//    printf("%s\n" , N.c_str());
//    printf("%d\n" , i);
//    
//    return 0;
//}