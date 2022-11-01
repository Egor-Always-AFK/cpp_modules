#include <iostream>

template<typename T>
void iter(T *arr, std::size_t len, void(*f)(T const &elem))
{
    for (std::size_t i = 0; i < len; i++)
        f(arr[i]);
}

template<typename T>
void print(T &elem)
{
    std::cout << elem << " ";
}