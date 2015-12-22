////
////  18 9OJ_1069.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/23.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <algorithm>
//#include <string.h>
//using namespace std;
//
//struct student{
//    char id[101];
//    char name[100];
//    char sex[5];
//    int age;
//    
////    student(char* _id , char* _name , char* _sex , int _age){
////        id = _id;
////        name = _name;
////        sex = _sex;
////        age = _age;
////    }
//} buf[1001];
//
//char query[30];
//
//bool cmp(student student1 , student student2){
//    return strcmp(student1.id  , student2.id)<0;
//}
//
//int main(){
//    
//    int n , q;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &n)!=EOF){
//        for(int i=0 ; i<n ; i++){
////            char id[101] , name[100] , sex[5] ;
////            int age;
//            scanf("%s %s %s %d" , buf[i].id ,buf[i].name , buf[i].sex , &buf[i].age);
////            strcpy(buf[i].id , id);
////            strcpy(buf[i].name , name);
////            strcpy(buf[i].sex , sex);
////            buf[i].age = age;
//        }
//        sort( buf , buf+n , cmp);
//        scanf("%d" , &q);
//        for(int j=0 ; j<q ; j++){
//            scanf("%s" , query);
//            int s = 0 , e = n-1 , mid , ans = -1;
//            while(e>=s){
//                mid = (s+e)/2;
//                int result = strcmp(buf[mid].id , query);
//                if(result == 0){
//                    ans = mid;
//                    //printf("%s %s %s %d\n" , buf[ans].id , buf[ans].name , buf[ans].sex , buf[ans].age);
//                    break;
//                }
//                else if(result > 0) e = mid-1;
//                else s = mid+1;
//            }
//            if(ans == -1)
//                printf("No Answer!\n");
//            else
//                printf("%s %s %s %d\n" , buf[ans].id , buf[ans].name , buf[ans].sex , buf[ans].age);
//            
//        }
//    }
//    
//    
//
//    return 0;
//}