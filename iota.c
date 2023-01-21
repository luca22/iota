#include <stdint.h>


void iota(uint32_t* x, size_t n) {

	if (x == NULL) {

		return;
	}

	else {

		for (size_t i = 0; i < n; i++) {

			x[i] = i;

		}
	}
}