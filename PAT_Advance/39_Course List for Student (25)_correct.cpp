//#include<iostream>
//#include<vector>
//#include<set>
//#include<map>
//#include<queue>
//#include<algorithm>
//#include<string>
//#include<string.h>
//using namespace std;
//
//vector<int> name2course[26*26*26*10];
//int main()
//{
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    //input
//    int n, k;
//    scanf("%d%d",&n,&k);
//    //if use string instead of char*, then will be TLE, the copy time is also a bottle neck
//    //may be if we do not use vector container and just use array, may be string can be used
//    //in such a TLE case, every where we use STL container or cin/cout it can be a bottle neck
//    vector<vector<char*>> course(k+1);
//    for(int i = 0; i < k; ++i)
//    {
//        int cid, num;
//        scanf("%d%d",&cid,&num);
//        course[cid].resize(num);
//        for(int j = 0; j < num; ++j)
//        {
//            char* name = new char[4];
//            scanf("%s",name);
//            course[cid][j] = name;
//        }
//    }
//    //build the map
//    
//    for(int i = 1; i <= k; ++i)
//    {
//        for(int j = 0; j < course[i].size(); ++j)
//        {
//            char* name = course[i][j];
//            int index = (name[0]-'A')*26*26*10+(name[1]-'A')*26*10+(name[2]-'A')*10+(name[3]-'0');
//            name2course[index].push_back(i);
//        }
//    }
//    //for query
//    for(int i = 0; i < n; ++i)
//    {
//        char name[4];
//        scanf("%s",name);
//        printf("%s",name);
//        int index = (name[0]-'A')*26*26*10+(name[1]-'A')*26*10+(name[2]-'A')*10+(name[3]-'0');
//        printf(" %d", name2course[index].size());
//        for(int j = 0; j < name2course[index].size(); ++j)
//        {
//            printf(" %d", name2course[index][j]);
//        }
//        printf("\n");
//    }
//    //release
//    for(int i = 0; i < course.size(); ++i)
//    {
//        for(int j = 0; j < course[i].size(); ++j)
//        {
//            delete[] course[i][j];
//        }
//    }
//    
//    return 0;
//}