#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 8.1it/lab 8.1it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace laba81it
{
	TEST_CLASS(laba81it)
    {
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "aaaabbccccdd";
			int result = Count(str);
			Assert::AreEqual(2, result);

		}
	};
}
