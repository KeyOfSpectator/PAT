////
////  10_Radix (25)_2 .cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/7.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// 全部换成 long long int
//// 连中间 参数 也全部要换！
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//using namespace std;
//
//long long int covert_int(char num_char){
//    if(num_char >= '0' && num_char <= '9'){
//        return num_char-'0';
//    }
//    else
//        return num_char-'a'+10;
//}
//
//long long int toTen(string num , long long int radix){
//    long long int ret = 0;
////    long long int level = 1;
//    
//    for(int i=0 ; i<num.length() ; i++){
//        ret *= radix;
//        
////        int each_num = covert_int(num[i]);
////        if(each_num>=radix)
////            return -1;
//        
//        ret += covert_int(num[i]);
//        
//        // !!!!!!!!!!!!!
//        if(ret < 0)
//            return -1;
//        
//    }
//    
////    for(int i=num.length()-1 ; i>=0 ; i--){
////        int each_num = covert_int(num[i]);
////        if(each_num>=radix)
////            return -1;
////        ret += level * each_num;
////        level *= radix;
////    }
//    return ret;
//}
//
//////// !!!!!!
//long long int search_ans(string num , long long int target){
//    
//    long long int minRadix = 0 , maxRadix;
//    
//    for (int i = 0 ; i<num.length() ; i++)
//    {
//        if( covert_int(num[i]) >= minRadix )
//            minRadix = covert_int(num[i]) + 1;
//    }
//    
//    if (target ==  covert_int(num[0]) && num.length() == 1)
//    {
//        return minRadix;
//    }
//    
//    maxRadix = target  + 1;
//    
////    for(int i=2 ; i<=36 ; i++){
////        if(toTen(num , i) == target)
////            return i;
////    }
////    return -1;
//    
//    long long int mid;
//    while(minRadix <= maxRadix){
//        mid = (minRadix + maxRadix)/2;
//        
//        long long int tmp = toTen(num , mid);
//        if(tmp == -1 || tmp > target){
//            maxRadix = mid - 1;
//        }
//        else if(tmp < target){
//            minRadix = mid + 1;
//        }
//        else if( tmp == target)
//            return mid;
//        
//    }
//    return -1;
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    string a , b;
//    long long int  flag , radix1;
//    
//    cin >> a >> b >> flag >> radix1;
//    
////    if(a == b){
////        cout << radix1 << endl;
////    }
//    
//    if(flag == 1){
//        long long int base_value = toTen(a , radix1);
//        long long int ans = search_ans(b , base_value);
//        if(ans != -1)
//            cout << ans << endl;
//        else
//            cout << "Impossible" << endl;
//    }
//    else{
//        long long int base_value = toTen(b , radix1);
//        long long int ans = search_ans(a , base_value);
//        if(ans != -1)
//            cout << ans << endl;
//        else
//            cout << "Impossible" << endl;
//
//    }
//
//    return 0;
//}