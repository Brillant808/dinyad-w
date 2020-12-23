#include "entete.h"


int main(int argc, char const *argv[])
{
	if(argc==2 && argv[1][0]=='-' && argv[1][1]=='-')
	{
		if(!strncmp(argv[1],"--help",6))
			help();
		else
			printf("Commande incorrect !!\nTapez dinyad-w --help pour avois de l'aide.\n\n");
	}
	else
	{
		for(int i=1;i< argc;i++)
			writeL(argv[i]);
		return 0;
	}
}
