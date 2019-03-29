#include <iostream>
using namespace std;

//Binary Insertion Sort

void InsertBSSort(int R[], int n){
    int i,j,temp,low,high;
    for(i=1;i<n;++i){
        temp=R[i];
        low=0; high=i-1;
        // find insertion place
        while(low<=high){
            int m = (low+high)/2;
            if(temp < R[m]) high=m-1;
            else low=m+1;
        }
        /*once the insertion place found, we have to shift every keys after the
        insertion place in sorted array */
        for(j=i-1;j>=high+1;j--){
            R[j+1]=R[j];
        }
        R[high+1]=temp;
    }
}

int main(){
    int length; //number of input data
    cin >> length;
    int input[length];
    for (int i=0; i<length; ++i){
        cin >> input[i];
    }
    InsertBSSort(input, length);
    for (int i=0; i<length; ++i){
        cout << input[i] ;
        if(i != length-1) cout << " ";
    }
    return 0;
}