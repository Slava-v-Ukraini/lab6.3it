#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// ������� ��� ������� ��� ��������� ������
void generateArray(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 46 - 10;  // ��������� ���������� ����� � ������� [-10, 35]
    }
}

// ������� ��� ������� ��� ���������� ������ (����� ������)
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

// ������� ��� ������� ��� ��������� ������
void Print(int* a, const int size) {
    for (int i = 0; i < size; i++)
        cout << setw(3) << a[i];
    cout << endl;
}

// ������ ��� ��������� ������
template <typename T>
void generateArrayT(T* a, const int size) {
    for (int i = 0; i < size; i++) {
        a[i] = (T)(rand() % 46 - 10);  // ��������� ���������� ����� ��� ����-����� ���� T
    }
}

// ������ ��� ���������� ������ (����� ������)
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

// ������ ��� ��������� ������
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

    // ������������ ������� ��� �������
    generateArray(a, n);
    Print(a, n);
    Sort(a, n);
    Print(a, n);

    // ������������ ��������� ������� ��� ������ ���� double
    double b[n];
    generateArrayT(b, n);
    PrintT(b, n);
    SortT(b, n);
    PrintT(b, n);

    return 0;
}