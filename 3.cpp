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

    float a;
    std::vector<int> v = generate_random_vector<int>(20, 1, 50);
    for (int i = 0; i < 20; ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < 3; ++i) {
        a = v[i];
        v[i] = v[20 - (3 - i)];
        v[20 - (3 - i)] = a;
    }

    for (int i = 0; i < 20; ++i) {
        std::cout << v[i] << " ";
    }
    
    
}
