#include <iostream>
using namespace std;

int main()
{

    int r;
    cout << "Enter number of rows: ";
    cin >> r;

    for (int i = 1; i <= r; i++)
    {
        for(int s = i; s < r; s++)
        {
            cout << " ";
        }

        for(int j = 1;j<=(2 * r - 1); j++)
        {
            if(i == r || j == 1 || j == 2*i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    
    return EXIT_SUCCESS;
}