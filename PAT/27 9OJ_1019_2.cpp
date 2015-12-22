////
////  27 9OJ_1019_2.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/26.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//#include <stack>
//using namespace std;
//
//stack<int> op;
//// + 1 - 2 * 3 / 4
//stack<double> num;
//
//char str[210];
//
//void getNum(int &num , int &i){
//    num = 0;
//    while(str[i]!=' ' && str[i]!=0){
//        //printf("%c\n" , str[i]);
//        if(str[i]<='9' && str[i]>='0'){
//            num *=10;
//            num += (str[i]-'0');
//        }
//        i++;
//    }
//    if(str[i] == ' ')
//        i++;
//}
//
//void getOP(int &opNum , int &index){
//    switch (str[index]){
//        case '+':
//            opNum = 1;
//            break;
//        case '-':
//            opNum = 2;
//            break;
//        case '*':
//            opNum = 3;
//            break;
//        case '/':
//            opNum = 4;
//            break;
//        
//    }
//    index +=2;
//}
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(gets(str)){
//        if(str[0] == '0' && str[1] == 0) break;
//        while(!op.empty()) op.pop();
//        while(!num.empty()) num.pop();
//        int index = 0;
//        int num_tmp;
//        getNum(num_tmp , index);
//        num.push((double)num_tmp);
//        while(str[index]!=0){
//            int op_tmp;
//            getOP(op_tmp , index);
//            getNum(num_tmp , index);
//            if(op_tmp == 3 || op_tmp == 4){
//                double a = num.top();
//                num.pop();
//                double num_tmp_double;
//                if(op_tmp ==3)
//                    num_tmp_double = a * (double)num_tmp;
//                else
//                    num_tmp_double = a / (double)num_tmp;
//                num.push(num_tmp_double);
//            }
//            else{
//                op.push(op_tmp);
//                num.push((double)num_tmp);
//            }
//        }
//        double result = 0.0;
//        while(num.size() != 1){
//            int op_tmp = op.top();
//            op.pop();
//            if(op_tmp == 2)
//                result -= num.top();
//            else
//                result += num.top();
//            num.pop();
//            
//            
//        }
//        result += num.top();
//        printf("%.2f\n" , result);
//        
//    
//    }
//    
//
//    return 0;
//}