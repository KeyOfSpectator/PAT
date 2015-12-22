////
////  12_The Best Rank (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/7.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//
//// 并列排名！！！ WTF 1 2 3 3 5 not 1 2 3 3 4
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//#define MAX_NUM 2002
//
//struct Student{
//    string ID;
//    int C_score;
//    int M_score;
//    int E_score;
//    int A_score;
//    
//    int C_rank;
//    int M_rank;
//    int E_rank;
//    int A_rank;
//    
//}student[MAX_NUM];
//
//bool cmpC(Student A , Student B){
//    return A.C_score > B.C_score;
//}
//
//bool cmpM(Student A , Student B){
//    return A.M_score > B.M_score;
//}
//
//bool cmpE(Student A , Student B){
//    return A.E_score > B.E_score;
//}
//
//bool cmpA(Student A , Student B){
//    return A.A_score > B.A_score;
//}
//
//int col;
//
//Student find_student(string ID , int m){
//    for(int i=0 ; i<m ; i++){
//        if(student[i].ID == ID)
//            return student[i];
//    }
//    Student none_stu;
//    none_stu.ID = "";
//    return none_stu;
//}
//
//int main(){
//    int m , n;
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(scanf("%d %d" , &m , &n)!=EOF){
//        col = 0;
//        for(int i=0 ; i<m ; i++){
//            cin >> student[i].ID >> student[i].C_score >> student[i].M_score >> student[i].E_score;
//            student[i].A_score = (student[i].C_score + student[i].M_score + student[i].E_score)/3;
//            
//        }
//        
//        int indx = 1;
//        sort(student , student+m , cmpC);
//        for(int i=0 ; i<m ; i++){
//            if(i!=0 && student[i].C_score == student[i-1].C_score)
//                student[i].C_rank = student[i-1].C_rank;
//            else
//                student[i].C_rank = i+1;
//        }
//        
//        indx = 1;
//        sort(student , student+m , cmpM);
//        for(int i=0 ; i<m ; i++){
//            if(i!=0 && student[i].M_score == student[i-1].M_score)
//                student[i].M_rank = student[i-1].M_rank;
//            else
//                student[i].M_rank = i+1;
//        }
//        
//        indx = 1;
//        sort(student , student+m , cmpE);
//        for(int i=0 ; i<m ; i++){
//            if(i!=0 && student[i].E_score == student[i-1].E_score)
//                student[i].E_rank = student[i-1].E_rank;
//            else
//                student[i].E_rank = i+1;
//        }
//        
//        indx = 1;
//        sort(student , student+m , cmpA);
//        for(int i=0 ; i<m ; i++){
//            if(i!=0 && student[i].A_score == student[i-1].A_score)
//                student[i].A_rank = student[i-1].A_rank;
//            else
//                student[i].A_rank = i+1;
//        }
//        
//        for(int i=0 ; i<n ; i++){
//            string ID;
//            cin >> ID;
//            Student stu = find_student(ID , m);
//            if(stu.ID == "")
//                cout << "N/A" << endl;
//            else{
//                if(stu.A_rank <= stu.C_rank && stu.A_rank <= stu.M_rank && stu.A_rank <= stu.E_rank){
//                    cout << stu.A_rank << " A" << endl;
//                }
//                else if(stu.C_rank <= stu.A_rank && stu.C_rank <= stu.M_rank && stu.C_rank <= stu.E_rank){
//                    cout << stu.C_rank << " C" << endl;
//                }
//                else if(stu.M_rank <= stu.A_rank && stu.M_rank <= stu.C_rank && stu.M_rank <= stu.E_rank){
//                    cout << stu.M_rank << " M" << endl;
//                }
//                else{ //if(stu.E_rank <= stu.A_rank && stu.E_rank <= stu.M_rank && stu.E_rank <= stu.C_rank){
//                    cout << stu.E_rank << " E" << endl;
//                }
//            }
//                
//        
//        }
//        
//    }
//    return 0;
//}