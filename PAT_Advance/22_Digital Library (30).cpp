////
////  22_Digital Library (30).cpp
////  PAT
////
////  Created by 冯诗淳 on 15/11/12.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <map>
//#include <vector>
//#include <sstream>
//#include <algorithm>
//using namespace std;
//
//stringstream ss;
//
//struct Book{
//    string ID;
//    string title;
//    string author;
//    
//    
//
//};
//
//map<string , vector<string>> titles;
//map<string , vector<string>> authors;
//map<string , vector<string>> keywords;
//map<string , vector<string>> publishers;
//map<string , vector<string>> years;
//
//int N , M;
//
//void register_att(string ID , string att , map<string , vector<string>> &maps){
//    map<string , vector<string>>::iterator i = maps.find(att);
//    if(i != maps.end()){
//        i->second.push_back(ID);
//    }
//    else{
//        vector<string> book;
//        book.push_back(ID);
//        pair<string , vector<string>> p = pair<string , vector<string>>(att , book);
//        maps.insert(p);
//    }
//}
//
//void find_ans(map<string , vector<string>> maps , string query_str){
//    vector<string> ans;
//    
//    map<string , vector<string>>:: iterator it = maps.find(query_str);
//    
//    if(it != maps.end()){
//        ans = it->second;
//        sort(ans.begin() , ans.end());
//        for(int i=0 ; i<ans.size() ; i++){
//            printf("%s\n" , ans[i].c_str());
//        }
//    }
//    else
//        printf("Not Found\n");
//}
//
//int main(){
//
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    while(scanf("%d" , &N)!=EOF){
//        string ID , title , keyword , author , publisher;
//        char title_all[81];
//        char keywords_all[60];
//        char author_all[81];
//        char publisher_all[81];
//        string year;
//        
//        for(int i=0 ; i<N ; i++){
//            cin >> ID;
//            getchar();
//            gets(title_all);
//            title = title_all;
//
//            gets(author_all);
//            author = author_all;
//            
//            gets(keywords_all);
//
//            gets(publisher_all);
//            publisher = publisher_all;
//
//            cin >> year;
//            getchar();
//            
//            //
//            register_att(ID , title , titles);
//            register_att(ID, author, authors);
//            
//            ss << keywords_all;
//            string old_key;
//            while(true){
//                ss >> keyword;
//                if(keyword != old_key){
//                    register_att(ID, keyword, keywords);
//                    old_key = keyword;
//                }
//                else
//                    break;
//            }
//            ss.clear();
//            
//            register_att(ID, publisher , publishers);
//            register_att(ID, year , years);
//        }
//        
//        scanf("%d" , &M);
//        for(int i=0 ; i<M ; i++){
//            int indx;
//            char query_all[100];
//            string query_str;
//            scanf("%d: " , &indx);
//            gets(query_all);
//            query_str = query_all;
//            
//            printf("%d: %s\n" , indx , query_str.c_str());
//            
//            if(indx == 1){
//                find_ans(titles , query_str);
//            }
//            else if(indx == 2){
//                find_ans(authors , query_str);
//            }
//            else if(indx == 3){
//                find_ans(keywords , query_str);
//            }
//            else if(indx == 4){
//                find_ans(publishers , query_str);
//            }
//            else
//                find_ans(years , query_str);
//            
//        }
//    
//    
//    }
//    
//    return 0;
//}