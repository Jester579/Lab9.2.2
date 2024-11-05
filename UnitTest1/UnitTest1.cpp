#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab9.2.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x;
			double a = 3, b = 4, c = 5;
			if (SQR(c) == SQR(a) + SQR(b))
				x = 1;
			else
				x = 0;
			Assert::AreEqual(x, 1);
		}
	};
}
