#include <stdio.h>


int main()
{
	/*for (int i =; i < 10, i++)
	{
		Serial.println(i);

	}*/

	int n = 2;
	int a;
	int i;
	while( i < 100 ){
		a = n * i;
		//Serial.println(a);
		printf("%d\n", a);
		i++;
	}

	return 0;
}
