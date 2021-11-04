/* implemente um sistema que o usuario
digite um valor em metros(m) e converta 
para centimetros (cm)
-- Digite o valor em (m)
-- O valor convertido de X (m) é Y(cm)
*/ 

#include <stdio.h>

int main ()
{

float metros, centimetros;

//entrada de valores - start
	printf("digite um valor em (m): \n");
	scanf("%f", &metros);
//entrada de valores - end

//processamento - start
	centimetros = metros*100;
//processamento - end

//saida - start
	printf("o valor convertido de %f m eh %f cm ", metros, centimetros);
//saida - end

return 0;
}
