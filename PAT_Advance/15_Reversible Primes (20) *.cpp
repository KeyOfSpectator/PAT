////
////  15_Reversible Primes (20).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/8.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <string>
//#include <sstream>
//using namespace std;
//
//stringstream ss;
//bool prime[100001];
//
//void getPrime(){
//    int inx = 0;
//    for(int i=2 ; i<100010 ; i++){
//        if(!prime[i]) continue;
//        for(int j=2 ; j<=sqrt(i) ; j++){
//            if(i%j==0){
//                int tmp = i;
//                for( ; tmp<100010 ; tmp+=i){
//                    prime[tmp] = false;
//                }
//            }
//        }
//    }
//}
//
//bool isPrime(int x){
//    
//    /// !!!
//    ////////       case 10 2
//    if(x == 0 || x== 1)
//        return false;
//    for(int i=2 ; i<=sqrt((double)x) ; i++ ){
//        if(x%i==0)
//            return false;
//    }
//    return true;
//}
//
//string to_D(int N , int radix){
//    string ret;
//    while(N!=0){
//        ret.insert(ret.begin() , N%radix+'0');
//        N /= radix;
//    }
//    return ret;
//}
//
//string revert_str(string str){
//    string ret;
//    for(int i=0 ; i<str.length() ; i++){
//        ret.insert(ret.begin() , str[i]);
//    }
//    return ret;
//}
//
//int to_int(string text){
//    int ret;
//    ss << text;
//    ss >> ret;
//    ss.clear();
//    return ret;
//}
//
//int to_Ten(string text , int radix){
//    int ret = 0;
//    
//    for(int i=0 ; i<text.length() ; i++){
//        ret *= radix;
//        ret += text[i]-'0';
//    }
//    
//    return ret;
//    
//}
//
//// correct
//int reverse(int n, int radix){
//    int ans = 0;
//    while(n>0){
//        ans = ans*radix + n%radix;
//        n /= radix;
//    }
//    return ans;
//}
//
//int ReverseNumber(int N, int D)
//{
//    int sum = 0;
//    do
//    {
//        sum = sum*D + N%D;
//        N /= D;
//    }while(N != 0);
//    return sum;
//}
//
//int main(){
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    int N , D;
//    while(scanf("%d %d",&N , &D)!=EOF && N>=0){
//        
////        memset(prime , true , sizeof(prime));
////        getPrime();
//        
////        string text = to_D(N , D);
//        int ten1 = N;
//        
////        
////        text = revert_str(text);
////        int ten2 = to_Ten(text , D);
//        int ten2 = ReverseNumber(N , D);
//        
//        if(isPrime(ten1) && isPrime(ten2)){
//            printf("Yes\n");
//        }
//        else{
//            printf("No\n");
//        }
//        
//    }
//
//    return 0;
//}