#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int i,j,arraySize,temp;
    cout << "Size of array : ";
    cin >> arraySize;
    int array[arraySize];
    cout << "Enter the array elements : ";
    for(i=0; i<arraySize; i++){
        cin >> array[i];
    }
    //Insertion Sort
    for(j=1; j<arraySize; j++){
        temp = array[j];
        i = j - 1;
        while(i>=0 && array[i]>temp){
            array[i+1] = array[i];
            i--;
        }
        array[i+1] = temp;
    }

    cout << "Sorted array list : ";
    for(i=0; i<arraySize; i++){
        cout << array[i] << " ";
    }

    return 0;
}
