////
////  52_Linked List Sorting (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/12/1.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <iostream>
//#include <map>
//using namespace std;
//
//struct Node{
//    int address;
//    int key;
//    int next;
//};
//
//
//Node m[100000];
//vector<Node> list;
//
//bool cmp(Node A , Node B){
//    return A.key < B.key;
//}
//
//int N;
//int start;
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(scanf("%d %d" , &N , &start)!=EOF){
//        
//        
//        
//        for(int i=0 ; i<N ; i++){
//            int add , next_add;
//            int k;
//            scanf("%d %d %d" , &add , &k , &next_add);
////            cin >> add >> k >> next_add;
//            Node node;
//            node.address = add;
//            node.key = k;
//            node.next = next_add;
//            m[add] = node;
//        }
//        
//        list.clear();
//        if(N==0 || start == -1){
//            printf("0 -1\n");
//            continue;
//        }
//        
//        int cur_add = start;
//        while(cur_add != -1){
//            Node tmp = m[cur_add];
//            list.push_back(tmp);
//            cur_add = tmp.next;
//        }
//        
//        sort(list.begin() , list.end() , cmp);
//        
//        start = list[0].address;
//        
//        printf("%d %05d\n" , list.size() , start);
//        
//        for(int i=0 ; i<list.size()-1 ; i++){
//            list[i].next = list[i+1].address;
//            printf("%05d %d %05d\n" , list[i].address , list[i].key , list[i].next);
//
//        }
//
//        printf("%05d %d -1\n" , list[list.size()-1].address , list[list.size()-1].key);
//        
//    }
//    return 0;
//}