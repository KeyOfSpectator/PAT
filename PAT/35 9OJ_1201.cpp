////
////  35 9OJ_1201.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/28.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//struct Node{
//    Node* lchild;
//    Node* rchild;
//    int num;
//    
//}tree[101];
//
//int loc = 0;
//
//Node* createNode(int n){
//    tree[loc].lchild = NULL;
//    tree[loc].rchild = NULL;
//    tree[loc].num = n;
//    return &tree[loc++];
//}
//
//void insert(Node* node , Node* root){
//    if(node==root) return;
//    if(node->num < root->num){
//        if(root->lchild == NULL)
//            root->lchild = node;
//        else
//            insert(node , root->lchild);
//    }
//    else if(node->num > root->num){
//        if(root->rchild == NULL)
//            root->rchild = node;
//        else
//            insert(node , root->rchild);
//    }
//}
//
//void postVisit(Node* node){
//
//    printf("%d " , node->num);
//    if(node->lchild != NULL)
//        postVisit(node->lchild);
//    if(node->rchild !=NULL)
//        postVisit(node->rchild);
//    
//}
//
//void midVisit(Node* node){
//    
//    if(node->lchild != NULL)
//        midVisit(node->lchild);
//    printf("%d " , node->num);
//    if(node->rchild !=NULL)
//        midVisit(node->rchild);
//    
//}
//
//void lastVisit(Node* node){
//    
//    if(node->lchild != NULL)
//        lastVisit(node->lchild);
//    if(node->rchild !=NULL)
//        lastVisit(node->rchild);
//    printf("%d " , node->num);
//    
//}
//
//int main(){
//    int n;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &n)!=EOF){
//        loc = 0;
//        int num;
//        for(int i=0 ; i<n ; i++){
//            scanf("%d" , &num);
//            Node* tmp = createNode(num);
//            insert(tmp , &tree[0]);
//        }
//        
//        postVisit(&tree[0]);
//        printf("\n");
//        midVisit(&tree[0]);
//        printf("\n");
//        lastVisit(&tree[0]);
//        printf("\n");
//    
//    }
//    return 0;
//}