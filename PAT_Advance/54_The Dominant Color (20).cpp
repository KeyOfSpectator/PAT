////
////  54_The Dominant Color (20).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/12/1.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <map>
//using namespace std;
//
//int M , N;
//map<int , int> m;
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%d %d" , &M , &N);
//    
//    for(int i=0 ; i<N ; i++){
//        for(int j = 0 ; j<M ; j++){
//            int input;
//            scanf("%d" , &input);
//            
//            map<int , int>::iterator it = m.find(input);
//            if(it == m.end()){
//                pair<int , int> p(input , 1);
//                m.insert(p);
//            }
//            else{
//                it->second++;
//            }
//        }
//    }
//    
//    map<int , int>::iterator it = m.begin();
//    while(it != m.end()){
//        if(it->second >= (M*N)/2){
//            printf("%d\n" , it->first);
//            break;
//        }
//        it++;
//    }
//
//    return 0;
//}