////
////  70 9OJ_1446.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/9/10.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//
//char name[1000][4];
//int tree[1001];
//int sum[1001];
//int member[1001];
//int id;
//
//struct gang{
//    int id;
//    //char name[4];
//    int weight;
//    int boss_id;
//    int Max_weight;
////    bool operator < (const gang &A) const{
////        return strcmp(name , A.name)<0;
////    }
//    
//    bool operator < (const gang &A) const{
//        //return strcmp(name[boss_id] , name[A.boss_id])<0;
//        for(int u=0 ; u<4 ; u++){
//            if(name[boss_id][u] < name[A.boss_id][u])
//                return 1;
//            else if(name[boss_id][u] > name[A.boss_id][u])
//                return 0;
//            
//            
//        }
//        return strlen(name[boss_id]) > strlen(name[A.boss_id]);
//    }
//    
//}list[1001];
//
//int findRoot(int x){
//    if(tree[x]==-1){return x;}
//    int tmp = findRoot(tree[x]);
//    return tmp;
//}
//
//int get_id(char str[]){
//    bool flag = false;
//    for(int i=0 ; i<id ; i++){
//        if(strcmp(str , name[i])==0)
//        {
//            flag = true;
//            return i;
//        }
//    }
//    if(!flag){
//        strcpy(name[id++] , str);
//        name[id][3] = '\0';
//    }
//    return id-1;
//}
//
//int main(){
//    int n , t;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d %d" , &n , &t)!=EOF){
//        char str_a[4] , str_b[4];
//        int m;
//        id = 0;
//        for(int i=0 ; i<1001 ; i++){
//            tree[i] = -1;
//            sum[i] = 0;
//            member[i] = 1;
//            //name[i] = '';
//        }
//        while(n--){
//            scanf("%s %s %d" , str_a , str_b , &m);
//            int a , b;
//            a = get_id(str_a);
//            b = get_id(str_b);
//            
//            sum[b] += m;
//            sum[a] += m;
//            
//            a = findRoot(a);
//            b = findRoot(b);
//            if(a!=b){
//                tree[a] = b;
//                
//                member[b] += member[a];
//            }
//            
//           
//        }
//
//        int ans_size = 0;
//        for(int i=0 ; i<id ; i++){
//            if(tree[i]==-1){
//                list[ans_size].id = i;
//                list[ans_size].weight = 0;
//                list[ans_size].boss_id = i;
//                list[ans_size++].Max_weight = sum[i];
//                //strcpy(list[ans_size++].name , name[i]);
//            }
//        }
//        
//        sort(list , list+ans_size);
//        
//        for(int i=0 ; i<id ; i++){
//            int tmp = findRoot(i);
//            for(int j=0 ; j<ans_size ; j++){
//                if(tmp == list[j].id){
//                    list[j].weight += sum[i];
//                    if(sum[i]>list[j].Max_weight){
//                        list[j].boss_id = i;
//                        list[j].Max_weight = sum[i];
//                    }
//                }
//            }
//        }
//        
//        int ans_num = 0;
//        for(int i=0 ; i<ans_size ; i++){
//            if(list[i].weight/2 > t && member[list[i].id]>2){
//                ans_num++;
//            }
//        }
//        printf("%d\n" , ans_num);
//        for(int i=0 ; i<ans_size ; i++){
//            if(list[i].weight/2 > t && member[list[i].id]>2){
//                printf("%s %d\n" , name[list[i].boss_id] , member[list[i].id]);
//            }
//        }
//        
//        
//    
//    }
//
//    return 0;
//}