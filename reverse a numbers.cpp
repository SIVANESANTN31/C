#include <bits/stdc++.h>
using namespace std;
int reverseDigits(int num)
{
	int rev_num = 0;
	while (num > 0) {
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
	}
	return rev_num;
}


int main()
{
	int num ;
	cout<<"Enter the number: ";
	cin>>num;
	cout << "Reverse Number: " << reverseDigits(num);
	getchar();
	return 0;
}


