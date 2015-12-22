////
////  CountSort.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/7/17.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//const int MAXN=100000;
//const int k=1000;//range
//int a[MAXN],c[MAXN],rank[MAXN];
//int main(){
//    int n;
//    std::cin>>n;
//    for(int i=0;i<n;++i){
//        std::cin>>a[i];++c[a[i]];
//    }
//    for(int i=1;i<k;++i)
//        c[i]+=c[i-1];
//    for(int i=n-1;i>=0;--i)
//        rank[--c[a[i]]]=a[i];
//    for(int i=0;i<n;++i)
//        std::cout<<rank[i]<<std::endl;
//    return 0;
//}