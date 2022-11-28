#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int size;
    cout<<"Enter size of Array: ";
    cin>>size;
    int array[size];
    int new_arr[size];

    for(int i = 0; i<size;i++) {
        cout<<"Enter Array "<<i<<" : ";
        cin>>array[i];
    }


    for(int i = 0; i<size; i++) {
        for(int j=0; j<size; j++) {
            if(array[i]>array[j]) {
                sum++;
            
            }
        }

        new_arr[sum] = array[i];
            sum = 0;
            
    }

    for(int i = 0; i<size; i++) {
        for(int j = 0; j<=i;j++) {
            array[i] = new_arr[j];
        }
    }

    for(int i = 0; i<size;i++) {
        cout<<"New Array "<<i<<" = "<<array[i]<<endl;
    }






}
