////
////  37_Magic Coupon (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/18.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//vector<long long> c_p;
//vector<long long> c_n;
//
//vector<long long> p_p;
//vector<long long> p_n;
//
//int nc , np;
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(scanf("%d" , &nc)!=EOF){
//        for(int i=0 ; i<nc ; i++){
//            long long tmp;
//            scanf("%lld" , &tmp);
//            if(tmp > 0)
//                c_p.push_back(tmp);
//            else
//                c_n.push_back(tmp);
//        }
//        scanf("%d" , &np);
//        for(int i=0 ; i<np ; i++){
//            long long tmp;
//            scanf("%lld" , &tmp);
//            if(tmp > 0)
//                p_p.push_back(tmp);
//            else
//                p_n.push_back(tmp);
//        }
//        
//        sort(c_p.begin() , c_p.end());
//        sort(c_n.begin() , c_n.end());
//        sort(p_p.begin() , p_p.end());
//        sort(p_n.begin() , p_n.end());
//        
//        long long ans = 0;
//        int indx1 = c_p.size()-1;
//        int indx2 = p_p.size()-1;
//        
//        while(indx1>=0 && indx2>=0){
//            ans += c_p[indx1] * p_p[indx2];
//            indx1--;
//            indx2--;
//        }
//        
//        indx1 = 0;
//        indx2 = 0;
//        while(indx1 < c_n.size() && indx2<p_n.size()){
//            ans += c_n[indx1]*p_n[indx2];
//            indx1++;
//            indx2++;
//        }
//        
//        printf("%lld\n" , ans);
//    
//    
//    }
//    return 0;
//}