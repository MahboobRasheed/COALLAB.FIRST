//1. Start from the second element(index 1)and assume the first element is already exist.
//2. Compare the cuurrent element with the  previous element.
//3. Shift all elements graeter then the current element one position ahead.
//4. Insert the current element 

#include<iostream>
using namespace std;
void insertionsort(int arr[], int n)
{
    for(int i=1 , i<n , i++)
    {
        int key = arr[i];
        int j = i-1;

        //Move elements of array(0..i-1)thta re greater than key to one position ahead of their current position
        wile(i>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void printarray(int arr[], int n)
{
    for(int i=0 , i<n , i++)
    {
        cout<<arr[i]<<" ";
    }
 cout<<endl;
}
int main(){
    int arr[]= {12,11,13,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"original array";
    printarray(arr,n);
    insertionSort(arr ,n);
    cout<<"sorted array:";
    return 0;
}