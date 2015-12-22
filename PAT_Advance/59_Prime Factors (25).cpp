////
////  59_Prime Factors (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/12/3.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <math.h>
//using namespace std;
//
//
//vector<long> p;
//vector<bool> mark;
//long col;
//vector<long> ans_p;
//vector<long> ans_k;
//
//bool isPrime(long x){
//    for(long i=2 ; i<sqrt(x) ; i++){
//        if(x%i==0)
//            return false;
//    }
//    return true;
//}
//
//void findPrimes(long input){
//    long sq = sqrt(input);
//    mark = vector<bool>(sq+1 , true);
//    for(long i=2 ; i<sq+1 ; i++){
//        if(!mark[i]) continue;
//        if(isPrime(i)){
//            for(int j=i ; j<sq+1 ; j+=i){
//                mark[j] = false;
//            }
//            p.push_back(i);
//        }
//        else
//            mark[i] = false;
//    }
//
//}
//
//void check(long input){
//    long ret = input;
//    for(int i=0 ; i<p.size() ; i++){
//        int cot = 0;
//        while(ret%p[i] == 0){
//            cot++;
//            ret /= p[i];
//        }
//        if(cot > 0){
//            ans_p.push_back(p[i]);
//            ans_k.push_back(cot);
//        }
//    }
//    if(ret != 1){
//        ans_p.push_back(ret);
//        ans_k.push_back(1);
//    }
//}
//
//long input;
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%ld" , &input);
//    
//    if(input == 1){
//        printf("1=1\n");
//        return 0;
//    }
//    
//    findPrimes(input);
//    
//    check(input);
//    
//    printf("%ld=" , input);
//    for(int i=0 ; i<ans_p.size() ; i++){
//        if(i!=0)
//            printf("*");
//        if(ans_k[i] == 1)
//            printf("%ld",ans_p[i]);
//        else
//            printf("%ld^%ld" , ans_p[i] , ans_k[i]);
//    }
//    printf("\n");
//
//    return 0;
//}