#include <iostream>
using namespace std;

void QuickSort(int R[], int low, int high){
    int temp;
    int i=low, j=high;
    if(low<high){
        temp=R[low];
        while(i!=j){
            while(j>i && R[j]>=temp) --j; //scanning from the right to the left 
            // until finding a number smaller than temp
            if(i<j){
                R[i]=R[j]; //put it left to temp
                ++i; //shift i to the right for one move
            }
            while(i<j && R[i]<temp) ++i; //scanning from the right to the left 
            // until finding a number BIGGER than temp
            if(i<j){
                R[j]=R[i]; //put it right to temp
                --j; //shif i to the left for one move
            }
        }
        R[i]=temp; //i is the final place for temp
        QuickSort(R,low,i-1);
        QuickSort(R,i+1,high);
    }
}

int main(){
    int length; //number of input data
    cin >> length;
    int input[length];
    for (int i=0; i<length; ++i){
        cin >> input[i];
    }
    QuickSort(input,0,length);
    for (int i=0; i<length; ++i){
        cout << input[i] ;
        if(i != length-1) cout << " ";
    }
    return 0;
}