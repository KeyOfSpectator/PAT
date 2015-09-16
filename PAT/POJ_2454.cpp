////
////  POJ_2454.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/23.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <algorithm>
//using namespace std;
//
//struct City{
//    int id;
//    int jcow;
////    City(int _id , int _jcow){
////        id = _id;
////        jcow = _jcow;
////    }
//}ans1[66] , ans2[66] , ans3[66];
//
//City city[200];
//
//bool cmp(City city1 , City city2){
//    if(city1.jcow > city2.jcow)
//        return true;
//    else
//        return false;
//}
//
//bool cmpID(City city1 , City city2){
//    if(city1.id > city2.id)
//        return false;
//    else
//        return true;
//}
//
//void swapCity(City &city1 , City &city2){
//    City tmp_city = city1;
//    city1 = city2;
//    city2 = tmp_city;
//}
//
//int main(){
//    int n , sumN;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &n)!=EOF){
//        sumN = 3* n;
//        int tmp_jcow;
//        for( int i=0 ; i<sumN ; i++ ){
//            scanf("%d" ,&tmp_jcow);
//            city[i].id = i+1;
//            city[i].jcow = tmp_jcow;
//        }
//        sort(city , city+sumN , cmp);
//        
//        int checkSum1 = 0 , checkSum2 = 0;
//       
//        for(int i=0 ; i<n ; i++){
//            checkSum1 += city[i].jcow;
//        }
//        for(int i=n ; i<2*n ; i++){
//            checkSum2 += city[i].jcow;
//        }
//        while(!(checkSum1 > (500*n) && checkSum2 > (500*n))){
//            int i=rand()%n;
//            int j=rand()%n;
//                checkSum1 += city[j+n].jcow;
//                checkSum1 -= city[i].jcow;
//                checkSum2 += city[i].jcow;
//                checkSum2 -= city[j+n].jcow;
//                swapCity(city[i] , city[j+n]);
//          
//        }
//        
//        
////        sort(city , city+n , cmpID);
////        sort(city+n , city+(2*n) , cmpID);
////        for(int i=0 ; i<n ; i++)
////            ans2[i] = city[i+n];
////        sort(ans2 , ans2+n , cmpID);
////        for(int i=0 ; i<n ; i++)
////            city[i+n] = ans2[i] ;
//        
//        for(int i=0 ; i<sumN ; i++){
//            printf("%d\n" , city[i].id);
//        }
//    
//    }
//
//
//    return 0 ;
//}