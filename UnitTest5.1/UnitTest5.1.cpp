#include "pch.h"
#include "CppUnitTest.h"
#include "../LB5.1/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = f(3, 1, 3);
			Assert::AreEqual(result, 11.6 , 0.1);
		}
	};
}
