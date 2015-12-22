////
////  36_Boys vs Girls (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/18.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <algorithm>
//#include <string>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct Stu{
//    string name;
//    char gender;
//    string ID;
//    int score;
//};
//
//bool cmp(Stu A , Stu B){
//    return A.score<B.score;
//}
//
//vector<Stu> input_F;
//vector<Stu> input_M;
//int N;
//
//int main(){
//
//    while(scanf("%d" , &N)!=EOF){
//        for(int i=0 ; i<N ; i++){
//            Stu stu;
//            cin >> stu.name >> stu.gender >> stu.ID >> stu.score;
//            if(stu.gender == 'F')
//                input_F.push_back(stu);
//            else
//                input_M.push_back(stu);
//        }
//        sort(input_F.begin() , input_F.end() , cmp);
//        sort(input_M.begin() , input_M.end() , cmp);
//        
//        bool flag = true;
//        
//        if(input_F.size() == 0){
//            flag = false;
//            printf("Absent\n");
//        }
//        else{
//            printf("%s %s\n" , input_F[input_F.size()-1].name.c_str() , input_F[input_F.size()-1].ID.c_str());
//        }
//        
//        if(input_M.size() == 0){
//            flag = false;
//            printf("Absent\n");
//        }
//        else{
//            printf("%s %s\n" , input_M[0].name.c_str() , input_M[0].ID.c_str());
//        }
//        
//        if(!flag)
//            printf("NA\n");
//        else{
//            printf("%d\n" , input_F[input_F.size()-1].score - input_M[0].score);
//        }
//        
//    }
//    
//    return 0;
//}