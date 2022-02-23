#include<iostream>

// Created this function to be able to sort the sub-lists in MergeSort function
// It basically creates 2 temporary lists and sorts them to send the upper activation record.

void MergeTwo(int A[], int l, int m, int h) {
    int length1 = m - l + 1;
    int length2 = h - m;

    int list1[length1];
    int list2[length2];

    int i, j, k;
    for (i = 0; i < length1; i++)
    {
        list1[i] = A[l + i];
    }
    for (j = 0; j < length2; j++)
    {
        list2[j] = A[m + 1 + j];
    }

    i = 0, j = 0, k = l;
    while (i < length1 && j < length2)
    {
        if (list1[i] < list2[j])
        {
            A[k++] = list1[i++];
        }

        else {
            A[k++] = list2[j++];
        }    
    }

    for (; i < length1; i++)
    {
        A[k++] = list1[i++];
    }

    for (; j < length2; j++)
    {
        A[k++] = list2[j++];
    }
}


void MergeSort(int A[], int l, int h) {
    int m = (l + h) / 2;
    if (l < h)
    {
        MergeSort(A, l, m);
        MergeSort(A, m + 1, h);
        MergeTwo(A, l, m, h);
    }
}


int main() {
    int A[8] = {12, 5, 3, 8, 1, 34, 14, 4};
    MergeSort(A, 0, 7);

    for (int i = 0; i < 8; i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}
