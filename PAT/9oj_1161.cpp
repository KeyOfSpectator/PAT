////
////  9oj_1161.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/22.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//char original[6][6];
//char ans[3002][3002];
//char tmp[3002][3002];
//int n , q;
//
//int power(int q){
//    int result = 1;
//    while(q -- ){
//        result *= n;
//    }
//    return result;
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &n)!=EOF){
//        
//        if(n==0) break;
//        
//        for(int i=0 ; i<3001 ; i++)
//            for(int j=0 ; j<3001 ; j++){
//                ans[i][j] = '\0';
//                tmp[i][j] = '\0';
//            }
//                
//        
//        while(getchar()!='\n') continue;
//        
//        for(int i=0 ; i<n ; i++){
//            gets(original[i]);
//            for(int j=0 ; j<n ; j++){
//                tmp[i][j] = original[i][j];
//            }
//        }
//        scanf("%d\n" , &q);
//        
//        if(q==1){
//            for(int i=0 ; i<n ; i++){
//                for(int j=0 ; j<n ; j++){
//                    ans[i][j] = original[i][j];
//                }
//            }
//        }
//        else
//        for(int i=2 ; i<= q ; i++){
//            int col =0 , line = 0, lia = power(i-1);
//            for(int j=0 ; j<n ; j++){
//                line = j*lia;
//                for(int k=0 ; k<n ; k++){
//                    col = k*lia;
//                    if(original[j][k] != ' ')
//                        for(int u = 0 ; u< lia; u++){
//                            for(int v = 0 ; v< lia; v++){
//                                ans[u + line][v + col] = tmp[u][v];
//                            }
//                        }
//                    else{
//                        for(int u = 0 ; u< lia; u++){
//                            for(int v = 0 ; v< lia; v++){
//                                ans[u + line][v + col] = ' ';
//                            }
//                        }
//                    }
//                }
//            }
//            for(int j=0 ; j<(lia*n) ; j++){
//                for(int k=0 ; k<(lia*n) ; k++){
//                    tmp[j][k] = ans[j][k];
//                }
//            
//            }
//        }
//        
//        int lia = power(q);
//        for(int i=0 ; i<lia ; i++){
//            //cout << ans[i];
//            printf("%s\n" , ans[i]);
//        }
//        
//        
//        //printf("\n");
//        
//        
//    }
//    
//    return 0;
//}