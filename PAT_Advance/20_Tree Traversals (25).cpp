////
////  20_Tree Traversals (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/12.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <queue>
//using namespace std;
//
//struct TreeNode{
//    int i;
//    TreeNode* lchild;
//    TreeNode* rchild;
//    TreeNode(int x): i(x),lchild(NULL),rchild(NULL){}
//    
//};
//
//int N;
//
//int postorder[31];
//int inorder[31];
//
//queue<TreeNode*> q;
//
//TreeNode* buildTree(int pa , int pb , int ia , int ib){
//    if(pa > pb)
//        return NULL;
//    TreeNode* root = new TreeNode(postorder[pb]);
//    for(int i=ia ; i<=ib ; i++){
//        if(inorder[i] == postorder[pb]){
//            root->lchild = buildTree(pa , pa + (i-1-ia) , ia, i-1);
//            root->rchild = buildTree(pa + i - ia , pb-1 , i+1 , ib);
//            break;
//        }
//    }
//    return root;
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(scanf("%d" , &N)!=EOF){
//        for(int i=0 ; i< N ; i++){
//            scanf("%d" , &postorder[i]);
//        }
//        for(int i=0 ; i< N ; i++){
//            scanf("%d" , &inorder[i]);
//        }
//        
//        
//        TreeNode* root = buildTree(0 , N-1 , 0 , N-1);
//        
//        while(!q.empty()) q.pop();
//        
//        q.push(root);
//        bool flag = true;
//        while(!q.empty()){
//            if(flag == false)
//                printf(" ");
//            printf("%d" , q.front()->i);
//            flag = false;
//            
//            if(q.front()->lchild != NULL){
//                q.push(q.front()->lchild);
//            }
//            
//            if(q.front()->rchild != NULL){
//                q.push(q.front()->rchild);
//            }
//            
//            q.pop();
//            
//        }
//        printf("\n");
//        
//    }
//    
//    return 0;
//}