// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

void move(char getone, char putone)
{
	cout << getone << "-->" << putone << endl;
}

void hanot(int n,char A,char B,char C)
{
	void move(char getone, char putone);
	if (n == 1)
		move(A, C);
	else
	{
		hanot(n - 1, A, C, B);
		move(A, C);
		hanot(n - 1, B, A, C);
	}
}

void main()
{
	void hanot(int n, char A, char B, char C);
	int m;
	cout << "请输入盘子数";
	cin >> m;
	cout << "移动" << m << "个盘子的步骤为" << endl;
	hanot(m, 'A', 'B', 'C');
}