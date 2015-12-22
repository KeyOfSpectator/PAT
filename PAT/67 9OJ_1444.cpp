////
////  67 9OJ_1444.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/10.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//
//int tree[10000001];
//int sum[10000001];
//
//int findRoot(int x){
//    if(tree[x] == -1) return x;
//    int tmp = findRoot(tree[x]);
//    tree[x] = tmp;
//    return tmp;
//
//}
//
//int main(){
//    
//    int n;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//
//    while(scanf("%d" , &n)!=EOF){
//        int a , b;
//        //memset(tree , -1 , sizeof(tree));
//        //memset(sum , 1 , sizeof(sum));
//        for(int i=0 ; i<10000001 ; i++){
//            tree[i] = -1;
//            sum[i] = 1;
//        }
//        while(n--){
//            scanf("%d %d" , &a , &b);
//            a = findRoot(a);
//            b = findRoot(b);
//            if(a!=b){
//                tree[a] = b;
//                sum[b] += sum[a];
//            }
//        }
//        int ans = 1;
//        for(int i=1 ; i<=10000000 ; i++){
//            if(tree[i] == -1 && sum[i]>ans) ans = sum[i];
//        }
//        printf("%d\n" , ans);
//    
//    }
//    
//    return 0;
//}