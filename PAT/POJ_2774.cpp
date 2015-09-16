////
////  POJ_2774.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/7/19.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//
//#define MAX_RANGE 200
//#define MAX_LENGTH_SINGLE 100001
//#define MAX_LENGTH 200002
//
//char input_string[MAX_LENGTH];
//
//int length1;
//int length2;
//int length;
//
//int sum[MAX_RANGE];
//int trank[MAX_LENGTH];
//int tsa[MAX_LENGTH];
//int _rank[MAX_LENGTH];
//int _sa[MAX_LENGTH];
//
//int height[MAX_LENGTH];
//
//void sorting(int j){
//    
//    // keyword2
//    memset(sum , 0 , sizeof(sum));
//    for(int i=1 ; i<=length ; i++) sum[ _rank[i+j] ]++;
//    for(int i=1 ; i<MAX_RANGE ; i++) sum[i] += sum[i-1];
//    for(int i=length ; i>0 ; i--)
//        tsa[ sum[ _rank[i+j] ]-- ] = i;
//    
//    // keyword1
//    memset(sum , 0 , sizeof(sum));
//    for(int i=1 ; i<=length ; i++) sum[ _rank[i] ]++;
//    for(int i=1 ; i<MAX_RANGE ; i++) sum[i] += sum[i-1];
//    for(int i=length ; i>0 ; i--)
//        _sa[ sum[ _rank[ tsa[i] ] ]-- ] = tsa[i];
//    
//}
//
//void get_sa(){
//    
//    //first
//    memset(sum , 0 , sizeof(sum));
//    for(int i=0 ; i<length ; i++) trank[i+1] = input_string[i];
//    for(int i=1 ; i<=length ; i++) sum[trank[i]]++;
//    for(int i=1 ; i<MAX_RANGE ; i++) sum[i] += sum[i-1];
//    for(int i=length ; i>0 ; i--)
//        _sa[ sum[ trank[i] ]-- ] = i;
//    
//    //get _rank
//    _rank[ _sa[1] ] = 1;
//    for(int i=2 ,p=1 ; i<= length ; i++){
//        if(trank[_sa[i]] != trank[_sa[i-1]] )p++;
//        _rank[ _sa[i] ] = p;
//    }
//    
//    //loop
//    for(int j=1 ; j<=length ; j*=2){
//        
//        //sorting
//        sorting(j);
//        
//        //get _rank
//        trank[ _sa[1] ] = 1;
//        for(int i=2 ,p=1 ; i<=length ; i++){
//            if((_rank[_sa[i]] != _rank[_sa[i-1]]) || (_rank[_sa[ i ]+j] != _rank[ _sa[i-1]+j   ] ) ) p++;
//            trank[ _sa[i] ] = p;
//        }
//        for(int i=1 ; i<= length ; i++) _rank[i] = trank[i];
//        
//    }
//    
//}
//
//void get_height(){
//    for(int i=1 , j=0 ; i<length ; i++){
//        if( _rank[i]==1 )continue;
//        for( ; input_string[i + j -1 ] == input_string[ _sa[ _rank[i]-1 ] +j-1 ] ; )j++;
//        height[_rank[i]] = j;
//        if(j>0) j--;
//    }
//}
//
//int Abs(int x){
//    return x>0?x:-x;
//}
//
//int main(){
//    
//    //
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    char s[MAX_LENGTH_SINGLE];
//    scanf("%s" , s);
//    length1 = strlen(s);
//    strcpy(input_string , s);
//    
//    // insert a UPcase letter to seperate
//    input_string[length1] = 'A';
//    
//    scanf("%s" , s);
//    length2 = strlen(s);
//    strcat(input_string , s);
//    length = strlen(input_string);
//    
//    get_sa();
//    
//    get_height();
//    
//    // answer
//    int ans = 0;
//    for(int i=1 ; i<length ; i++){
//        if ( height[i]>ans && Abs( _sa[i] - _sa[ i-1 ])>length1  ){
//            ans = height[i];
//        }
//    }
//    
//    printf("%d\n" , ans);
//    
//}