#include <Windows.h>
#include <cmath>
#include <cstdio>
#include <Python.h>


const double e = 2.7182818284590452353602874713527;

double sinh_impl(double x) {
    return (1 - pow(e, (-2 * x))) / (2 * pow(e, -x));
}

double cosh_impl(double x) {
    return (1 + pow(e, (-2 * x))) / (2 * pow(e, -x));
}

double tanh_impl(double x) {
    return sinh_impl(x) / cosh_impl(x);
}


int main()
{
    printf("Hello, World!\n");
    double x = 1;
    double y = tanh_impl(x);
    printf("tanh of %lf is %lf", x, y);
    return 0;
}