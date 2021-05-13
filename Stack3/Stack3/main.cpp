//20316Á¤ÀÇÀç
#include<iostream>
#include<stack>
#include<string>
using namespace std;

//int main()
//{
//	stack<char> s1;
//	
//	string a;
//	cin >> a;
//
//	for (int i = 0; i < a.length(); i++)
//	{
//		s1.push(a[i]);
//	}
//	for (int i = 0; i < a.length(); i++)
//	{
//		cout<<s1.top()<<endl;
//		s1.pop();
//	}
//	return(0);
//}
//



int main()
{
	stack<char> ch;
	stack<int> i;

	char a;
	cin >> a;
	cout << a;

	return(0);
}


//int main()
//{
//	stack<char> ch;
//	string a;
//	cin >> a;
//	int j = 0;
//	for (int i = a.length(); i >= 0; i--)
//	{
//		
//		ch.push(a[i]);
//		if (j % 3 == 0&& j!=0)
//		{
//			ch.push(',');
//		}
//		j++;
//	}
//	if (ch.top() == ',') ch.pop();
//	int num = ch.size();
//	for (int i = 0; i < num; i++)
//	{
//		cout <<ch.top();
//		ch.pop();
//
//	}
//
//	return(0);
//}