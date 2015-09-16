////
////  36 9OJ_1009.cpp
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
//    int n;
//
//}tree[11];
//
//int loc = 0;
//Node* createNode(int n){
//    tree[loc].lchild = NULL;
//    tree[loc].rchild = NULL;
//    tree[loc].n = n;
//    return &tree[loc++];
//}
//
//Node new_tree[11];
//int loc_new = 0;
//Node* createNewNode(int n){
//    new_tree[loc_new].lchild = NULL;
//    new_tree[loc_new].rchild = NULL;
//    new_tree[loc_new].n = n;
//    return &new_tree[loc_new++];
//}
//
//char buf[11];
//int tmp;
//
//void insert(Node* node , Node* root){
//    if(node == root) return;
//    if(node->n < root->n){
//        if(root->lchild == NULL)
//            root->lchild = node;
//        else
//            insert(node , root->lchild);
//    }
//    else if(node->n > root->n){
//        if(root->rchild == NULL)
//            root->rchild = node;
//        else
//            insert(node , root->rchild);
//    }
//
//}
//
//bool checkTrees(Node* original , Node* new_tree){
//    bool flag = true;
//    if(original->n != new_tree->n){
//        //printf("NO\n");
//        flag = false;
//    }
//    if(flag){
//        if(original->lchild != NULL && new_tree->lchild != NULL){
//            flag = checkTrees(original->lchild , new_tree->lchild);
//        }
//        else if((original->lchild == NULL && new_tree->lchild != NULL) || (original->lchild != NULL && new_tree->lchild == NULL)){
//            //printf("NO\n");
//            flag = false;
//        }
//    }
//    if(flag){
//        if(original->rchild != NULL && new_tree->rchild != NULL){
//            flag = checkTrees(original->rchild , new_tree->rchild);
//        }
//        else if((original->rchild == NULL && new_tree->rchild != NULL) || (original->rchild != NULL && new_tree->rchild == NULL)){
//            //printf("NO\n");
//            flag = false;
//        }
//    }
//    return flag;
//    
//}
//
//int main(){
//    int n;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &n)!=EOF){
//        
//// original
//        scanf("%s" , buf);
//        loc = 0;
//        for(int i=0 ; buf[i]!=0 ; i++){
//            tmp = buf[i]-'0';
//            Node* tmp_node = createNode(tmp);
//            insert(tmp_node , &tree[0]);
//        }
//        
//// new
//        for(int i=0 ; i<n ; i++){
//            scanf("%s" , buf);
//            loc_new = 0;
//            for(int i=0 ; buf[i]!=0 ; i++){
//                tmp = buf[i]-'0';
//                Node* tmp_node = createNewNode(tmp);
//                insert(tmp_node , &new_tree[0]);
//            }
//            bool flag = checkTrees(&tree[0] , &new_tree[0]);
//            if(flag)
//                printf("YES\n");
//            else
//                printf("NO\n");
//        }
//        
//    
//    
//    }
//
//    return 0;
//}