////
////  29_Median (25).cpp
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
//vector<long int> S1;
//vector<long int> S2;
//int n1 , n2;
//
//int main(){
//
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%d" , &n1);
//    for(int i=0 ; i<n1 ; i++){
//        long int tmp;
//        scanf("%ld" , &tmp);
//        S1.push_back(tmp);
//    }
//    scanf("%d" , &n2);
//    for(int i=0 ; i<n2 ; i++){
//        long int tmp;
//        scanf("%ld" , &tmp);
//        S2.push_back(tmp);
//    }
//    
//    if(n1 == 1 && n2 ==1){
//        printf("%ld\n" , S1[0]<S2[0]?S1[0]:S2[0]);
//        return 0;
//    }
//    
//    int indx1 , indx2 , l;
//    if(S1[(n1-1)/2] < S2[(n2-1)/2]){
//        indx1 = ((n1-1)/2)+1;
//        indx2 = 0;
//        l = n2 - (n2/2);
//    }
//    else{
//        indx1 = 0;
//        indx2 = ((n2-1)/2)+1;
//        l = n1 - (n1/2);
//    }
//    
//    long int ans = 0;
//    for(int i=0 ; i<l ; i++){
//        if(indx1 < n1 && S1[indx1] <= S2[indx2]){
//            ans = S1[indx1];
//            indx1++;
//            
//        }
//        else{
//            ans = S2[indx2];
//            indx2++;
//        }
//    }
//    
//    printf("%ld\n" , ans);
//    
//    return 0;
//}