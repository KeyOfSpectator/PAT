////
////  4_Counting Leaves (30).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/4.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <string>
//#include <string.h>
//#include <stack>
//#include <iostream>
//#include <map>
//using namespace std;
//
//vector<int> children[101];
//
//map<string , int> map_list;
//
//bool inD[101];
//
//stack<int> sta;
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    int n , m;
//    
//    
//    while(scanf("%d %d" , &n , &m)!=EOF){
//        // init
//        map_list.clear();
//        for(int i=0 ; i<n ; i++){
//            children[i].clear();
//        }
//        memset(inD , 0 , sizeof(inD));
//        while(!sta.empty()) sta.pop();
//
//        // input
//        int col = 0;
//        for(int i=0 ; i<m ; i++){
//            string a , b;
//            int childNum;
//            cin >> a >> childNum;
//            
//            map<string , int>::iterator it = map_list.find(a);
//            int a_id;
//            if(it==map_list.end()){
//                a_id = col;
//                pair<string , int> tmp(a , col++);
//                map_list.insert(tmp);
//            }
//            else{
//                a_id = it->second;
//            }
//            
//            
//            for(int j=0 ; j<childNum ; j++){
//                cin >> b;
//                
//                int b_id;
//                map<string , int>::iterator it = map_list.find(b);
//                if(it==map_list.end()){
//                    b_id = col;
//                    pair<string , int> tmp(b , col++);
//                    map_list.insert(tmp);
//                    
//                }
//                else{
//                    b_id = it->second;
//                }
//                
//                inD[b_id] = true;
//                children[a_id].push_back(b_id);
//            }
//        }
//        
//        int root  = 0;
//        for(int i=0 ; i<n ; i++){ if(inD[i]==false){ root = i ; break; } }
//        
//        sta.push(root);
//        
//        vector<int> level;
//        
//        int ans = 0;
//        string ans_str;
//        int levelcount = 0;
//        while(!sta.empty()){
//            levelcount++;
//            ans = 0;
//            level.clear();
//            while(!sta.empty()){
//                int node = sta.top();
//                sta.pop();
//                if(children[node].size()==0)
//                    ans++;
//                else
//                    for(int i=0 ; i<children[node].size() ; i++){
//                        level.push_back(children[node][i]);
//                    }
//            }
//            if(levelcount != 1)
//                ans_str += ' ';
//            ans_str += ans+'0';
//            
//            for(int i=0 ; i<level.size() ; i++){
//                sta.push(level[i]);
//            }
//        }
//        cout << ans_str << endl;
//    
//    }
//
//    return 0;
//}