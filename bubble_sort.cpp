#include <iostream>
using namespace std;

void swap(int &A, int &B)
{
    int temp = A;
    A = B;
    B = temp;
}

void BubbleSort(int R[], int n){
    int i,j;
    bool flag;
    int temp;
    for(i=n-1;i>=1;--i){
        flag=0;
        for(j=1;j<=i;++j){
            if(R[j-1]>R[j]) {
                swap(R[j-1],R[j]);
                flag=1; //set flag=1 mean a swap happened
            }
        }
        if(!flag) return;
    }
}

int main(){
    int length; //number of input data
    cin >> length;
    int input[length];
    for (int i=0; i<length; ++i){
        cin >> input[i];
    }
    BubbleSort(input, length);
    for (int i=0; i<length; ++i){
        cout << input[i] ;
        if(i != length-1) cout << " ";
    }
    return 0;
}