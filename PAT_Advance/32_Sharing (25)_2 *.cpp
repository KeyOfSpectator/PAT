////
////  32_Sharing (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/17.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//
//
//int add_next[100001];
//
//int add1[100001];
//int add2[100001];
//int size1 , size2;
//int s1_a , s2_a , n;
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(scanf("%d %d %d" , &s1_a , &s2_a , &n)!=EOF){
//        
//        memset(add_next , 0 , sizeof(add_next));
//        
//        for(int i=0 ; i<n ; i++){
//            int address , next_a;
//            char c;
//            scanf("%d %c %d" , &address , &c , &next_a);
//            add_next[address] = next_a;
//        }
//        
//        size1 = 0; size2 = 0;
//        while(s1_a != -1){
//            add1[size1++] = s1_a;
//            s1_a = add_next[s1_a];
//        }
//        while(s2_a != -1){
//            add2[size2++] = s2_a;
//            s2_a = add_next[s2_a];
//        }
//        
//        add1[size1] = -1;
//        
//        int ind1 = size1-1;
//        int ind2 = size2-1;
////        int share = -1;
//        int share;
//        while(ind1>=0 && ind2>=0){
//            if(add1[ind1] != add2[ind2]){
//                share = add1[ind1+1];
//                break;
//            }
//            ind1--;
//            ind2--;
//        }
//        
//        // substr
//        //  !!! -1
//        if(ind1 == -1){
//            share = add1[0];
//        }
//        if(ind2 == -1){
//            share = add2[0];
//        }
//        
//        // !!! <=
//        if(share <= 0)
//            printf("-1\n");
//        else
//            printf("%05d\n" , share);
//    
//    }
//
//    return 0;
//}