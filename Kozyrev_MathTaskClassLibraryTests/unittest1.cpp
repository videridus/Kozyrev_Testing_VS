#include "stdafx.h"
#include "CppUnitTest.h"
#include "\\edustor\psimeikn\kozyrevfi\Desktop\Kozyrev_MathTask\Kozyrev_MathTask\Kozyrev_MathTask.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Kozyrev_MathTaskClassLibraryTests
{
	TEST_CLASS(Kozyrev_GeometryTests)
	{
	public:

		TEST_METHOD(RectangleArea_3and5_15returned)
		{
			// исходные данные
			// исходные данные
			int a = 3;
			int b = 5;
			int expected = 15;

			// получение значения с помощью тестируемого метода
			int actual = CalcRectangleArea(a, b);

			// сравнение ожидаемого результата с полученным
			Assert::AreEqual(expected, actual, L"Incorrect value area");
		}

		TEST_METHOD(Check_UserInput_Empty)
		{
			// исходные данные 
			// исходные данные 
			string str = "";
			bool expected = false;
			// получение значения с помощью тестируемого метода 
			bool actual = UserInput(str);
			// сравнение ожидаемого результата с полученным 
			Assert::AreEqual(expected, actual, L"Entered empty value");
		}

		TEST_METHOD(Check_UserInput_Letter)
		{
			// исходные данные
			string str = "а";
			// ожидаемое значение результата работы функции  UserInput
			bool expected = false;

			// получение значения с помощью тестируемого метода 
			bool actual = UserInput(str);

			// сравнение ожидаемого результата с полученным 
			Assert::AreEqual(expected, actual, L"Entered empty value");
		}

		TEST_METHOD(Check_UserInput_NegativeValue)
		{
			// исходные данные
			string str = "<0";
			// ожидаемое значение результата работы функции UserInput 
			bool expected = false;

			// получение значения с помощью тестируемого метода
			bool actual = UserInput(str);

			// сравнение ожидаемого результата с полученным 
			Assert::AreEqual(expected, actual, L"Entered empty value");
		}
	};
}