/*Funzionante: sì. Svolto: sì. Approfondimenti: richiedono un nuovo programma.
##################PROGRAMMA LAB08 - 12BHDLZ - Esercizio 2####################
#                                                                           #
#Copyright © 2015 Corrado Mulas.                                            #
#                                                                           #
#Rilasciato dietro licenza GNU GENERAL PUBLIC LICENSE VERSION 3             #
#                                                                           #
#    This program is free software: you can redistribute it and/or modify   #
#    it under the terms of the GNU General Public License as published by   #
#    the Free Software Foundation, either version 3 of the License, or      #
#    (at your option) any later version.                                    #
#                                                                           #
#    This program is distributed in the hope that it will be useful,        #
#    but WITHOUT ANY WARRANTY; without even the implied warranty of         #
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          #
#    GNU General Public License for more details.                           #
#                                                                           #
#    You should have received a copy of the GNU General Public License      #
#    along with this program.  If not, see <http://www.gnu.org/licenses/>.  #
#                                                                           #
#############################################################################
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define N 50

int main(int argc, char **argv)
{
	char str[N];
	int e = 0;
	int i = 0;
	int nwrd = 0;
	
	printf("Inserire una stringa di max %d caratteri: ", N);
	while(fgets(str, N, stdin) != NULL && e == 0)
	{
		printf("\nStringa non manipolata: %s", str);
		
		for(i = 0; i < strlen(str); i++)
		{
			str[i] = toupper(str[i]);
			
			if(!isalnum(str[i]))
			{
				str[i] = '_';
			}
			
			if(isdigit(str[i]))
			{
				str[i] = '*';
			}
		}

		printf("\nStringa manipolata: %s", str);
		e++;
		
		for(i = 0; i < strlen(str); i++)
		{
			if(str[i] == '_')
			{
				nwrd++;
			}
		}
	}
	
	
	printf("\nNumero di parole: %d", nwrd);
	return 0;
}
