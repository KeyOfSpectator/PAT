////
////  31_Hello World for U (20).cpp
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
//
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    string input;
//    cin >> input;
//    
//    int N = input.length();
//    
//    int max = -1;
//    for(int n2 = 3 ; n2<=N ; n2++){
//        
//        int k = (N+2-n2)/2;
//        if((N+2-n2)%2==0 && k<=n2 && (N+2-n2)/2>max){
//            max = k;
//        }
//    }
//    
//    int n2 = N+2-2*max;
//    
//    string s1 = input.substr(0 , max-1);
//    string s2 = input.substr(max-1 , n2);
//    string s3 = input.substr(max+n2-1 , max-1);
//    
//    for(int i=0 ; i<max-1 ; i++){
//        cout << s1[i];
//        for(int j=0 ; j<n2-2 ; j++) cout << " ";
//        cout << s3[s3.length()-i-1] << endl;
//        
//    }
//    cout << s2 << endl;
//    
//    return 0;
//}