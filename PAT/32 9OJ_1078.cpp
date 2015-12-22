////
////  32 9OJ_1078.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/27.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//using namespace std;
//
//struct Node{
//    Node* lchild;
//    Node* rchild;
//    char c;
//    //Node(char x){c = x ; lchild = NULL ; rchild = NULL;}
//}list[50];
//int loc;
//Node* createNode(char c){
//    list[loc].lchild = list[loc].rchild = NULL;
//    list[loc].c = c;
//    return &list[loc++];
//}
//
//char str1[30];
//char str2[30];
//int length;
//
//int findRoot(char x){
//    for(int i=0 ; str2[i]!=0 ; i++ ){
//        if(str2[i]==x)
//            return i;
//    }
//    return -1;
//}
//
//void sort_child(Node* root , int str2_start , int str2_end , int str1_head  , int str1_end){
//    int RootIndex = findRoot(root->c);
//    int leftLength = RootIndex - str2_start;
//    int rightLength = str2_end - RootIndex;
//    if(leftLength == 1){
//        Node* l = createNode(str2[str2_start]);
//        root->lchild = l;
//    }
//    else if(leftLength > 1){
//        Node* l = createNode(str1[str1_head]);
//        root->lchild = l;
//        sort_child(l, str2_start, RootIndex - 1, str1_head + 1, str1_head + leftLength);
//    }
//    if(rightLength == 1){
//        Node* r = createNode(str2[RootIndex+1]);
//        root->rchild = r;
//    }
//    else if(rightLength > 1){
//        Node* r = createNode(str1[str1_head + leftLength]);
//        root->rchild = r;
//        sort_child(r, RootIndex+1, str2_end, str1_head + leftLength + 1, str1_end);
//    }
//        
//
//}
//
//void print_tree(Node* root){
//    if(root->lchild != NULL){
//        print_tree(root->lchild);
//    }
//    if(root->rchild != NULL){
//        print_tree(root->rchild);
//    }
//    printf("%c" , root->c);
//    
//    
//}
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//
//    while(scanf("%s" , str1)!=EOF){
//        scanf("%s" , str2);
//        length = strlen(str1);
//        loc = 0;
//        Node* root = createNode(str1[0]);
//        sort_child(root , 0  , length-1 , 1 , length-1);
//        print_tree(root);
//        printf("\n");
//    }
//    return 0;
//}