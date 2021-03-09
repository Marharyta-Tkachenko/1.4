#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\ Tkachenko.Marharyta.IK11\lab.1.4\lab.1.4\Vector.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector a;
			a.Init(3, 5, 0);

			Vector b;
			b.Init(-3, -8, 12);

			Vector c = Add(a, b);
			Assert::AreEqual(c.GetZ(), 12.0);
		}
	};
}
