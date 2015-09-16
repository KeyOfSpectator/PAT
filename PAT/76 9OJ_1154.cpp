////
////  76 9OJ_1154.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/11.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//int node[101][101];
//
//int main(){
//    int n , m;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d %d" , &n , &m)!=EOF){
//        if(n==0 && m==0) break;
//        for(int i=1 ; i<=n ; i++){
//            for(int j=1 ; j<=n ; j++){
//                node[i][j] = -1;
//            }
//            node[i][i] = 0;
//        }
//        while(m--){
//            int a , b , c;
//            scanf("%d %d %d" , &a , &b , &c);
//            node[a][b] = node[b][a] = c;
//        }
//        for(int k=1 ; k<=n ; k++){
//            
//            for(int i=1 ; i<=n ; i++){
//                for(int j=1 ; j<=n ; j++){
//                    
//                    if(node[i][k] == -1 || node[k][j] == -1) continue;
//                    if(node[i][j] == -1 || node[i][k]+node[k][j] < node[i][j])
//                        node[i][j] = node[i][k]+node[k][j];
//                    
//                }
//            }
//        
//        }
//        printf("%d\n" , node[1][n]);
//    }
//
//    return 0;
//}