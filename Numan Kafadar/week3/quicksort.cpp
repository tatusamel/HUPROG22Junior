#include <iostream>
using namespace std;

int partition(int arr[],int left,int right){
    
    int begin=left-1;
    int end=arr[right];
    for(int i=left;i<=right-1;i++){
        if(arr[i]<end){
            begin++;
            swap(arr[begin],arr[i]);
        }
    }
    swap(arr[begin+1] ,arr[right] );
    return(begin+1);
}


void quicksort(int arr[],int left,int right){
    int pivot;
    if(left<right){
        pivot=partition(arr,left,right);
        quicksort(arr,left,pivot-1);
        quicksort(arr,pivot+1,right);
    }

}


int main()
{
    int arr[] = {66,10, 7,21, 8, 111, 86,19, 9, 1, 5,6,12,17,28};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n-1);
    cout << "Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}