////
////  44 9OJ_1118.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/30.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//char num[100];
//int num_tmp[100];
//int b_num[101];
//
//void convertToTen(long &ten , char* num , int a){
//    int i;
//    for(i=0 ; num[i]!=0 ; i++){
//        if(num[i]>='0' && num[i]<='9')
//            num_tmp[i] = num[i]-'0';
//        if(num[i]>='a' && num[i]<='f')
//            num_tmp[i] = num[i]-'a'+10;
//        if(num[i]>='A' && num[i]<='F')
//            num_tmp[i] = num[i]-'A'+10;
//    }
//    int weight = 1;
//    ten = 0;
//    for(int j=i-1 ; j>=0 ; j--){
//        ten += weight * num_tmp[j];
//        weight *= a;
//    }
//}
//
//int convertTob(int tmp , int b){
//    //char num[101];
//    int i = 0;
//    do{
//        b_num[i++] = tmp%b;
//        tmp /= b;
//    }while(tmp!=0);
//    return i;
//}
//
//void print(int i){
//    if(b_num[i]<10){
//        printf("%d" , b_num[i]);
//    }
//    else{
//        printf("%c" , (b_num[i]-10+'A'));
//    }
//}
//
//int main(){
//
//    int a , b ;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d %s %d" , &a , num , &b)!=EOF){
//        long tmp = 0;
//        convertToTen(tmp , num , a);
//        int index = convertTob(tmp , b);
//        for(int i=index-1 ; i>=0 ; i--){
//            print(i);
//            //printf("%d" , b_num[i]);
//        }
//        printf("\n");
//    }
//    
//    return 0;
//}