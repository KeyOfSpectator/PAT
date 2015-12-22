////
////  28_List Sorting (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/17.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//
//// 不能用iostream
//
//#include <stdio.h>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//struct Stu{
//    int ID;
//    char name[10];
//    int score;
//};
//
//bool cmp1(Stu A , Stu B){
//    return A.ID < B.ID;
//}
//
////bool cmp1(Stu A , Stu B){
////    if(A.ID[0] != B.ID[0])
////        return A.ID[0] < B.ID[0];
////    else if(A.ID[1] != B.ID[1])
////        return A.ID[1] < B.ID[1];
////    else if(A.ID[2] != B.ID[2])
////        return A.ID[2] < B.ID[2];
////    else if(A.ID[3] != B.ID[3])
////        return A.ID[3] < B.ID[3];
////    else if(A.ID[4] != B.ID[4])
////        return A.ID[4] < B.ID[4];
////    else
////        return A.ID[5] < B.ID[5];
////
////}
//
//bool cmp2(Stu A , Stu B){
//    
////    if(A.name[0] != B.name[0])
////        return A.name[0] < B.name[0];
////    else if(A.name[1] != B.name[1])
////        return A.name[1] < B.name[1];
////    else if(A.name[2] != B.name[2])
////        return A.name[2] < B.name[2];
////    else if(A.name[3] != B.name[3])
////        return A.name[3] < B.name[3];
////    else if(A.name[4] != B.name[4])
////        return A.name[4] < B.name[4];
////    else if(A.name[5] != B.name[5])
////        return A.name[5] < B.name[5];
////    else if(A.name[6] != B.name[6])
////        return A.name[6] < B.name[6];
////    else if(A.name[7] != B.name[7])
////        return A.name[7] < B.name[7];
////    else if(A.name[8] != B.name[8])
////        return A.name[8] < B.name[8];
//    
////    if(A.name != B.name)
////        return A.name < B.name;
//    
//    if(strcmp(A.name , B.name) == 0)
//        return cmp1(A , B);
//    else
//        return strcmp(A.name , B.name) < 0;
//}
//
//bool cmp3(Stu A , Stu B){
//    if(A.score != B.score)
//        return A.score < B.score;
//    else
//        return cmp1(A , B);
//}
//
//int N , C;
//vector<Stu> input;
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(scanf("%d %d" , &N , &C)!=EOF){
//        input.clear();
//        for(int i=0 ; i<N ; i++){
//            Stu stu;
////            cin >> stu.ID >> stu.name >> stu.score;
//            scanf("%d %s %d" , &stu.ID , stu.name , &stu.score);
//            input.push_back(stu);
//        }
//        if(C == 1){
//            sort(input.begin() , input.end() , cmp1);
//        }
//        else if(C == 2){
//            sort(input.begin() , input.end() , cmp2);
//        }
//        else
//            sort(input.begin() , input.end() , cmp3);
//        
//        // output
//        
//        for(int i=0 ; i<input.size() ; i++){
//            printf("%06d %s %d\n" , input[i].ID , input[i].name , input[i].score);
////            cout << input[i].name << " " << input[i].score << endl;
//        }
//    
//    }
//
//    return 0;
//}