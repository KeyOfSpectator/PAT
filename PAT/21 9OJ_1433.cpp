////
////  21 9OJ_1433.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/24.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//struct Node{
//    float j;
//    float f;
//    float rate;
//    bool operator < (const Node &A) const{
//        return rate > A.rate;
//    }
//} buf[1001];
//
//int main(){
//    int n;
//    float m;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%f %d" , &m , &n )!=EOF){
//        if(m==-1 && n==-1) break;
//        for(int i=0 ; i<n ; i++){
//            int tmp_f , tmp_j;
//            scanf("%d %d" , &tmp_j , &tmp_f);
//            buf[i].j = tmp_j;
//            buf[i].f = tmp_f;
//            buf[i].rate = buf[i].j/buf[i].f;
//        
//        }
//        sort(buf , buf+n);
//        float ans = 0.0; int index = 0;
//        while(m>0.0 && index < n){
//            if(buf[index].f > m){
//                ans += m/buf[index].f*buf[index].j;
//                break;
//                
//            }
//            else{
//                m -= buf[index].f;
//                ans += buf[index].j;
//                index ++;
//            }
//        }
//        printf("%0.3f\n" , ans);
//    
//    
//    }
//
//
//
//    return 0;
//}