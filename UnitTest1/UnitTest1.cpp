#include "pch.h"  // Передкомпіляційний заголовок
#include "CppUnitTest.h"
#include "../PR6.3it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace aayTests
{
    TEST_CLASS(aayTests)
    {
    public:

        TEST_METHOD(TestGenerateaay)
        {
            const int size = 10;
            int a[size];

            // Генеруємо масив
            generateArray(a, size);

            // Перевіряємо, що значення в межах діапазону [-10, 35]
            for (int i = 0; i < size; i++) {
                Assert::IsTrue(a[i] >= -10 && a[i] <= 35);
            }
        }

        TEST_METHOD(TestSort)
        {
            const int size = 10;
            int a[size] = { 10, -1, 25, -10, 35, 0, 15, -5, 20, 5 };

            // Сортуємо масив
            Sort(a, size);

            // Перевіряємо, що масив відсортовано в порядку спадання
            for (int i = 0; i < size - 1; i++) {
                Assert::IsTrue(a[i] >= a[i + 1]);
            }
        }

        TEST_METHOD(TestGenerateaayTemplate)
        {
            const int size = 10;
            double a[size];

            // Генеруємо масив з типом double
            generateArrayT(a, size);

            // Перевіряємо, що значення в межах діапазону [-10, 35]
            for (int i = 0; i < size; i++) {
                Assert::IsTrue(a[i] >= -10.0 && a[i] <= 35.0);
            }
        }

        TEST_METHOD(TestSortTemplate)
        {
            const int size = 10;
            double a[size] = { 10.5, -1.2, 25.0, -10.3, 35.1, 0.0, 15.2, -5.4, 20.3, 5.6 };

            // Сортуємо масив з типом double
            SortT(a, size);

            // Перевіряємо, що масив відсортовано в порядку спадання
            for (int i = 0; i < size - 1; i++) {
                Assert::IsTrue(a[i] >= a[i + 1]);
            }
        }
    };
}
