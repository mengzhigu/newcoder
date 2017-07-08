#include <iostream>
#include <stdio.h>
using namespace std;
/*
时间限制：1秒
空间限制：32768K
牛牛有n张卡片排成一个序列.每张卡片一面是黑色的,另一面是白色的。初始状态的时候有些卡片是黑色朝上,有些卡片是白色朝上。牛牛现在想要把一些卡片翻过来,得到一种交替排列的形式,即每对相邻卡片的颜色都是不一样的。牛牛想知道最少需要翻转多少张卡片可以变成交替排列的形式。
输入描述:
输入包括一个字符串S,字符串长度length(3 ≤ length ≤ 50),其中只包含'W'和'B'两种字符串,分别表示白色和黑色。整个字符串表示卡片序列的初始状态。
输出描述:
输出一个整数,表示牛牛最多需要翻转的次数。

输入例子:
BBBW

输出例子:
1

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

void print_a(char a[]){
   // for(int i = 0; a[i] !='\n'||i< 50; i++){
   //   cout << a[i];
  //  }
    cout<<a<<endl;
}
void max_different_card(char a[],int &start,int &diff_len){
    int tmp_len = diff_len;
    char tmp = a[0];
    for(int i  = 1; a[i]!='\n'&&i< 50;i++){
        char tmpp = a[i];
        if(tmp == tmpp){

        }
    }

}
int main()
{
    int len = 0;
    char *a = new char[50];
    set_a(a,len);
    int *b = new int[len];
    for(int i = 0; i < len; i++){
        if(a[i] == 'B'||a[i] == 'b'){
            b[i] = 0;
        }
        else
            b[i] = 1;
    }

    int min1 = 0;
    int tmp = 0;
    for(int i = 0; i< len;i++){
        if(b[i]^tmp == 1)
            min1 ++;
        tmp^=1;
    }
    int min2 = 0;
    tmp = 1;
    for(int i = 0; i< len;i++){
        if(b[i]^tmp == 1)
            min2 ++;
        tmp^=1;
    }
    int min_time = min1<min2?min1:min2;
   // cout<<min1<<" "<<min2<<endl;
    cout<<min_time <<endl;
    //cout<<len<<endl;
    //print_a(a);
    delete b;
    delete a;


    //cout << "Hello world!" << endl;
  /*  char a=getchar();
    while(a !='\n'){
      cout << a<<endl;
      a=getchar();
    }*/
    return 0;
}
