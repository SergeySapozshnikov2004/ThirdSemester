#include <iostream>

int Sum(const int a, const int b);
double Sum(const double a, const double b)

template<typename T>
T Sum(const T a, const T b);

int main()
{
	std::cout << Sum(2, 3) << " " << Sum(2.5, 4.5) << Sum("s". "d");
	return 0;
}

int Sum(const int a, const int b)
{
    return a + b;
}

double Sum(const double a, const double b)
{
    return 0.0;
}

template <typename T>
T Sum(const T a, const T b)
{
    return a + b;
}

template <typename T1, typename T2>
T1 Sum(const T1 &a, const T2 &b)
{
    return a + b;
}
