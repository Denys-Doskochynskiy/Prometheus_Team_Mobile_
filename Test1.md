#include <stdio.h>
#include <math.h>
#include <clocale>

int main() {
	setlocale(LC_ALL, "ukr");
	double x, h, x1, res, y;
	printf_s("Задайте значення нижнього обмеження А \n");
	scanf_s("%lf", &x);
	printf_s("_ _ _ _ _ _ _ _ _ _ _ _ _\n");
	printf_s("Задайте значення верхнього обмеження В \n");
	scanf_s("%lf", &y);
	printf_s("_ _ _ _ _ _ _ _ _ _ _ _ _\n");
	printf_s("Задайте значення кроку Н \n");
	scanf_s("%lf", &h);
	printf_s("_ _ _ _ _ _ _ _ _ _ _ _ _\n");
	x1 = x;
	while (x1 <= y + 0.01) {
		if (x1 < 0.6)
		{
			res = exp(x1 - sin(x1));
			printf_s("X=%lf   ", x1);
			printf_s("Res=%lf\n", res);
			printf_s("_ _ _ _ _ _ _ _ _ _ _ _ _\n");
		}
		if (x1 >= 0.6 && x1 < 0.7) {
			res = tan(fabs(log(x1)));
			printf_s("X=%lf   ", x1);
			printf_s("Res=%lf\n", res);
			printf_s("_ _ _ _ _ _ _ _ _ _ _ _ _\n");
		}
		if (x1 >= 0.7) {
			printf_s("X=%lf   ", x1);
			res = atan(pow(x1, 7));
			printf_s("Res=%lf\n", res);
			printf_s("_ _ _ _ _ _ _ _ _ _ _ _ _\n");

		}

		x1 += h;
	}



	return 0;

}
