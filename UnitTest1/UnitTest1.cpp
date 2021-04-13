#include "pch.h"
#include "CppUnitTest.h"
#include "../4.5/Ball.h"
#include "../4.5/Ball.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Ball a;
			Assert::AreEqual(a.Obj(), 0.0);
		}
	};
}
