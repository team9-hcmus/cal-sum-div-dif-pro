#include<iostream>
using namespace std;
int main()
{
	float x1, x2, sum, dif, pro, div;
	cout << "enter x1" << endl;
	cin >> x1;
	cout << "enter x2" << endl;
	cin >> x2;
	sum = x1 + x2;
	dif = x1 - x2;
	pro = x1 * x2;
	div = x1 / x2;
	if (x2 = 0) cout << "please enter x2 again" << endl;
	else cout << sum << endl << dif << endl << pro << endl << div << endl;
	return(0);
}
