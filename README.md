# PasswordV2
#include "pch.h"
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <conio.h>

using namespace std;

bool CheckPassWord(string password)/*以"*"输入密码，三次机会*/
{
	bool judge = false;
	int i = 0;
	int times = 1;
	string s;
	char ch;
	char pw[50];
	while (times <= 3)
	{
		i = 0;
		while ((ch = _getch()) != '\r')
		{
			if (ch == '\b' && i > 0)//退格
			{
				printf("\b \b");
				i--;
			}
			else
			{
				pw[i++] = ch;
				cout << '*';
			}
		}
		pw[i] = '\0';
		cout << endl;
		if (password.compare(pw) != 0)
		{
			if (times == 3)
				cout << "密码错误，退出！" << endl << endl;
			else
				cout << "密码错误，剩余" << (3 - times) << "次机会：";
			times++;
		}
		else
		{
			cout << "密码正确！" << endl << endl;
			judge = true;
			return judge;
		}
	}
	if (times == 4)
		return judge;
	return judge;
}

int main()
{
	string password = "VGakki"; //原始密码
	cout << "输入6位查询密码（VGakki）：";
	if (CheckPassWord(password) != true)
		return 0;
	return 1;
}
