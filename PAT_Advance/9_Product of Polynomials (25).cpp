////
////  10_Product of Polynomials (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/6.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//
//
//int index1[11];
//int index2[11];
//double value1[11];
//double value2[11];
//double ans[2010];
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    int k1 , k2;
//    while(scanf("%d" , &k1)!=EOF){
//        for(int i=0 ;i<k1 ; i++){
//            scanf("%d %lf\n" , &index1[i] , &value1[i]);
//        }
//        scanf("%d" , &k2);
//        for(int i=0 ;i<k2 ; i++){
//            scanf("%d %lf" , &index2[i] , &value2[i]);
//        }
//        memset(ans , 0.0 , sizeof(ans));
//        
//        
//        for(int i=0 ; i<k1 ; i++){
//            for(int j=0 ; j<k2 ; j++){
//                int indx = index1[i]+index2[j];
//                double value = value1[i]*value2[j];
//                
//                ans[indx] += value;
//            }
//        }
//        
//        int ans_count = 0;
//        for(int i=0 ; i<2009 ; i++){
//            // !!!
//            if((ans[i]>0?ans[i]:-ans[i]) > 1e-6)
//                ans_count++;
//        }
//        
//        printf("%d" , ans_count);
//        for(int i=2009 ; i>=0 ; i--){
//            // !!!
//            if( (ans[i]>0?ans[i]:-ans[i]) > 1e-6)
//                printf(" %d %.1lf" , i , ans[i]);
//        }
//        printf("\n");
//    
//    }
//
//    return 0;
//}