#include <iostream>
using namespace std;


void merge(int arr[],int left,int middle,int right){
    //temp arrays
    int temp1[middle-left+1],temp2[right-middle];
    for(int i=0;i<middle-left+1;i++){
        temp1[i]=arr[left+i];
    }
    for(int i=0;i<right-middle;i++){
        temp2[i]=arr[middle+i+1];
    }
    int i=0;
    int j=0;
    int index=left;
    while(i<middle-left+1 && j<right-middle)
    {
        if(temp1[i]<=temp2[j]){
            arr[index]=temp1[i];
            i++;
        }
        else{
            arr[index]=temp2[j];
            j++;
        }
        index++;
    }
    
    //copy to temps
    while(i<middle-left+1){
        arr[index]=temp1[i];
        i++;
        index++;
    }
    while(j<right-middle){
        arr[index]=temp2[j];
        j++;
        index++;
    }



}



void mergesort(int arr[],int left,int right){
    if(left<right){
        int middle=(left+right)/2;
        mergesort(arr,left,middle);
        mergesort(arr,middle+1,right);
        merge(arr,left,middle,right);
    }
}


int main()
{
    int arr[] = {66,10, 7,21, 8, 111, 86,19, 9, 1, 5,6,12,17,28};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr, 0, n-1);
    cout << "Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;  //Sorted array: 1 5 6 7 8 9 10 12 17 19 21 28 66 86 111 
    return 0;
}