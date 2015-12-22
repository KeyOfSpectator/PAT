////
////  POJ_3261.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/7/18.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
///*
// * POJ_3261.cpp
// *
// *  Created on: 2015年7月18日
// *      Author: fsc
// */
//
//
//
//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//
//#define MAX_RANGE 1000001
//#define MAX_LENGTH 20001
//
//int n,k;
//int input_list[MAX_LENGTH];
//int _rank[MAX_RANGE];
//int _sa[MAX_LENGTH];
//int trank[MAX_RANGE];
//int tsa[MAX_LENGTH];
//int sum[MAX_RANGE];
//int height[MAX_LENGTH];
//
//int ans;
//
//void sorting(int j){
//    memset(sum , 0 , sizeof(sum));
//    for(int i=1 ; i<=n ;i++) sum[_rank[i+j]]++;
//    for(int i=1 ; i<MAX_RANGE ; i++) sum[i] += sum[i-1];
//    for(int i=n ; i>0 ; i--)
//        tsa[ sum[_rank[i+j]]-- ] = i;
//    
//    memset(sum , 0 , sizeof(sum));
//    for(int i=1 ; i<=n ; i++) sum[_rank[i]]++;
//    for(int i=1 ; i<MAX_RANGE ; i++) sum[i] += sum[i-1];
//    for(int i=n ; i>0 ; i--)
//        _sa[ sum[ _rank[ tsa[i] ] ]-- ] = tsa[i];
//    
//}
//
//void get_sa(){
//    memset(sum , 0 , sizeof(sum));
//    for(int i=0;i<n;i++) trank[i+1]=input_list[i];
//    for(int i=1;i<=n;i++)sum[trank[i]]++;
//    for(int i=1;i<MAX_RANGE;i++)sum[i]+=sum[i-1];
//    for(int i=n ; i>0 ; i--)
//        _sa[sum[trank[i]]--] = i;
//    
//    _rank[ _sa[1] ] = 1;
//    for(int i=2,p=1; i<=n ; i++){
//        if(trank[ _sa[i] ]!=trank[_sa[i-1]]) p++;
//        _rank[_sa[i]] = p;
//    }
//    
//    // loop
//    for(int j=1 ; j<=n ; j*=2){
//        sorting(j);
//        trank[ _sa[1] ] = 1;
//        for(int i=2 ,p=1; i<=n;i++){
//            if((_rank[_sa[i]]!= _rank[_sa[i-1]])||(_rank[_sa[i]+j] != _rank[_sa[i-1]+j])) p++;
//            trank[_sa[i]] = p;
//        }
//        for(int i=1 ; i<=n ; i++) _rank[i] = trank[i];
//    }
//    
//}
//
//void get_height(){
//    for(int i=1,j=0 ; i<n ; i++){
//        if(_rank[i]==1)continue;
//        for(; input_list[i+j-1] == input_list[_sa[_rank[i] -1]+j-1] ;) j++;
//        height[_rank[i]] = j;
//        if(j>0) j--;
//    }
//}
//
//void validate(){
//    ans = 0;
//    for(int len=1 ; len<=n ; len++){
//        int i=1;
//        while(1){
//            if(i>n) break;
//            while(i<=n && height[i] < len) i++;
//            int count = 1;
//            while(i<=n && height[i] >= len){ count++ ; i++; }
//            if(count >= k && len > ans) ans = len; //
//        }
//    }
//}
//
//int main(){
//    //freopen( "C:\\Users\\fsc\\Desktop\\input.txt","r", stdin );
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d%d",&n,&k)!=EOF){
//        for(int i=0;i<n;i++) scanf("%d",&input_list[i]);
//        get_sa();
//        
//        get_height();
//        
//        //sort(height , height+n+1);
//        
//        validate();
//        
//        // test  printf
////        		for(int i=1 ; i<=n ; i++) printf("%d " , _rank[i]);
////        		printf("\n");
////        		for(int i=1 ; i<=n ; i++) printf("%d " , _sa[i]);
////        		printf("\n");
////        		for(int i=1 ; i<=n ; i++) printf("%d " , height[i]);
////        		printf("\n");
//        
//        //printf
//        printf("%d\n" , ans);
//        
//        
//        
//    }
//    
//    
//    
//    return 0;
//}
//
