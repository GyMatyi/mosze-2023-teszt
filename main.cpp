#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];

    std::cout << "1-100 ertekek duplazasa" << std::endl;
    std::cout << "-------------" << std::endl;

    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = (i + 1)*2;
    }

    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek: " << b[i] << std::endl;
    }

    int atlag = 0;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;

    std::cout << "-------------" << std::endl;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b;
    return 0;
}

