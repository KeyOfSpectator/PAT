////
////  20 9OJ_1173.cpp
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
//int buf[101];
//
//int main(){
//    int n , q;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//
//    while(scanf("%d" , &n)!=EOF){
//        for(int i=0 ; i<n ; i++){
//            
//            scanf("%d" , &buf[i]);
//            
//        }
//        sort(buf , buf+n);
//        scanf("%d" , &q);
//        int query;
//        for(int i=0 ; i<q ; i++){
//            scanf("%d" , &query);
//            
//            int top = n-1 , base = 0 , mid , ans = -1;
//            while(top >= base){
//                mid = (top+base)/2;
//                //result = buf[mid]<query;
//                if(buf[mid] == query) {
//                    ans = mid;
//                    break;
//                }
//                else if(buf[mid] > query){
//                    top = mid-1;
//                }
//                else{
//                    base = mid+1;
//                }
//            
//            
//            }
//            if(ans == -1){
//                printf("NO\n");
//            }
//            else{
//                printf("YES\n");
//            }
//            
//        }
//    
//    
//    }
//
//    return 0;
//}