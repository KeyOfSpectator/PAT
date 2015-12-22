//
////
////  35_Password (20).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/18.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct Node{
//    string account;
//    string password;
//};
//
//vector<Node> input;
//vector<Node> ans;
//
//string checkStr(string s){
//    for(int i=0 ; i<s.length() ; i++){
//        if(s[i] == '1'){
//            s[i] = '@';
//        }
//        else if(s[i] == '0'){
//            s[i] = '%';
//        }
//        else if(s[i] == 'l'){
//            s[i] = 'L';
//        }
//        else if(s[i] == 'O'){
//            s[i] = 'o';
//        }
//        
//    }
//    return s;
//}
//
//int N;
//int main(){
//    
//    while(scanf("%d" , &N)!=EOF){
//        for(int i=0 ; i<N ; i++){
//            Node node;
//            cin >> node.account >> node.password;
//            input.push_back(node);
//            string new_s = checkStr(node.password);
//            if(new_s != node.password){
//                node.password = new_s;
//                ans.push_back(node);
//            }
//            
//        }
//        
//        
//        // output
//        if(ans.size() != 0){
//            printf("%d\n" , ans.size());
//            for(int i=0 ; i<ans.size() ; i++){
//                printf("%s %s\n" , ans[i].account.c_str() , ans[i].password.c_str());
//            }
//        }
//        else{
//            if(input.size()== 1)
//                printf("There is 1 account and no account is modified\n");
//            else
//                printf("There are %d accounts and no account is modified\n" , input.size());
//
//        }
//    }
//    
//    return 0;
//}