///*
// * POJ_2524.cpp
// *
// *  Created on: 2015年7月6日
// *      Author: fsc
// */
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//int Tree[50001];
//int r[50001];
//int findRoot(int a){
//    int root = a;
//    while(Tree[root] != -1){
//        root = Tree[root];
//    }
//    return root;
//}
//void union_nodes(int a , int b){
//    //    if(r[a] < r[b]){
//    //        int root = findRoot(b);
//    //        Tree[a] = root;
//    //        r[root] += r[a];
//    //    }
//    //    else{
//    //        int root = findRoot(a);
//    //        Tree[b] = root;
//    //        r[root] += r[a];
//    //    }
//    int roota = findRoot(a);
//    int rootb = findRoot(b);
//    if(roota == rootb) return;
//    //    if(r[roota] > r[rootb]){
//    //        Tree[b] = roota;
//    //        r[roota] += r[b];
//    //    }
//    //    else{
//    //        Tree[a] = rootb;
//    //        r[rootb] += r[a];
//    //    }
//    Tree[roota] = rootb;
//}
//int main(){
//     freopen( "/Users/KeyOfSpectator/input","r", stdin );
//    int n,m;
//    int round = 1;
//    while(scanf("%d%d" , &n , &m)!=EOF){
//        if(n==0 && m==0) break;
//        for(int i=1 ; i<=n; i++){
//            Tree[i] = -1;
//            r[i] = 1;
//        }
//        for(int j=0; j<m ; j++){
//            int a,b;
//            scanf("%d%d",&a,&b);
//            union_nodes(a,b);
//        }
//        int max = 0;
//        for(int k=1; k<=n;k++){
//            if(Tree[k]==-1)
//                max ++;
//        }
//        //cout << "Case " << round << ": " << max << endl;
//        printf("Case %d: %d\n",round , max);
//        round++;
//    }
//    return 0;
//}