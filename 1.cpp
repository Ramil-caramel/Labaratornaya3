#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

template<class T>
std::vector<T> generate_random_vector(std::size_t num, T min = -10, T max = 10)
{
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_real_distribution<> dist(min, max);

    auto lambda = [&e2, &dist]() -> T { return dist(e2); };

    std::vector<T> result(num);
    std::generate_n(result.begin(), num, lambda);
    return result;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    float a, perv;
    std::vector<int> v = generate_random_vector<int>(10, 1, 50);
    std::cin >> a;
    perv = v[0];

    for (int i = 0; i < 10; ++i) {
        std::cout << v[i] << " ";
    }

    std::cout << std::endl << "1-й массив:";
    for (int i = 0; i < 10; ++i) {
        std::cout << v[i] * 2 << " ";
    }

    std::cout << std::endl << "2-й массив:";
    for (int i = 0; i < 10; ++i) {
        std::cout << v[i] - a << " ";
    }

    std::cout << std::endl << "3-й массив:";
    for (int i = 0; i < 10; ++i) {
        std::cout << (v[i]/perv)  << " ";
    }
}
