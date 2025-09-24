#include <stdio.h>

int main() {
	int dia, mes, any;

	printf("Dia de nacimiento: ");
	scanf_s("%d", &dia);
	printf("Mes de nacimiento: ");
	scanf_s("%d", &mes);
	printf("Any de nacimiento completo (4 digitos): ");
	scanf_s("%d", &any);

	printf("La suma de todos los digitos es %d", dia + mes + any);

}