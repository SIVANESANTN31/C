#include <iostream>
using namespace std;

int main()
{
    int row ,num=1 ;

    cout << "Enter the no of row: ";
    cin >> row ;

    for(int i = 0; i < row ; ++i)
    {
        for(int j = 0; j <= i; ++j)
        {
            cout << num << " ";
        }
        num = num + 1;

        cout << endl;
    }
    return 0;
}
