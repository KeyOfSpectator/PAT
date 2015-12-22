////
////  56_Mice and Rice (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/12/1.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
////  借鉴 http://www.cnblogs.com/siukwan/p/5003128.html
//
//
//#include <stdio.h>
//#include <string.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int N , M;
//vector<int> input;
//vector<int> seq;
//bool mark[1001];
//int ans[1001];
//
//
//int main(){
//
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%d %d" , &N , &M);
//    
//    for(int i=0 ; i<N ; i++){
//        int t;
//        scanf("%d" , &t);
//        input.push_back(t);
//        mark[i] = false;
//    }
//    
//    for(int i=0 ; i<N ; i++){
//        int t;
//        scanf("%d" , &t);
//        seq.push_back(t);
//    }
//    
//    // M=1
//    if(M==1){
//        int max = -1;
//        int maxid = -1;
//        for(int i=0 ; i<N ; i++){
//            if(input[i] > max){
//                max = input[i];
//                maxid = seq[i];
//            }
//            ans[i] = 2;
//        }
//        ans[maxid] = 1;
//        for(int i=0 ; i<N ; i++){
//            if(i!=0)
//                printf(" ");
//            printf("%d" , ans[i]);
//        }
//        printf("\n");
//        return 0;
//    }
//    
//    int groupNum = N/M;
//    if(N%M!=0) groupNum++;
//    
//    while(groupNum != 1){
//        int indx = 0;
//        int maxNum = -1;
//        int maxId = -1;
//        vector<int> next_input;
//        vector<int> next_seq;
//        for(int i=0 ; i<input.size() ; i++){
//            indx++;
//            if(input[seq[i]] > maxNum){
//                maxNum = input[seq[i]];
//                maxId = seq[i];
//            }
//            if(i==input.size()-1 || indx%M==0){
//                for(int j=i-indx+1 ; j<=i ; j++){
//                    if(seq[j] != maxId){
//                        mark[seq[j]] = true;
//                        ans[seq[j]] = groupNum+1;
//                    }
//                    else{
//                        next_input.push_back(input[seq[j]]);
//                        next_seq.push_back(seq[j]);
//                    }
//                    
//                }
//                indx = 0;
//                maxNum = -1;
//                maxId = -1;
//            }
//            
//        
//        }
//        input = next_input;
//        seq = next_seq;
//        groupNum = input.size()/M;
//        if(input.size()%M!=0) groupNum++;
//    }
//    
//    int max = -1;
//    int maxid = -1;
//    for(int i=0 ; i<input.size() ; i++){
//        if(input[i] > max){
//            max = input[i];
//            maxid = i;
//        }
//    }
//    for(int i=0 ; i<input.size() ; i++){
//        ans[seq[i]] = 2;
//    }
//    ans[seq[maxid]] = 1;
//    
//    for(int i=0 ; i<N ; i++){
//        if(i!=0)
//            printf(" ");
//        printf("%d" , ans[i]);
//    }
//    printf("\n");
//    
//    return 0;
//}