#include <iostream>
#include <stdio.h>

using namespace std;
/*
时间限制：1秒
空间限制：32768K
牛牛变得黑化了,想要摧毁掉地球。但他忘记了开启地球毁灭器的密码。牛牛手里有一个字符串S,牛牛还记得从S中去掉一个字符就恰好是正确的密码,请你帮牛牛求出他最多需要尝试多少次密码。
如样例所示S = "ABA",3个可能的密码是"BA", "AA", "AB".
当S = "A", 牛牛唯一可以尝试的密码是一个空的密码,所以输出1.
输入描述:
输入包括一个字符串S,字符串长度length(1 ≤ length ≤ 50),其中都是从'A'到'Z'的大写字母。
输出描述:
输出一个整数,表示牛牛最多需要尝试的密码次数。

输入例子:
ABA

输出例子:
3
*/
bool set_a(char a[], int &len){
    int i = 0;
    char tmp = getchar();
    for(i=0; tmp!='\n'&&i<50;i++){
        a[i] = tmp;
        tmp = getchar();
    }
    a[i] = '\n';
    len = i;
    return true;
}
int max_trytime(char a[], int len){
    if(len == 1)
    return 0;
    int same_num = 0;
    char tmp = a[0];
    for(int i = 1; i<len; i++) {
        if(tmp == a[i])
            same_num ++;
        else
            tmp = a[i];
    }
    return same_num;
}
int main()
{
    char *a = new char[50];
    int len = 0;
    set_a(a,len);
    int same = max_trytime(a,len);
    cout << len - same<<endl;
    delete a;
    //cout << "Hello world!" << endl;
    return 0;
}