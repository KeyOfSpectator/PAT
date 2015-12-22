////
////  32_Sharing (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/17.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <map>
//#include <iostream>
//using namespace std;
//
//struct Node{
//    char c;
//    string nextAddress;
//};
//
//map<string , Node> hash_map;
//
//map<char , string> cToAddress;
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    string s1_add , s2_add;
//    int N;
//    cin >> s1_add >> s2_add >> N;
//    
//    for(int i=0 ; i<N ; i++){
//        Node tmp_node;
//        string add;
//        cin >> add >> tmp_node.c >> tmp_node.nextAddress;
//        
//        pair<string , Node> tmp_pair(add , tmp_node);
//        hash_map.insert(tmp_pair);
//        
//        pair<char , string> tmp_pair2(tmp_node.c , add);
//        cToAddress.insert(tmp_pair2);
//        
//    }
//    
//    string s1 , s2;
//    while(s1_add != "-1"){
//        s1 += hash_map.find(s1_add)->second.c;
//        s1_add = hash_map.find(s1_add)->second.nextAddress;
//    }
//    while(s2_add != "-1"){
//        s2 += hash_map.find(s2_add)->second.c;
//        s2_add = hash_map.find(s2_add)->second.nextAddress;
//    }
//    
//    int indx1 = s1.length()-1;
//    int indx2 = s2.length()-1;
//    while(s1[indx1]==s2[indx2] && indx1>=0 && indx2>=0){
//        indx1--;
//        indx2--;
//    }
//    
//    char target = s1[indx1+1];
//    map<char , string>::iterator it = cToAddress.find(target);
//    if(it != cToAddress.end()){
//        cout << it->second << endl;
//        return 0;
//    }
////    for(map<string , Node>::iterator it = hash_map.begin() ; it != hash_map.end() ; it++){
////        if(it->second.c == target){
////            cout << it->first << endl;
//////            printf("%d\n" , it->first.c_str());
////            return 0;
////        }
////    
////    }
//    printf("-1\n");
//    
//    return 0;
//}