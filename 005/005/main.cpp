#include<iostream>
using namespace std;

int a = 0;
int c = 0;
void func(int n[])
{
	if (n[c] > a&& c < 5)
	{
		a = n[c];
		c++;
		func(n);
	}
	else if(c < 5)
	{
		c++;
		func(n);
	}
	else
	{

	}

}
int main()
{
//	cout << "입력 받을 숫자의 개수 : ";
//	cin >> b;
	int asd[5] = { 0, };
	for (int i = 0; i < 5; i++)
	{
		cin >> asd[i];
		
	}
		func(asd);
	cout << a;
	return(0);
}

//int temp = 0;
//int A = 0;
//int c = 0;
//void func(int n)
//{
//	c += n%10;
//	if (n >= 1)
//	{
//		A = n/10;
//		//cout << A % 10 << endl;
//		temp = A - A % 10;
//		c += A % 10;
//		
//		//cout << temp<<endl;
//		func(temp);
//	}
//	else
//	{
//		cout << c << endl;
//	}
//}
//
//int main()
//{
//	int b;
//	cin >> b;
//	func(b);
//	//cout << temp;
//	return(0);
//}

//int a = 1;
//void func(int n)
//{
//	cout <<n<<" x "<<a<<" = "<< n * a<<endl;
//	if (a >= 9)
//	{
//		a = 1;;
//	}
//	else
//	{
//		a++;
//		func(n);
//	}
//}
//int main()
//{
//	int b;
//	cin >> b;
//
//	func(b);
//
//	return(0);
//}
//
