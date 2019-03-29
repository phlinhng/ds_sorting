#include <iostream>
using namespace std;

void merge(int A[],int low, int mid, int high){
	int temp[high-low+1];
	int i=low; int j=mid+1; int k=0;
	while(i<=mid && j<=high){
		if(A[i]<A[j]){
			temp[k++]=A[i++];
		}
		else{
			temp[k++]=A[j++];
		}
	}
	while(i<=mid){
		temp[k++]=A[i++];
	}
	while(j<=high){
		temp[k++]=A[j++];
	}
	for(int l=0;l<k;++l){
		A[low+l]=temp[l];
	}
};

void mergeSort(int A[],int low,int high){
	if (low<high){
		int mid=(low+high)/2;
		mergeSort(A,low,mid);
		mergeSort(A,mid+1,high);
		merge(A,low,mid,high);
	}
}

int main(){
    int length; //number of input data
    cin >> length;
    int input[length];
    for (int i=0; i<length; ++i){
        cin >> input[i];
    }
    mergeSort(input,0,length-1);
    for (int i=0; i<length; ++i){
        cout << input[i] ;
        if(i != length-1) cout << " ";
    }
    return 0;
}