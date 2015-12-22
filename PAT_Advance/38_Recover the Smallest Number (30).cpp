////
////  38_Recover the Smallest Number (30).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/18.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <set>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Node{
//    string str;
//    string add_str;
//};
//
//vector<Node> list[10];
//
//bool cmp_1(Node A , Node B){
//    return A.str < B.str;
//}
//
//bool cmp_2(Node A , Node B){
//    return A.add_str < B.add_str;
//}
//
//int N;
//string ans;
//
//int main(){
//
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%d" , &N);
//    
//    for(int i=0 ; i<N ; i++){
//        string input;
//        cin >> input;
//        
//        Node node;
//        node.str = input;
//        list[input[0]-'0'].push_back(node);
//    }
//    
//    for(int i=0 ; i<10 ; i++){
//        sort(list[i].begin() , list[i].end() , cmp_1);
//    }
//    
//    int min_indx;
//    for(int j=0 ; j<10 ; j++){
//        if(list[j].size() == 0)
//            continue;
//        else{
//            
//            min_indx = j;
//            while(list[j].size()>0){
//                
//                if(list[j].size()==1){
//                    ans+=list[j][0].str;
//                    list[j].clear();
//                }
//                else{
//                    vector<string> tmp;
//                    for(int k=0 ; k<list[j].size() ; k++){
//                        string tmp_str = list[j][k].str;
//                        tmp_str.insert(tmp_str.end() , (min_indx+'0'));
//                        list[j][k].add_str = tmp_str;
//                    }
//                    sort(list[j].begin() , list[j].end() , cmp_2);
//                    
//                    for(int k=0 ; k<list[j].size() ; k++){
//                        ans+=list[j][k].str;
////                        list[j].erase(list[j].begin());
//                    }
//                    list[j].clear();
//                    
//                }
//                
//            }
//        }
//    }
//
//    while(ans[0] == '0'){
//        ans.erase(ans.begin());
//    }
//    
//    if(ans.size() == 0){
//        printf("0\n");
//        return 0;
//    }
//    
//    printf("%s\n" , ans.c_str());
//    
//    return 0;
//}