////
////  25 9OJ1437.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/24.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <algorithm>
//#include <string.h>
//using namespace std;
//
//struct GasNode{
//    double price;
//    int start;
//    int end;
//    bool operator < (const GasNode &A) const{
//        return price < A.price;
//    };
//}buf[501];
//
//int list[30001];
//
//int main(){
//    int Cmax , D , Davg , N;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d %d %d %d" , &Cmax , &D , &Davg , &N)!=EOF){
//        int max_distance = Cmax * Davg;
//        for(int i=0 ;  i<N ; i++){
//            scanf("%lf %d" , &buf[i].price , &buf[i].start);
//            buf[i].end = buf[i].start+max_distance;
//        }
//        sort(buf , buf+N);
//        memset(list , 0 , D*sizeof(int));
//        int step = 0;
//        double sum_price = 0.0;
//        for(int i=0 ; i<N ; i++){
//            int gas_step = 0;
//            //double pricePerDistance = buf[i].price/(double)Davg;
//            for(int j=buf[i].start ; j<buf[i].end ; j++){
//                if(list[j]==0 && j<D){
//                    list[j]=buf[i].end;
//                    step ++;
//                    gas_step ++;
//                    //sum_price += pricePerDistance;
//                }
//                else if(j>=D){
//                    break;
//                }
//                else{
//                    if(list[j]>buf[i].end)
//                        ;// do nothing
//                    else{
//                        j=list[j]-1;
//                        }
//                }
//            }
//            sum_price += ((double)gas_step/(double)Davg*buf[i].price);
//            
//        }
//        if(step >= D){
//            printf("%.2lf\n" , sum_price);
//        }
//        else{
//            for(int i=0 ; i<D ; i++){
//                if(list[i]==0){
//                    printf("The maximum travel distance = %.2f\n" , (float)i);
//                    break;
//                }
//            }
//        }
//        
//    }
//
//    return 0;
//}