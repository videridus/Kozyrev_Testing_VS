// Kozyrev_MathTask.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//�������� ������������ �������� ������
bool UserInput(string input)
{
	if (input.empty()) return false;
	try
	{
		int number = stoi(input);
	}
	catch (...)
	{
		return false;
	}
	return true;
}

//���������� ������� ��������������
int CalcRectangleArea(int NumberA, int NumberB)
{
    return NumberA*NumberB;
}

int _tmain(int argc, _TCHAR* argv[])
{
	string str_input; //��������������� ����������

	//���� ������ ��������������
	cout << "input height A" << endl;
	getline(cin, str_input);
	while (!UserInput(str_input))
	{
		cout << "input height A" << endl;
		if str_input < 0
		getline(cin, str_input);
	}
	int NumberA = stoi(str_input);
	//���� ������ ��������������
	cout << "input height B" << endl;
	getline(cin, str_input);
	while (!UserInput(str_input))
	{
		cout << "input height B" << endl;
		getline(cin, str_input);
	}
	int NumberB = stoi(str_input);
	
	//���������� ������� ������������
	int RectangleArea = CalcRectangleArea(NumberA, NumberB);
	//����� �������� �������
	if ((NumberA < 0) || (NumberB < 0))
	{
		cout << "incorrectly entered data";
		system("PAUSE");
		return 0;
	}
	else
	{
		cout << "Area of Rectangle is" << RectangleArea << endl;
		system("PAUSE");
		return 0;
	}
	
}


