//20316정의재 
#include<iostream>

using namespace std;

//int Fibo(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fibo(n - 1) + Fibo(n - 2);
//	}
//}
//int main()
//{
//	int A = 0;
//	cin >> A;
//	for (int i = 1; i <= A; i++)
//	{
//		cout << Fibo(i) << endl;
//	}
//}

//void HanoiTower(int num, char from, char by, char to)
//{
//	if (num == 1)
//	{
//		cout << "원반 1을" << from << "에서" << to << "로 이동" << endl;
//	}
//	else
//	{
//		HanoiTower(num - 1, from, to, by);
//		cout << "원반 " << num << "을(를)" << from << "에서" << to << "로 이동" << endl;
//		HanoiTower(num - 1, by, from, to);
//	}
//}
//int main()
//{
//	HanoiTower(3, 'A', 'B', 'C');
//	return (0);
//}

//int func(int n)
//{
//	if (n == .0)
//	{
//		return 0;
//	}
//	else
//	{
//		return func(n - 1) + n;
//	}
//}
//int main()
//{
//	int a = 0;
//	cin >> a;
//	cout << func(a);
//
//	return(0);
//}

//int rad = 1;
//int rev(int n) 
//{
//	if (n == 0)
//	{
//		return 0;
//	}	
//	int result = rev(n / 10) + (n % 10) * rad;
//	rad *= 10;
//	return result;
//}
//int main()
//{
//	int a;
//	cin >> a;
//	cout << rev(a) << endl;
//	return(0);
//}