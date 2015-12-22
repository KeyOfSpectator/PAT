////
////  suffix_Array1.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/7/17.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//
////数据值上限
//#define MAX_DATA_RANGE 1000
////数据个数上限
//#define MAX_LENGTH 100
//
//
//int sum[MAX_DATA_RANGE]; //计数排序辅助数组
//int tsa[MAX_LENGTH];
//int trank[MAX_DATA_RANGE];
//int _rank[MAX_DATA_RANGE]; //你排第几 值，是个排名
//int _sa[MAX_LENGTH];   //第几是谁 值，是个编号
//int _height[MAX_LENGTH];  //height［i］记录 排名（rank［i］）的后缀 与前一个排名（rank［i－1］）的后缀的最长公共子串的长度
//
//char s[MAX_LENGTH];
////string s;
//
//void sorting(int j){
//    //对第二关键字计数排序，tsa代替sa为排名为i的后缀是tsa[i]
//    //注意 tsa此时为第二关键字排序，而i不变 ；相当于第i位对应的第二关键字排序
//    
//    memset(sum , 0 , sizeof(sum));
//    for(int i=1 ; i<=strlen(s) ; i++) sum[_rank[i+j]]++;
//    for(int i=1 ; i<=MAX_LENGTH ; i++) sum[i] += sum[i-1];
//    for(int i = strlen(s) ; i>0 ; i--) tsa[ sum[_rank[i+j]]-- ]=i;
//
//    //对第一关键字计数排序,构造互逆关系
//    memset(sum , 0 , sizeof(sum));
//    for(int i=1 ; i<=strlen(s) ; i++) sum[_rank[i]]++;
//    for(int i=1 ; i<=MAX_LENGTH ; i++) sum[i]+=sum[i-1];
//    for(int i=strlen(s) ; i>0 ; i--)
//        // tsa为第二关键字排好序后 排第几的 编号
//        // _rank 这里是 上一次第一关键字排好序后 是第几 的排名
//        // sum 这里存的是对 _rank也就是上一次第一关键字的排名 的累积排序
//        // 这一步是 把第一关键字通过sum累积排序好 通过对第二关键字的排序编号tsa _rank辅助找到此编号第一关键字的排名 从后往前从大到小进行排序
//        _sa[ sum[ _rank[ tsa[i] ] ]-- ] = tsa[i]; //!!!
//    
//}
//
//void get_sa(){
//    int p;
//    
//    //计数排序 第一次
//    for(int i=0 ; i<strlen(s) ; i++)  trank[i+1] = s[i];
//    for(int i=1 ; i<=strlen(s) ; i++) sum[trank[i]]++;
//    for(int i=1 ; i<MAX_DATA_RANGE ; i++) sum[i] += sum[i-1];
//    for(int i=strlen(s) ; i>0 ; i--)
//        _sa[ sum[ trank[i] ] --] = i;
//    //通过sa构造rank
//    _rank[ _sa[1] ] = 1;
//    for(int i=2,p=1 ; i<=strlen(s) ; i++){
//        if(trank[ _sa[i] ] != trank[ _sa[i-1] ] )p++;
//        _rank[ _sa[i] ] = p;
//    }
//    //第一次构造完成
//    
//    for(int j=1 ; j<=strlen(s) ; j*=2){
//        //计数排序 关键字 2 和 1
//        sorting(j);
//        //通过sa构建rank
//        trank[ _sa[1] ] = 1; p=1; //用trank代替rank
//        for(int i=2 ; i<=strlen(s) ; i++){
//            if( (_rank[ _sa[i] ]!= _rank[ _sa[i-1] ]) || (_rank[ _sa[i]+j ] != _rank[ _sa[i-1]+j ]) )
//                p++;
//            trank[ _sa[i] ]=p;
//        }
//        for(int i=1 ; i<=strlen(s) ; i++) _rank[i] = trank[i];
//    }
//}
//
//void get_height(){
//    for(int i=1,j=0 ; i<strlen(s) ; i++){ //从s头开始遍历
//        if(_rank[i]==1)continue;          //由于排名第一
//        for(;s[i+j-1] == s[_sa[_rank[i]-1]+j-1];)j++; //比较以i位开头的后缀串 与 比以i位开头后缀串排名前一名的后缀串 的最大公共子串
//        _height[_rank[i]] = j;
//        if(j>0)j--;
//        //他的意思是 i从s的头开始遍历，所以遍历的后缀串都是从长到短
//        //下一次遍历，遍历的后缀串比前一次短1
//        //所以下一次遍历的后缀串 (和他前一排名比较得到的)最长公共子串也比 前一次比较得到的最长公共子串 至少小1 ！！！
//    }
//}
//
//int main() {
//    scanf("%s" , &s);
//    cout << "String : "<<s<<endl;
//    get_sa();
//    
//    cout << "sa      :";
//    for(int i=0;i<=strlen(s);i++)
//        cout<<" "<<_sa[i];
//    cout << endl;
//    
//    cout <<"rank    :";
//    for(int j=0;j<=strlen(s);j++)
//        cout<<" "<<_rank[j];
//    cout<<endl;
//    
//}