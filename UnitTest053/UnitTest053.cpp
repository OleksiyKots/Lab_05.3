#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.3/Lab_05.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest053
{
    TEST_CLASS(UnitTest053)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double x = 4;
            double a;
            a = (cos(2 * x) + 1) / cos(x) + pow(sin(x), 2);
            Assert::AreEqual(a ,z(x)); // Тест з точністю до 9 знаків після коми
        }
    };
}
