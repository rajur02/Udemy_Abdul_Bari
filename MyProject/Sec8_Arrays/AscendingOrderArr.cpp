#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {12,16,5,7,20,4}; // {4,5,7,12,16,20}
    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}