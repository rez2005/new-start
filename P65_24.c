#include<stdio.h>
#include<math.h>

double f(double x) {
	return x * x * x - x * x - 1;
	}

int main() {
	double a = 0, b = 3, fa=-1, fb=17;
	for (; fabs(fa - fb) > 1e-6;) {
		fa = f(a);
		fb = f(b);
		if (fa * fb < 0) {
			a = (a + b) / 2;
		}
		else {
			a = 2 * a - b;
			b = (a + b) / 2;
		}
	}
		printf("a=%.6f b=%.6f f(a)=%.6f f(b)=%.6f\n", a, b, fa, fb);
		return 0;
	}
		
			

