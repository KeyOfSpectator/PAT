////
////  28 9OJ1108.cpp
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
//stack<int> s;
//char str[5];
//
//void getNum(int &num){
//    int index = 2;
//    num = 0;
//    while(str[index]!=0){
//        num*=10;
//        num+= str[index]-'0';
//        index++;
//    }
//}
//
//int main(){
//    
//    int n;
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//
//    while(scanf("%d\n" , &n)!=EOF){
//        
//        if(n==0)break;
//        
//        while(s.empty()==false) s.pop();
//        
//        for(int i=0 ; i<n ; i++){
//            
//            scanf("%s " , str);
//            //gets(str);
//            
//            if(str[0] == 'P'){
//                int tmp;
//                //getNum(tmp);
//                scanf("%d\n" , &tmp);
//                s.push(tmp);
//            }
//            else if(str[0] == 'O'){
//                //getchar();
//                if(s.empty()==false)
//                    s.pop();
//            }
//            else if(str[0] == 'A'){
//                //getchar();
//                if(s.empty())
//                    printf("E\n");
//                else
//                    printf("%d\n" , s.top());
//            }
//                
//                
//        
//        }
//        printf("\n");
//    
//    }
//    
//
//    return 0;
//}