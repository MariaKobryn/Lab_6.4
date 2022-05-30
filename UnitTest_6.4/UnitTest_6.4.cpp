#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Maria\source\repos\Lab_6.4\Lab_6.4\Lab_6.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64
{
	TEST_CLASS(UnitTest64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { 1, 1, 1, 1, 1 };
			Assert::AreEqual(Ordered(a, a + 5), true);
		}
	};
}
