////
////  51_Pop Sequence (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/12/1.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <stack>
//using namespace std;
//
//stack<int> st;
//
//int N , M , K;
//int input[1001];
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%d %d %d" , &N , &M , &K);
//    
//    while(K--){
//        while(!st.empty()) st.pop();
//        int col = 0;
//        bool flag = true;
//        for(int i=0 ; i<M ; i++){
//            scanf("%d" , &input[i]);
//        }
//        for(int i=0 ; i<M ; i++){
//            int tmp;
//            tmp = input[i];
//            if(!st.empty() && st.top() == tmp)
//                st.pop();
//            else if(!st.empty() && st.top() > tmp){
//                printf("NO\n");
//                flag = false;
//                break;
//            }
//            else if( (tmp - col + st.size()) <= N ){
//                for(int j=col+1 ; j<tmp ; j++){
//                    st.push(j);
//                }
//                col = tmp;
//            }
//            else{
//                printf("NO\n");
//                flag = false;
//                break;
//            }
//        }
//        
//        if(flag && st.size() == 0){
//            printf("YES\n");
//        }
//    
//    }
//    
//    
//    return 0;
//}