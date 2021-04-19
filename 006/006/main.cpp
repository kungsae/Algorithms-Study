//20316Á¤ÀÇÀç

#include<iostream>
using namespace std;



//int func(int n,int m)
//{
//	int A = n;
//	int B = m;
//
//	if (n == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		func(A - 1,m);
//		if (A >= B&&!(A%2))
//		{
//			cout << A << endl;
//			return A;
//		}
//	}
//}

//int main()
//{
//	int a,b;
//	cin >> b;
//	cin >> a;
//	func(a,b);
//
//	return(0);
//}
int func(int n)
{
	int b = n;
	cout << b << endl;
	
	if (n == 1)
	{
		return 1;
	}
	else
	{
		func(b - 1);
		return b;
	}
}
int main()
{
	int a;	
	cin >> a;
	func(a);

	return(0);
}

//int func(int n, int m)
//{
//	int A = n;
//	int B = m;
//
//	if (n == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		func(A - 1, m);
//		if (A >= B && (A % 2))
//		{
//			cout << A << endl;
//			return A;
//		}
//	}
//}
//int main()
//{
//	int a, b;
//	cin >> b;
//	cin >> a;
//	func(a, b);
//
//	return(0);
//}
