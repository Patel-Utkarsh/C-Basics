#include <iostream>
using namespace std;

void largest(int arr[], int size);

void smallest(int arr[], int size);

int main()
{
    int n;
    printf("Enter size of array: ");
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array " << i << " : ";
        cin >> array[i];
    }

    largest(array, n);
    cout<<endl;
    smallest(array,n);
}

void largest(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] >= arr[j])
            {
                sum++;
            }
        }
        if (sum == size)
        {
            cout << "The largest number is " << arr[i];
            
        }

        else
        {
            sum = 0;
        }
    }
}

void smallest(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] <= arr[j])
            {
                sum++;
            }
        }
        if (sum == size)
        {
            cout << "The smallest number is " << arr[i];
            
        }

        else
        {
            sum = 0;
        }
    }
}