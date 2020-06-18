/*
读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：
每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10^100
​​ 。

输出格式：
在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu

即求输入那一行数字的和，然后将和的每一位以拼音的形式输出
*/

#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;

string returnPinYin(char num){
    string s;
    if(num=='1')
        s="yi";
    else if(num=='2')
        s="er";
    else if(num=='3')
        s="san";
    else if(num=='4')
        s="si";
    else if(num=='5')
        s="wu";
    else if(num=='6')
        s="liu";
    else if(num=='7')
        s="qi";
    else if(num=='8')
        s="ba";
    else if(num=='9')
        s="jiu";
    else
        s="ling";
    return s;
}
int main(){
    //输入数据较大，小于10^100
    int x;
    string num_s;
    while(cin>>num_s){
        int sum=0;
        for(int i=0;i<num_s.length();i++){
            sum+=num_s[i]-'0';
        }
        //cout<<sum<<endl;
        string s=to_string(sum);
        for(int i=0;i<s.length()-1;i++)
            cout<<returnPinYin(s[i])<<" ";
        cout<<returnPinYin(s[s.length()-1]);
    }
    return 0;
}