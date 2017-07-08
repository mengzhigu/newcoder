/*时间限制：1秒
空间限制：32768K
牛牛以草料为食。牛牛有一天依次遇到n堆被施展了魔法的草料,牛牛只要遇到一堆跟他当前相同大小的草料,它就会把草料吃完,而使自己的大小膨胀一倍。
一开始牛牛的大小的是A,然后给出牛牛依次遇到的n堆草料的大小。请计算牛牛最后的大小。
输入描述:
输入包括两行,第一行包含两个整数n和A(1 ≤ n ≤ 200, 1 ≤ A ≤ 1,000,000,000)
第二行包括n个整数,表示牛牛依次遇到的草料堆大小a_i(1 ≤ a_i ≤ 1,000,000,000)

输出描述:
输出一个整数,表示牛牛最后的大小。

输入例子:
5 1
2 1 3 1 2

输出例子:
4*/
#include <iostream>

using namespace std;

void set_intarray(int a[], int len){
    for(int i = 0; i < len; i++){
        cin >> a[i];
    }
}
void print_array(int a[], int len){
    for(int i = 0; i < len; i++){
        cout << a[i];
    }
}
void sort_a(int a[], int len){
    for(int i =0; i < len; i++){
        for(int j = i; j < len; j++){
            if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int search_cao(int a[], int len, int tmp_size, int flag){
    for(int i = flag; i < len; i++){
        if(tmp_size == a[i]){
           // flag = i;
            return i;
        }
    }
    return -1;
}
int main()
{
    int len = 0;
    int size_cao = 0;
    cin >> len >> size_cao;
    int * a = new int[len];
    set_intarray(a,len);
    sort_a(a,len);
   // print_array(a,len);
    int k = search_cao(a, len, size_cao, 0);
    while(k >= 0){
         size_cao+=size_cao;
         k = search_cao(a,len,size_cao,k);
         while(a[k] == size_cao)
             k++;
    }
    cout << size_cao <<endl;
   // cout << "Hello world!" << endl;
    return 0;
}
