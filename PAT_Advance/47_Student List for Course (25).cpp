////
////  47_Student List for Course (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/12/1.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int N , M;
//vector<int> cources[2501];
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%d %d" , &N , &M);
//    int i;
//    
//    //???
//    
//    while(N--){
////        printf("%d " , i);
//        char name[4];
//        scanf("%s" , name);
//        int nameCode = (name[0]-'A')*26*26*10 + (name[1]-'A')*26*10 + (name[2]-'A')*10 + (name[3] - '0');
//        int num;
//        scanf("%d" , &num);
//        for(int j=0 ; j<num ; j++){
//            int cource_id;
//            scanf("%d" , &cource_id);
//            cources[cource_id].push_back(nameCode);
//        }
//    }
//    
//    for(int i=1 ; i<=M ; i++){
//        printf("%d %d\n" , i , cources[i].size());
//        sort(cources[i].begin() , cources[i].end());
////        for(int j=cources[i].size() ; j>=0 ; j--){
//        for(int j=0 ; j<cources[i].size() ; j++){
//            char name[4];
//            int code = cources[i][j];
//            name[0] = code/(26*26*10)+'A';
//            code %= 26*26*10;
//            name[1] = code/(26*10)+'A';
//            code %= 26*10;
//            name[2] = code/10 + 'A';
//            code %= 10;
//            name[3] = code + '0';
//            printf("%s\n" , name);
//        }
//    }
//
//    return 0;
//}