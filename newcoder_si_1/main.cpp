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
