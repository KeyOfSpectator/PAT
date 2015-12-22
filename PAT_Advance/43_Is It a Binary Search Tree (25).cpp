////
////  43_Is It a Binary Search Tree (25).cpp
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
//struct Node{
//    int x;
//    Node* lchild;
//    Node* rchild;
//    Node(int i):x(i),lchild(NULL),rchild(NULL){}
//};
//
//int N;
//int input[1001];
//
//bool checkOrigin(int start , int end){
//    
//    if(start >= end || end >= N) return true;
//    int root = input[start];
//    int right = 99999;
//    for(int i=start+1 ; i<=end ; i++){
//        if(input[i] >= root){
//            right = i;
//            break;
//        }
//    }
//    for(int i=right ; i<=end ; i++){
//        if(input[i] < root)
//            return false;
//    }
//    
//    
//    
//    return (checkOrigin(start+1, min(right-1 , end)) && checkOrigin(right, end) );
//    
//}
//
//bool checkMirror(int start , int end){
//    if(start >= end || end >= N) return true;
//    int root = input[start];
//    int right = 99999;
//    for(int i=start+1 ; i<=end ; i++){
//        if(input[i] < root){
//            right = i;
//            break;
//        }
//    }
//    for(int i=right ; i<=end ; i++){
//        if(input[i] >= root)
//            return false;
//    }
//    
//    
//    
//    return (checkMirror(start+1, min(right-1 , end)) && checkMirror(right, end) );
//    
//}
//
//Node* buildTreeOrigin(int start , int end){
//    
//    if(start > end || end >= N) return NULL;
//    
//    Node* node = new Node(input[start]);
//
//    if(start == end){
//        return node;
//    }
//    
//    int root = input[start];
//    int right = 99999;
//    for(int i=start+1 ; i<=end ; i++){
//        if(input[i] >= root){
//            right = i;
//            break;
//        }
//    }
//    
////    if(max(right-1 , end) < N)
//        node->lchild = buildTreeOrigin(start+1, min(right-1 , end));
//    node->rchild = buildTreeOrigin(right, end);
//    return node;
//
//}
//
//Node* buildTreeMirror(int start , int end){
//    
//    if(start > end || end >= N) return NULL;
//    
//    Node* node = new Node(input[start]);
//    
//    if(start == end){
//        return node;
//    }
//    
//    int root = input[start];
//    int right = 99999;
//    for(int i=start+1 ; i<=end ; i++){
//        if(input[i] < root){
//            right = i;
//            break;
//        }
//    }
//    
////    if(max(right-1 , end) < N)
//        node->lchild = buildTreeMirror(start+1, min(right-1 , end));
//    node->rchild = buildTreeMirror(right, end);
//    return node;
//    
//}
//
//vector<int> ans;
//
//void postOrderPrint(Node* root){
//    if(root->lchild != NULL)
//        postOrderPrint(root->lchild);
//    if(root->rchild != NULL)
//        postOrderPrint(root->rchild);
//    ans.push_back(root->x);
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//
//
//    while(scanf("%d" , &N)!=EOF){
//        for(int i=0 ; i<N ; i++){
//            scanf("%d" , &input[i]);
//        }
//        
//        ans.clear();
//        bool flag = checkOrigin(0 , N-1);
//        if(flag){
//            Node* root = buildTreeOrigin(0 , N-1);
//            postOrderPrint(root);
//        }
//        else{
//            flag = checkMirror(0, N-1);
//            if(flag){
//                Node* root = buildTreeMirror(0 , N-1);
//                postOrderPrint(root);
//            }
//        }
//        
//        if(!flag){
//            printf("NO\n");
//        }
//        else{
//            printf("YES\n");
//            for(int i=0 ; i<ans.size() ; i++){
//                if(i!=0)
//                    printf(" ");
//                printf("%d" , ans[i]);
//            }
//            printf("\n");
//        }
//        
//    
//    }
//    
//    return 0;
//}