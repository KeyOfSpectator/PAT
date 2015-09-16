////
////  50 9OJ_1439.cpp
////  PAT
////
////  Created by 冯诗淳 on 15/8/31.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//int get_gcb(int a , int b){
//    if(b == 0) return a;
//    else
//        return get_gcb(b , a%b);
//}
//
//
//int LCM(int a,int b){
//    int temp_a=a,temp_b=b;
//    int c=a*b;
//    while(a!=0&&b!=0){
//        a>b?a=a%b:b=b%a;
//    }
//    if(a==0&&b==0)c=0;
//    else
//        //a==0?c/=b:c/=a;
//        a==0?c=temp_a/b*temp_b:c=temp_b/a*temp_a;
//    return c;
//}
//
//int main(){
//    int n;
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    while(scanf("%d" , &n)!=EOF){
//        while(n--){
//            int m , tmp , tmp2;
//            int ans = 1;
//            scanf("%d" , &m);
//            scanf("%d" , &tmp);
//            if(tmp == 0){
//                ans = 0;
//            }
//            for(int i=1 ; i<m ; i++){
//                scanf("%d" , &tmp2);
//                if(tmp2 == 0){
//                    ans = 0;
//                    
//                }
////                if(ans != 0){
////                    
////                    int lcm = get_gcb(tmp , tmp2);
////                    if(lcm != 0)
////                        tmp = (tmp * tmp2) / lcm;
////                    else
////                        tmp = tmp * tmp2;
////                }
//                tmp = LCM(tmp , tmp2);
//            }
//            tmp = ans* tmp;
//            printf("%d\n" , tmp);
//        
//        }
//    
//    }
//    return 0;
//}