#include<iostream>

void Swap(int A[], int s1, int s2) {
    int temp = A[s1];
    A[s1] = A[s2];
    A[s2] = temp;
}

int  Partition(int A[], int l, int h) {
    int reference = A[l];
    int i = l;
    int j = h;

    while (i < j)
    {

        while (A[i] <= reference)
        {
            i++;
        }

        while (A[j] > reference)
        {
            j--;
        }
        
        if (i < j)
        {
            Swap(A, i, j);
        }
    }

    Swap(A, l, j);
    return j;
}

void QuickSort(int A[], int l, int h) {
    if (l < h)
    {
        int j = Partition(A, l, h);
        QuickSort(A, l, j);
        QuickSort(A, j + 1, h);
    }
    
}

int main() {
    int A[8] = {12, 5, 3, 8, 1, 34, 14, 4};
    QuickSort(A, 0, 7);

    for (int i = 0; i < 8; i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}
