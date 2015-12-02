/* A compiler si besoin avec l'option -lm : gcc sinus.c -o sinus -lm*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* Programme calculant les valeurs des coordonnées d'une sinusoide */
main(int argc, char * argv[])
{
    float x0, param1, param2, arret;
    int var0, var1, var2, i;
    
    if (argc != 5) exit(0);
    sscanf(argv[1], "%f", &x0);
    sscanf(argv[2], "%f", &param1);
    sscanf(argv[3], "%f", &param2);
    sscanf(argv[4], "%f", &arret);
    
	/* attention les float doivent etre donne avec un point à la place de la virgule*/
    var0 = 0 ; var1 = x0 ;
    
    for (i=0 ; i < arret ;  i++)
    	{
        var2= (int)floorf (param1 * var1 + param2 * var0);
		/*floorf renvoie la partie entiere d'un reel*/
        printf("%d %d\n",  i, var2);
        var0= var1 ; var1= var2 ; 
      }
}
