#include <iostream>
using namespace std;

void InsertSort(int R[], int n){
    int i,j;
    int temp;
    for(i=1; i<n;++i){
        temp=R[i]; //store number ready to be inserted in temp
        j=i-1;
        /* key operation */
        while(j>=0 && temp<R[j]){
            R[j+1]=R[j];
            --j;
        }
        R[j+1]=temp; //right place found, now insert key in temp to that place
    }
}

int main(){
    int length; //number of input data
    cin >> length;
    int input[length];
    for (int i=0; i<length; ++i){
        cin >> input[i];
    }
    InsertSort(input, length);
    for (int i=0; i<length; ++i){
        cout << input[i] ;
        if(i != length-1) cout << " ";
    }
    return 0;
}