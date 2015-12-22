//#include<iostream>
//using namespace std;
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<stdio.h>
//
//struct Call
//{
//    string name;
//    int month;
//    int date;
//    int hour;
//    int minute;
//    int total; // 总时间是对date、hour、minute之和换算为分钟，便于排序和时间的运算。
//    string status;
//};
//
//int charge[24];
//vector<Call> all_calls; // 输入的原始记录
//vector<Call> format_calls; // 对输入记录处理之后
//
//bool compare(Call a,Call b) // 对sort函数指定比较规则，首先是名字按照字典顺序排序，如果名字相同则按时间顺序
//{
//    if(a.name < b.name)
//        return 1;
//    else if(a.name == b.name && a.total < b.total)
//        return 1;
//    else
//        return 0;
//}
//
////calculate money from the begin of month to the time given
//int chargeByTime(int time) // 对给定的分钟数相对于月初计算费用，off和on的费用差即为一条通话记录的话费。
//{
//    int hours = time/60;
//    int minutes = time%60;
//    int money = 0;
//    int i;
//    for(i = 0;i<hours;i++)
//        money += charge[i%24]*60;
//    money += charge[i%24]*minutes;
//    return money;
//}
//
//double calCost(Call s,Call t) // 计算话费的方法为off相对月初的话费减去on相对月初的话费
//{
//    return (double)(chargeByTime(t.total)-chargeByTime(s.total))/100;
//}
//
//int calLast(Call s,Call t) // 计算一条通话记录的时长
//{
//    return (t.date-s.date)*24*60+(t.hour-s.hour)*60+(t.minute-s.minute);
//}
//
//
//
//int main()
//{
//    for(int i = 0;i<24;i++)
//        cin>>charge[i];
//    int N;
//    cin>>N;
//    while(N--)
//    {
//        Call c;
//        cin>>c.name;
//        cin>>c.month;
//        getchar();  // 注意getchar printf等是在头文件stdio.h中声明的。
//        cin>>c.date;
//        getchar();
//        cin>>c.hour;
//        getchar();
//        cin>>c.minute;
//        c.total = c.minute + 60*c.hour + 24*60*c.date;
//        cin>>c.status;
//        all_calls.push_back(c);
//    }
//    sort(all_calls.begin(),all_calls.end(),compare); // sort函数在algorithm.h中声明
//    
//    // filter delete those bad record 过滤无用的通话记录
//    bool haveonline = false; // 用于判断是否上一条是on，从而判断应该丢弃上一条还是保留。
//    string curname; // 用于存储上一条记录的名字，如果这一条是off，并且名字和上一条一致，才能构成一条通话记录
//    for(int i=0;i<all_calls.size();i++)
//    {
//        if(haveonline == false && all_calls[i].status =="on-line" ) // 第一次遇到on，直接压入
//        {
//            format_calls.push_back(all_calls[i]);
//            haveonline = true;
//            curname = all_calls[i].name;
//        }
//        else if(haveonline == true && all_calls[i].status =="on-line") // 第二次遇到on，说明上一个on是无效的，先弹出上一条，再压入这一条。
//        {
//            format_calls.pop_back();
//            format_calls.push_back(all_calls[i]);
//            haveonline = true;
//            curname = all_calls[i].name;
//        }
//        else if(haveonline == true && all_calls[i].status =="off-line"&&all_calls[i].name ==curname) // 匹配成功的通话记录，压入off。
//        {
//            format_calls.push_back(all_calls[i]);
//            haveonline = false;
//        }
//    }
//    //the last must be offline
//    if((*(format_calls.end()-1)).status == "on-line") // 上面无法处理最后一条为on的情况，因此检测最后一条是否是on，是直接丢弃。
//        format_calls.pop_back();
//    
//    //output
//    double totalcost = 0; // 用于累加总话费
//    curname = ""; // 用于判断是否应该输出总话费（总话费在一个人输出完毕后输出，第一次不输出，用curname是否为空来区分）
//    for(int i=0;i<format_calls.size();i+=2)
//    {
//        
//        if(format_calls[i].name != curname)
//        {
//            if(curname!="")
//            {
//                printf("Total amount: $%.2f\n",totalcost);
//                totalcost = 0;
//                printf("%s %02d\n",format_calls[i].name.c_str(),format_calls[i].month);
//            }
//            else
//            {
//                printf("%s %02d\n",format_calls[i].name.c_str(),format_calls[i].month);
//            }
//            curname = format_calls[i].name;
//        }
//        printf("%02d:%02d:%02d",format_calls[i].date,format_calls[i].hour,format_calls[i].minute);
//        printf(" ");
//        printf("%02d:%02d:%02d",format_calls[i+1].date,format_calls[i+1].hour,format_calls[i+1].minute);
//        printf(" ");
//        printf("%d",calLast(format_calls[i],format_calls[i+1]));
//        printf(" ");
//        printf("$%.2f\n",calCost(format_calls[i],format_calls[i+1]));
//        totalcost+=calCost(format_calls[i],format_calls[i+1]);
//    }
//    printf("Total amount: $%.2f\n",totalcost);
//    
//    
//}