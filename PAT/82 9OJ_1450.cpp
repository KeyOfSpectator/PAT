////
////  82 9OJ_1450.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/11.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//#include <vector>
//#include <queue>
//using namespace std;
//
//char name[1001][100];
//vector<int> edge[1001];
//queue<int> Q;
//int size;
//int indegree[1001];
////int outdegree[1001];
//
//int getID(char str[]){
//    for(int i=0 ; i<size ; i++){
//        if(strcmp(str , name[i]) == 0)
//            return i;
//        
//    }
//    strcpy(name[size++] , str);
//    return size-1;
//}
//
//int main(){
//    int n;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &n)!=EOF){
//        if(n==0) break;
//        size = 0;
//        for(int i=0 ; i<1001 ; i++) {
//            edge[i].clear();
//            indegree[i] = 0;
//            //outdegree[i] = 0;
//        }
//        int tmp = n;
//        while(tmp--){
//            char a[100];
//            char b[100];
//            scanf("%s %s" , a , b);
//            int id_a = getID(a);
//            int id_b = getID(b);
//            edge[id_a].push_back(id_b);
//            indegree[id_b]++;
//            //outdegree[id_a]++;
//        }
//        while(Q.empty()==false) Q.pop();
//        int boss = 0;
//        for(int i=0 ; i<size ; i++){
//            if(indegree[i] == 0)
//                boss++;
//        }
//        if(boss>1){
//            printf("No\n");
//            continue;
//        }
//        for(int i=0 ; i<size ; i++){
//            if(indegree[i] == 0) Q.push(i);
//        }
//        int cnt = 0;
//        while(Q.empty()==false){
//            int top = Q.front();
//            Q.pop();
//            cnt++;
//            for(int i=0 ; i<edge[top].size() ; i++){
//                indegree[edge[top][i]]--;
//                if(indegree[edge[top][i]]==0)
//                    Q.push(edge[top][i]);
//            }
//        }
//        if(cnt == size)
//            printf("Yes\n");
//        else
//            printf("No\n");
//    
//    }
//
//    return 0;
//}