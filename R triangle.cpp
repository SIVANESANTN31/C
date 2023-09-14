#include <iostream>
using namespace std;

int main()
{
    int rows;
    char s;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout<<"Enter a character:";
    cin>>s;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout<<" " << s;
        }
        cout << "\n";
    }
    return 0;
}
