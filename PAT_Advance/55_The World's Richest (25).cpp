////
////  55_The World's Richest (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/12/1.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string.h>
//using namespace std;
//
//struct Node{
//    char name[9];
//    int age;
//    int money;
//};
//
//bool cmp(Node A , Node B){
//    if(A.money == B.money)
//        if(A.age == B.age)
//            return strcmp(A.name , B.name)<0;
//        else
//            return A.age < B.age;
//    return A.money > B.money;
//}
//
//vector<Node> input;
//vector<Node> input2;
//
//int N , K;
//
//int min(int a , int b){
//    return a<b?a:b;
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//
//    scanf("%d %d" , &N , &K);
//    
//    for(int i=0 ; i<N ; i++){
//        Node node;
//        scanf("%s %d %d" , node.name , &node.age , &node.money);
//        node.name[8] = 0;
////        cin >> node.name >> node.age >> node.money;
//        input.push_back(node);
//    }
//    
//    sort(input.begin() , input.end() , cmp);
//    
//    for(int q=1 ; q<=K ; q++){
//        printf("Case #%d:\n" , q);
//        int limit , amin , amax;
//        scanf("%d %d %d" , &limit , &amin , &amax);
//        
//        input2.clear();
//        int col = 0;
//        for(int i=0 ; i<input.size() ; i++){
//            if(col < limit &&  amin <= input[i].age && input[i].age <=amax){
////                input2.push_back(input[i]);
//                printf("%s %d %d\n" , input[i].name , input[i].age , input[i].money);
////                cout << input[i].name << " " << input[i].age << " " << input[i].money << endl;
//                col++;
//            }
//        }
//        
////        sort(input2.begin() , input2.end() , cmp);
//        
//        
//        if(col==0){
//            printf("None\n");
//            return 0;
//        }
//            
//        
////        for(int i=0 ; i<min(limit , input2.size()) ; i++){
////            cout << input2[i].name << " " << input2[i].age << " " << input2[i].money << endl;
////        }
//        
//    }
//    
//    
//    
//
//    return 0;
//}