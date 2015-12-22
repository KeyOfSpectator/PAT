///* WA */
//
////
////  27 9OJ_1019.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/25.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
////#include <string.h>
//#include <stack>
//using namespace std;
//
//char str[210];
//stack<double> num_s;
//// + 1 - 2 * 3 / 4
//stack<int> op_s;
//
//int  mat[][5] = {
//    1 , 0 , 0 , 0 , 0,
//    1 , 0 , 0 , 0 , 0,
//    1 , 1 , 1 , 0 , 0,
//    1 , 1 , 1 , 0 , 0,
//};
//
//void getOP( bool &isOP , int &opNum , int &index){
//    if(index == 0 && op_s.empty() == true){
//        isOP = true;
//        opNum = 0;
//        return;
//    }
//    if(str[index]==0){
//        isOP = true;
//        opNum = 0;
//        return;
//    }
//    if(str[index]>='0' && str[index]<='9'){
//        isOP = false;
//    }
//    else{
//        isOP = true;
//        if(str[index] == '+')
//            opNum = 1;
//        else if(str[index] == '-')
//            opNum = 2;
//        else if(str[index] == '*')
//            opNum = 3;
//        else if(str[index] == '/')
//            opNum = 4;
//        index += 2;
//        return;
//    }
//    // num
//    opNum = 0;
//    for( ; str[index]!=' ' && str[index]!=0 ; index++){ // str[] = 0 str[] = '0'
//        opNum *=10 ;
//        opNum += str[index] - '0';
//    }
//    if(str[index] == ' ')
//        index++;
//    return;
//    
//}
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(gets(str)){
//        bool isOP ; int opNum , index = 0;
//        if(str[0] == '0' && str[1] == 0) break;
//        while(num_s.empty()==false) num_s.pop();
//        while(op_s.empty()==false) op_s.pop();
//        while(true){
//            getOP(isOP , opNum , index);
//            if(isOP == false){
//                num_s.push((double)opNum);
//            }
//            else{
//                double tmp;
//                if(op_s.empty() == true || mat[opNum][op_s.top()] == 1){
//                    op_s.push(opNum);
//                }
//                else{
//                    while(mat[opNum][op_s.top()] == 0){
//                        int op_tmp  = op_s.top();
//                        op_s.pop();
//                        double b = num_s.top();
//                        num_s.pop();
//                        double a = num_s.top();
//                        num_s.pop();
//                        if(op_tmp == 1) tmp = a+b;
//                        else if(op_tmp == 2) tmp = a-b;
//                        else if(op_tmp == 3) tmp = a*b;
//                        else tmp = a/b;
//                        num_s.push(tmp);
//                    }
//                    op_s.push(opNum); // ? !
//                }
//            }
//            if(op_s.size() == 2 && op_s.top() == 0) break;
//            
//        }
//        printf("%.2f\n" , num_s.top());
//    
//    }
//    
//    
//    return 0;
//}