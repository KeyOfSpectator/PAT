////
////  10_Radix (25).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/6.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//using namespace std;
//
//
//int toInt(char num_char){
//    if(num_char >= '0' && num_char <= '9'){
//        return num_char-'0';
//    }
//    else
//        return num_char-'a'+10;
//}
//
////string add_string(string a , int b){
////    int rmx = 0;
////    int indx = a.length()-1;
////    while(b!=0){
////        int tmp = b%10;
////        b /= 10;
////        if(indx >= 0){
////            tmp = (a[indx]-'0')+ tmp + rmx;
////            rmx = tmp/10;
////            a[indx] = tmp%10 + '0';
////            indx--;
////        }
////        else{
////            tmp = tmp + rmx;
////            rmx = tmp/10;
////            a.insert(a.begin() , tmp%10 + '0');
////            indx--;
////        }
////    }
////    while(rmx != 0){
////        int tmp = rmx%10;
////        if(indx >= 0){
////            tmp = (a[indx]-'0') + tmp;
////            rmx = rmx/10 + tmp/10;
////            a[indx] = tmp%10+'0';
////            indx--;
////        }
////        else{
////            a.insert(a.begin() , tmp%10 + '0');
////            rmx /= 10;
////            indx--;
////        }
////
////    }
////    return a;
////}
//
//string add_ten_string(string a , string b){
//    string ret;
//    int indx_a = a.length()-1;
//    int indx_b = b.length()-1;
//    int rmx = 0;
//    while(indx_a>=0 && indx_b>=0){
//        int tmp = (a[indx_a]-'0') + (b[indx_b]-'0') + rmx;
//        ret.insert(ret.begin() , (tmp%10+'0') );
//        rmx = tmp/10;
//        indx_a--;
//        indx_b--;
//    }
//    while(indx_a>=0){
//        int tmp = (a[indx_a]-'0') + rmx;
//        ret.insert(ret.begin() , (tmp%10+'0') );
//        rmx = tmp/10;
//        indx_a--;
//    }
//    while(indx_b>=0){
//        int tmp = (b[indx_b]-'0') + rmx;
//        ret.insert(ret.begin() , (tmp%10+'0') );
//        rmx = tmp/10;
//        indx_b--;
//    }
//    while(rmx != 0){
//        ret.insert(ret.begin() , (rmx%10)+'0' );
//        rmx /= 10;
//    }
//    return ret;
//}
//
//string mul_ten_string_int(string a , int num){
//    string ret;
//    int mux = 0;
//    int indx_a = a.length()-1;
//    while(indx_a>=0){
//        int tmp = (a[indx_a]-'0') * num + mux;
//        ret.insert(ret.begin() , (tmp%10+'0') );
//        mux = tmp/10;
//        indx_a--;
//    }
//    while(mux != 0){
//        ret.insert(ret.begin() , (mux%10)+'0' );
//        mux /= 10;
//    }
//    return ret;
//}
//
//string mul_ten_string(string a , string b){
//    string ret;
//    for(int i=0 ; i<b.length() ; i++){
//        string tmp = mul_ten_string_int(a , b[b.length()-1-i]-'0');
//        for(int j=0 ; j<i ; j++){
//            tmp += "0";
//        }
//        ret = add_ten_string(ret, tmp);
//    }
//    return ret;
//}
//
//string toTen(string a , int radix1){
//    string ret = "0";
//    string level = "1";
//    for(int i=a.length()-1 ; i>=0 ; i--){
//        int int_char = toInt(a[i]);
//        if(int_char >= radix1)
//            return "-1";
//        ret = add_ten_string( ret , mul_ten_string_int(level , int_char) );
//        level = mul_ten_string_int(level, radix1);
//    }
//    return ret;
//}
//
//bool checkRadix(string str , int radix , string target){
//    if(toTen(str , radix) != target)
//        return false;
//    return true;
//}
//
//int checkAns(string num_str , string target_value){
//    //    int l = 2 , r = 36 , mid;
//    //    while(l < r){
//    //        mid = (l+r)/2;
//    //        if(checkRadix(b , mid , a)){
//    //            return mid;
//    //        }
//    //    }
//    //    return -1;
//    
//    for(int i=2 ; i<=36 ; i++){
//        if(checkRadix(num_str , i , target_value)){
//            return i;
//        }
//    }
//    return -1;
//}
//
//
//
//int main(){
//    
//    //freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    string a , b;
//    int flag , radix1;
//    
//    cin >> a >> b >> flag >> radix1;
//    
//    
//    // ??? 如果测试用例 3 3 1 10 oj要求10 ， 而认为为4
//    if(a == b){
//        printf("%d\n" , radix1);
//        return 0;
//    }
//    
//    string ten_value1;
//    
//    bool ans_flag = false;
//    if(flag == 1){
//        ten_value1 = toTen(a , radix1);
//        int ans = checkAns(b , ten_value1);
//        if(ans != -1){
//            printf("%d\n" , ans);
//        }
//        else{
//            printf("Impossible\n");
//        }
//    }
//    else{
//        ten_value1 = toTen(b , radix1);
//        int ans = checkAns(a , ten_value1);
//        if(ans != -1){
//            printf("%d\n" , ans);
//        }
//        else{
//            printf("Impossible\n");
//        }
//    }
//    
//    return 0;
//}