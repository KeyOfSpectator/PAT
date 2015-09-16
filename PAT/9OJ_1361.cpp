////
////  9OJ_1361.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/23.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//using namespace std;
//
//
//char buf[50001];
//int sentence_length;
//char word[31];
//int word_length;
//int flag;
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(gets(buf)){
//        sentence_length = strlen(buf);
//        flag = sentence_length;
//        for(int i=sentence_length ; i>=0 ; i--){
//            if(i==0 || buf[i-1] == ' '){
//                word_length = flag - i;
//                for(int j=0 ; j<word_length ; j++)
//                    printf("%c" , buf[j+i]);
//                    //word[j] = buf[j+i];
//                //printf("%s" , word);
//                //for(int k=0 ; k<30 ; k++) word[k] = '\0';
//                if(i!=0){
//                    printf(" ");
//                    flag = i-1;
//                }
//                else
//                    printf("\n");
//                
//            }
//        
//        }
//    
//    }
//
//    return 0;
//}