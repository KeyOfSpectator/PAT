////
////  44_44_Shopping in Mars (25)_2.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/28.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <string.h>
//using namespace std;
//
//int N , K;
//vector<int> input;
//vector<int> ans;
//int sumFrom0[100005];
//int right_list[100005];
//
//int findCloestSum(int start){
//    int left = start+1;
//    int right = N;
//    int mid;
//    while(left < right){
//        mid = (left + right)/2;
//        if(sumFrom0[mid] - sumFrom0[start] >= K){
//            right = mid;
//        }
//        else{
//            left = mid + 1;
////            if(left >= right)
////                right = mid = left;
//        }
//    }
//    right_list[start] = right;
//    return sumFrom0[right] - sumFrom0[start];
//
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%d %d" , &N , &K);
//    
//    input.clear();
//    for(int i=0 ; i<N ; i++){
//        int tmp;
//        scanf("%d" , &tmp);
//        input.push_back(tmp);
//    }
//    
//    memset(sumFrom0 , 0 , sizeof(sumFrom0));
//    
//    for(int i=0 ; i<=N ; i++){
//        if(i==0)
//            sumFrom0[0] = 0;
//        else{
//            sumFrom0[i] = sumFrom0[i-1] + input[i-1];
//        }
//        
//    }
//    
//    ans.clear();
//    int min = 0x7fffffff;
//    for(int i=0 ; i<N ; i++){
//        int sum = findCloestSum(i);
//        if(sum >= K)
//            if(sum < min){
//                ans.clear();
//                ans.push_back(i);
//                min = sum;
//            }
//            else if(sum == min){
//                ans.push_back(i);
//            }
//    }
//    
//    // output
//    for(int i=0 ; i<ans.size() ; i++){
//        printf("%d-%d\n" , ans[i]+1 , right_list[ans[i]]);
//    
//    }
//    
//    
//
//    return 0;
//}