#include "main.h"

int main(void)
{
	int age = 27;
	char *prenom = "Philippe";
	char *nom = "Willot";
	char init1 = 'P';
	char init2 = 'W';
	_printf("Salut %s %s, tu as %d ans! Et tes initiales sont %c%c !\n", prenom, nom, age, init1, init2);
	return (0);
}
