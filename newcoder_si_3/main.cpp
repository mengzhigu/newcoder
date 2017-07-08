
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
