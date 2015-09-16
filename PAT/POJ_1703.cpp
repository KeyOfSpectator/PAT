////
////  POJ_1703.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/7/6.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//int pa[100001];
//int oppo[100001];
//int ran[100001];
//
//void init(int n){
//    for(int i=0;i<=n;i++){
//        pa[i]=i;
//        oppo[i]=i;
//        ran[i] = 0;
//    }
//}
//
//int findRoot(int a){
//    int root = a;
//    while(pa[root]!=root){
//        root = pa[root];
//    }
//    return root;
//}
//
//int combine(int a , int b){
//    int rootA = findRoot(a);
//    int rootB = findRoot(b);
//    
//    if(ran[rootA] > ran[rootB]){
//        pa[rootB] = rootA;
//        return rootA;
//    }
//    else{
//        pa[rootA] = rootB;
//        if(ran[rootA]==ran[rootB]){
//            ran[rootB]++;
//        }
//        return rootB;
//    }
//
//}
//
//
//int main(){
//    
//    //freopen( "/Users/KeyOfSpectator/input","r", stdin );
//    
//    int round;
//    scanf("%d",&round);
//    int n,m;
//    while(round--){
//            scanf("%d%d\n",&n,&m);
//        //getchar();
//            init(n);
//            while(m--){
//                int a,b;
//                char type;
//                scanf("%c%d%d\n",&type,&a,&b);
//                //getchar();
//                //scanf("%c",&type);
//                //scanf("%d%d",&a,&b);
//                
//                if(type == 'D'){
//                    int rootA = findRoot(a);
//                    int rootB = findRoot(b);
//                    
//                    if(oppo[a]!=a && oppo[a]!=rootB){
//                        int combineRoot = combine(oppo[a],rootB);
//                        oppo[a] = combineRoot;
//                    }
//                    if(oppo[b]!=b && oppo[b]!=rootA){
//                        int combineRoot = combine(oppo[b],rootA);
//                        oppo[b] = combineRoot;
//                    }
//                    
//                    
//                    if(oppo[a]==a)oppo[a]=rootB;
//                    if(oppo[b]==b)oppo[b]=rootA;
//                    
//                    
//                }
//                else{
//                    int rootA = findRoot(a);
//                    int rootB = findRoot(b);
//                    if(rootA == rootB){
//                        cout<<"In the same gang."<<endl;
//                    }
//                    else if((rootA!=rootB && oppo[a]==rootB) || (n==2)){
//                        cout<< "In different gangs." <<endl;
//                    }
//                    else{
//                        cout << "Not sure yet." << endl;
//                    }
//                }
//            
//        }
//    }
//    
//    
//    return 0;
//}