////
////  34_Head of a Gang (30).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/18.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Ans{
//    string name;
//    int size;
//    
//    bool operator < (const Ans A) const{
//        return name < A.name;
//    }
//};
//
//int tree[2002];
//int size[2002];
//int weight_total[2002];
//int weight_single[2002];
//int head[2002];
//int N , K;
//int col;
//map<string , int> name_indx;
//
//int getIndx(string name){
//    map<string , int>::iterator it = name_indx.find(name);
//    if(it == name_indx.end()){
//        pair<string , int> tmp_pair(name , col);
//        name_indx.insert(tmp_pair);
//        col++;
//        return col-1;
//    }
//    else{
//        return it->second;
//    }
//}
//
//string findName(int indx){
//    map<string , int>::iterator it = name_indx.begin();
//    for( ; it != name_indx.end() ; it++){
//        if(it->second == indx){
//            return it->first;
//        }
//    }
//    return NULL;
//}
//
//
//int findRoot(int x){
//    if(tree[x] == x) return x;
//    int root = findRoot(tree[x]);
//    tree[x] = root;
//    return root;
//}
//
//int main(){
//
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(scanf("%d %d" , &N , &K)!=EOF){
//        
//        for(int i=0 ; i<=2*N ; i++){
//            tree[i] = i;
//            size[i] = 1;
//            weight_total[i] = 0;
//            weight_single[i] = 0;
//            head[i] = -1;
//        }
//        col = 0;
//        
//        for(int i=0 ; i<N ; i++){
//            string a , b ;
//            int w;
//            cin >> a >> b >> w;
//            int indx1 = getIndx(a);
//            int indx2 = getIndx(b);
//            
//            weight_single[indx1] += w;
//            weight_single[indx2] += w;
//            
//            int rootA = findRoot(indx1);
//            int rootB = findRoot(indx2);
//            int root;
//            
//            if(rootA != rootB){
//                
//                //!!!
//                size[rootA] += size[rootB];
//                tree[rootB] = rootA;
//                root = rootA;
//                weight_total[rootA] += weight_total[rootB] + w;
//            }
//            else{
//                root = rootA;
//                weight_total[root] += w;
//            }
//            
//            if(weight_single[head[root]] < weight_single[head[rootB]]){
//                head[root] = rootB;
//            }
//            
//            if(head[root] == -1 || weight_single[head[root]] < weight_single[indx1]){
//                head[root] = indx1;
//            }
//            if(weight_single[head[root]] < weight_single[indx2]){
//                head[root] = indx2;
//            }
//            
//        }
//        
//        //output
//        int count = 0;
//        vector<Ans> ans_root;
//        for(int i=0 ; i<col ; i++){
//            if(tree[i] == i && size[i]>2 && weight_total[i]>K){
//                count++;
//                
//                Ans ans;
//                ans.name = findName(head[i]);
//                ans.size = size[i];
//                ans_root.push_back(ans);
//            }
//        }
//        
//        sort(ans_root.begin() , ans_root.end() );
//        
//        cout << count << endl;
//        for(int i=0 ; i<ans_root.size() ; i++){
//            cout << ans_root[i].name << " " << ans_root[i].size << endl;
//        }
//    
//    }
//    
//    return 0;
//}