#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// Функція без шаблону для генерації масиву
void generateArray(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 46 - 10;  // Генерація випадкових чисел в діапазоні [-10, 35]
    }
}

// Функція без шаблону для сортування масиву (метод вибору)
void Sort(int* a, const int size) {
    for (int i = 0; i < size - 1; i++) {
        int max = a[i];
        int imax = i;
        for (int j = i + 1; j < size; j++) {
            if (max < a[j]) {
                max = a[j];
                imax = j;
            }
        }
        a[imax] = a[i];
        a[i] = max;
    }
}

// Функція без шаблону для виведення масиву
void Print(int* a, const int size) {
    for (int i = 0; i < size; i++)
        cout << setw(3) << a[i];
    cout << endl;
}

// Шаблон для генерації масиву
template <typename T>
void generateArrayT(T* a, const int size) {
    for (int i = 0; i < size; i++) {
        a[i] = (T)(rand() % 46 - 10);  // Генерація випадкових чисел для будь-якого типу T
    }
}

// Шаблон для сортування масиву (метод вибору)
template <typename T>
void SortT(T* a, const int size) {
    for (int i = 0; i < size - 1; i++) {
        T max = a[i];
        int imax = i;
        for (int j = i + 1; j < size; j++) {
            if (max < a[j]) {
                max = a[j];
                imax = j;
            }
        }
        a[imax] = a[i];
        a[i] = max;
    }
}

// Шаблон для виведення масиву
template <typename T>
void PrintT(T* a, const int size) {
    for (int i = 0; i < size; i++)
        cout << setw(3) << a[i];
    cout << endl;
}

int main() {
    const int n = 10;
    int a[n];

    srand((unsigned)time(NULL));

    // Використання функцій без шаблонів
    generateArray(a, n);
    Print(a, n);
    Sort(a, n);
    Print(a, n);

    // Використання шаблонних функцій для масиву типу double
    double b[n];
    generateArrayT(b, n);
    PrintT(b, n);
    SortT(b, n);
    PrintT(b, n);

    return 0;
}