#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <locale>

void FillArray(double* array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = static_cast<double>(rand()) / RAND_MAX * 100; 
    }
}

void ShowArray(double* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "ukr");
    srand(static_cast<unsigned int>(time(0))); 
    char choice;

    do {
        int size;
        std::cout << "Введіть розмір масиву: ";
        std::cin >> size;

        double* array = new double[size];

        FillArray(array, size);
        std::cout << "Згенерований масив: ";
        ShowArray(array, size);

        delete[] array;

        std::cout << "Продовжити? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
