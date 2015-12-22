//
////
////  66 9OJ_1012.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/10.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//
//int tree[1001];
//
//int findRoot(int x){
//    if(tree[x] == -1) return x;
//    int tmp = findRoot(tree[x]);
//    tree[x] = tmp;
//    return tmp;
//}
//
//int main(){
//    int n , m;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &n)!=EOF && n!=0){
//        scanf("%d" , &m);
//        memset(tree , -1 , sizeof(tree));
//        int a , b;
//        while(m--){
//            scanf("%d %d" , &a , &b);
//            a = findRoot(a);
//            b = findRoot(b);
//            if(a!=b){
//                tree[a] = b;
//            }
//        }
//        int ans = 0;
//        for(int i=1 ; i<=n ; i++){
//            if(tree[i]==-1) ans++;
//        }
//        printf("%d\n" , ans-1);
//    }
//    
//}