////
////  23 9OJ_1435.cpp
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
//double buf[101];
//
//int main(){
//    int c , n , v ;
//    double  w;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &c)!=EOF){
//        for(int i=0 ; i<c ; i++){
//            scanf("%d %d %lf" , &n , &v , &w);
//            for(int j = 0 ; j<n ; j++){
//                scanf("%lf" , &buf[j]);
//            }
//            sort(buf , buf+n);
//            int ans_v = 0 ;
//            double ans_w = 0.0;
//            for(int k=0 ; k<n ; k++){
//                if(buf[0]>w){
//                    ans_v = 0;
//                    ans_w = 0.0;
//                    break;
//                }
//                double new_w = (buf[k]*(double)v + (double)ans_v * ans_w)/(double)(v+ans_v);
//                if(new_w <= w){
//                    ans_v = v + ans_v;
//                    ans_w = new_w;
//                }
//            }
//            printf("%d %.2lf\n" , ans_v , ans_w/100);
//        
//        }
//    
//    }
//
//    return 0;
//}