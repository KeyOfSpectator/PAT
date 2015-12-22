////
////  29_Median (25)_2.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/17.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//vector<long> S1;
//vector<long> S2;
//int l1 , l2;
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%d" , &l1);
//    for(int i=0 ; i<l1 ; i++){
//        long tmp;
//        scanf("%ld" , &tmp);
//        S1.push_back(tmp);
//    }
//    scanf("%d" , &l2);
//    for(int i=0 ; i<l2 ; i++){
//        long tmp;
//        scanf("%ld" , &tmp);
//        S2.push_back(tmp);
//    }
//    
//    if(l1 == 1 && l2 == 1){
//        printf("%ld\n" , S1[0]<S2[0]?S1[0]:S2[0]);
//        return 0;
//    }
//    
//    int mid = (l1+l2-1)/2;
//    int indx1 = 0;
//    int indx2 = 0;
//    
//    long ans = 0;
//    for(int i=0 ; i<=mid ; i++){
//        if(indx1 < l1 && S1[indx1] < S2[indx2]){
//            ans = S1[indx1];
//            indx1++;
//        }
//        else{
//            ans = S2[indx2];
//            indx2++;
//        }
//            
//    }
//    
//    printf("%ld\n" , ans);
//
//    return 0;
//}