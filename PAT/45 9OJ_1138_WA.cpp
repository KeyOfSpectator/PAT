////
////  45 9OJ_1138.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/30.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//
//char num[101];
//char result[100000];
//
//bool diviedByTwo(int length){
//    bool post = false;
//    bool flag = false;
//    for(int i=0 ; i<length ; i++){
//        int tmp = num[i]-'0';
//        if(post == true)
//            num[i] = tmp/2 + '5';
//        else
//            num[i] = tmp/2 + '0';
//        post = false;
//        if(num[i]!='0') flag = true;
//        //if(tmp>0){
//            //if(!flag && tmp/2>0 && i<(length-1)) flag = true;
//            if(tmp%2==1){
//                post = true;
//            }
//        //}
//    }
//    return flag;
//}
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%s" , num)!=EOF){
//        int length = strlen(num);
//        if(length == 1 && num[0] == '0'){
//            printf("0\n");
//            continue;
//        }
//        bool check = true;
//        int i;
//        for(i = 0 ; check == true ; i++){
//            //int tmp =
//            result[i++] = (num[length - 1]-'0') % 2 + '0';
//            check = diviedByTwo(length);
//        }
//        for(int j = i ; j>=0 ; j--){
//            printf("%c" , result[j]);
//        }
//        printf("\n");
//        memset(num , 0 , sizeof(num));
//        memset(result , 0 , sizeof(result));
//        
//    }
//    return 0;
//}