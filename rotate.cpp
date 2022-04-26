#include <iostream>
using namespace std;
void rotate(int arr[], int n)
{
    int temp;
    temp = arr[n - 1];
    for (int i = n-1; i >= 1; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}
int main()
{
    //     Input:  arr[] = {1, 2, 3, 4, 5}
    //     Output: arr[] = {5, 1, 2, 3, 4}
    int a[20], n, ch;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (1)
    {
        cout << "enter your choice\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            rotate(a, n);
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            break;
        }
        case 2:
        {
            exit(0);
        }
        default:
        {
            cout << "enter valid choice";
            break;
        }
        }
    }
}