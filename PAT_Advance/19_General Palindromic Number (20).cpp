////
////  19_General Palindromic Number (20).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/12.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//
//using namespace std;
//
//long long int list[1000];
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    long long int input , radix;
//    
//    while(scanf("%lld %lld" , &input , &radix)!=EOF){
//        string ans;
//        int loc = 0;
//        
//        if(input == 0){
//            printf("Yes\n");
//            printf("0\n");
//            continue;
//        }
//        
//        while(input>0){
//            list[loc++] = input % radix;
//            input /= radix;
//        }
//        
//        bool flag = true;
//        for(int i=0 ; i<loc ; i++){
//            if(list[i] != list[loc-i-1]){
//                flag = false;
//                break;
//            }
//        }
//        
//        if(flag)
//            printf("Yes\n");
//        else
//            printf("No\n");
//        
//
//        for(int i=loc-1 ; i>=0 ; i--){
//            if(i!=loc-1)
//                printf(" ");
//            printf("%lld" , list[i]);
//        }
//        printf("\n");
//        
//    }
//
//    return 0;
//}