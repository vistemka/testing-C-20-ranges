#include <iostream>
#include <complex>
#include <cmath>

#include "Random.h"
#include "Timer.h"

using namespace std;

//template<typename R>
//void dft(R& r, R& out) {
//
//	unsigned k{};
//	unsigned N = size(r);
//	double C = 2 * _Pi * N;
//	unsigned n{};
//	decltype(r.begin()) t_sum;	// complex type
//
//	for (auto i : out) {
//		t_sum(0., 0.);
//		n = 0;
//		for (auto j : r) {
//			t_sum += j * complex((cos(C * k * n), -sin(C * k * n));
//		}
//		*i = t_sum;
//	}
//};

template<typename R>
void test(R& r) {
	typedef decltype(*std::begin(r)) r_val;
	r_val sum;
	for (auto it : r)
		sum += it;
	std::cout << sum;
}

int main() {

}