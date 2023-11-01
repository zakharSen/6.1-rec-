#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1(rec)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test[22] = { -19, 33, 16, 9, -16, -8, 32, 20, 21, 21, 2, -19, -19, -7, 4, 21, 17, 19, 26, -1, 35 - 14 };
			int a;
			a = countElements(test, 22, 0, 0);
			Assert::AreEqual(a, 7);

			a = sumElements(test, 22, 0, 0);
			Assert::AreEqual(a, -89);
		}
	};
}
