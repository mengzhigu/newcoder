#include <iostream>
#include <stdio.h>

using namespace std;

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
