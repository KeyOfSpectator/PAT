////
////  44_Shopping in Mars (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/26.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//vector<long long> input;
//long long endID[100001];
//long long sumNum[100001];
//
//long long N , K;
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//
//    while(scanf("%lld %lld" , &N , &K)!=EOF){
//    
//        for(long long i = 0 ; i<N ; i++){
//            long long tmp;
//            scanf("%lld" , &tmp);
//            input.push_back(tmp);
//        }
//        
//        long long min = 99999999;
//        vector<long long> ans_id;
//        
//        long long sum = 0;
//        for(long long i = 0 ; i<N ; i++){
//            sum += input[i];
//            if(sum >= K){
//                
//                if(sum < min){
//                    ans_id.clear();
//                    ans_id.push_back(0);
//                    min = sum;
//                }
//                else if(sum == min){
//                    ans_id.push_back(0);
//                }
//                
//                
//                sumNum[0] = sum;
//                endID[0] = i;
//                break;
//            }
//        }
//        
//        for(long long start=1 ; start<N ; start++){
//            long long sum = sumNum[start-1] - input[start-1] - input[endID[start-1]];
//            long long end = endID[start-1];
//            for( ; end < N ; end++){
//                
//                sum += input[end];
//                
//                if(sum >= K){
//                    
//                    if(sum < min){
//                        ans_id.clear();
//                        ans_id.push_back(start);
//                        min = sum;
//                    }
//                    else if(sum == min){
//                        ans_id.push_back(start);
//                    }
//                    
//                    sumNum[start] = sum;
//                    endID[start] = end;
//                    break;
//                }
//                
//                
//            }
//            
//        }
//        
//        
//        for(long long i=0 ; i<ans_id.size() ; i++){
//            printf("%lld-%lld\n" , ans_id[i]+1 , endID[ans_id[i]]+1);
//        }
//        
//    
//    }
//    
//    return 0;
//}