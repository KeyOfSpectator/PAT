////
////  29 9OJ_1101.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/27.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <stack>
//using namespace std;
//
//stack<double> num_s;
//stack<int> op_s;
//char str[1000];
//
//void getNum(int &num , int &index){
//    num = 0;
//    while(str[index]>='0' && str[index]<='9'){
//        num*=10;
//        num+=str[index]-'0';
//        index ++;
//    }
//    //index++;
//}
//
//void getOP(int &OP_num , int &index){
//    if(str[index] == '+'){
//        OP_num = 1;
//    }
//    else if(str[index] == '-'){
//        OP_num = 2;
//    }
//    else if(str[index] == '*'){
//        OP_num = 3;
//    }
//    else{
//        OP_num = 4;
//    }
//    index ++;
//}
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%s" , str)!=EOF){
//        while(op_s.empty()==false)op_s.pop();
//        while(num_s.empty()==false) num_s.pop();
//        int index = 0;
//        int num;
//        getNum(num , index);
//        num_s.push((double)num);
//        while(str[index]!=0){
//            int op;
//            getOP(op , index);
//            getNum(num , index);
//        
//            if(op == 3 || op == 4){
//                double a = num_s.top();
//                num_s.pop();
//                //op = op_s.top();
//                //op_s.pop();
//                double num_tmp;
//                if(op == 3)
//                    num_tmp = a*num;
//                else
//                    num_tmp = a/num;
//                num_s.push(num_tmp);
//            }
//            else{
//                op_s.push(op);
//                num_s.push((double)num);
//            }
//        }
//        double ans = 0.0;
//        while(num_s.size()!=1){
//            double tmp = num_s.top();
//            num_s.pop();
//            int op = op_s.top();
//            op_s.pop();
//            if(op == 1)
//                ans += tmp;
//            else
//                ans -= tmp;
//        }
//        ans += num_s.top();
//        printf("%.0f\n" , ans );
//    }
//
//    return 0;
//}