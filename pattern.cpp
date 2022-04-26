#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == (n - 1))
        {
            for (int k = 0; k < n; k++)
            {
                cout << "*"
                     << " ";
            }
            cout << endl;
        }
        else
        {
            for (int k = 0; k < n; k++)
            {
                if (k == 0 || k == (n - 1))
                {
                    cout << "*"
                         << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
}