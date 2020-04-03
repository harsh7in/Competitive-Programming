#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {10, 20, 5, 23 ,42 , 15};
    int n = sizeof(arr)/sizeof(arr[0]);


    sort(arr,arr+n);

    cout << "\narray after sorting is: ";
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";

    reverse(arr,arr+n);

    cout << "\narray after reversing is: ";
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";

    cout << "\nMaximum element of array is: ";
    cout << *max_element(arr,arr+n);

    cout << "\nMinimum element of array is: ";
    cout << *min_element(arr,arr+n);

    cout << "\nThe summation of array elements is: ";
    cout << accumulate(arr,arr+n, 0);

    return 0;
}
