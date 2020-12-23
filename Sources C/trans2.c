
#include "lettres.h"
#include "entete.h"
/* Copie de tableau
_______________________*/

void trans2(char t1[10][10], char t2[10][10])
{
  int m,n;
 
  for(m=0;m<10;m++)
    for(n=0;n<10;n++)
      t2[m][n]=t1[m][n];
}

/* Associer un caractere à une lettre
______________________________________*/

void getL(char tableau[10][10],char l)
{

   if('a' <= l && l <= 'z' )
    l=l-32;
  
   if(l=='A') trans2(lt_A,tableau);
   else if(l=='B') trans2(lt_B,tableau);
   else if(l=='C') trans2(lt_C,tableau);
   else if(l=='D') trans2(lt_D,tableau);
   else if(l=='E') trans2(lt_E,tableau);
   else if(l=='F') trans2(lt_F,tableau);
   else if(l=='G') trans2(lt_G,tableau);
   else if(l=='H') trans2(lt_H,tableau);
   else if(l=='I') trans2(lt_I,tableau);
   else if(l=='J') trans2(lt_J,tableau);
   else if(l=='K') trans2(lt_K,tableau);
   else if(l=='L') trans2(lt_L,tableau);
   else if(l=='M') trans2(lt_M,tableau);
   else if(l=='N') trans2(lt_N,tableau);
   else if(l=='O') trans2(lt_O,tableau);
   else if(l=='P') trans2(lt_P,tableau);
   else if(l=='Q') trans2(lt_Q,tableau);
   else if(l=='R') trans2(lt_R,tableau);
   else if(l=='S') trans2(lt_S,tableau);
   else if(l=='T') trans2(lt_T,tableau);
   else if(l=='U') trans2(lt_U,tableau);
   else if(l=='V') trans2(lt_V,tableau);
   else if(l=='W') trans2(lt_W,tableau);
   else if(l=='X') trans2(lt_X,tableau);
   else if(l=='Y') trans2(lt_Y,tableau);
   else if(l=='Z') trans2(lt_Z,tableau);

   else if(l==' ') trans2(t_,tableau);
   else if(l=='.') trans2(tbl_0,tableau);
   else if(l==',') trans2(tbl_1,tableau);
   else if(l==';') trans2(tbl_2,tableau);
   else if(l==':') trans2(tbl_3,tableau);
   else if(l==39) trans2(tbl_4,tableau);
   else if(l=='?') trans2(tbl_5,tableau);
   else if(l=='!') trans2(tbl_6,tableau);

   else if(l=='1') trans2(t_un,tableau);
   else if(l=='2') trans2(t_deux,tableau);
   else if(l=='3') trans2(t_trois,tableau);
   else if(l=='4') trans2(t_quatre,tableau);
   else if(l=='5') trans2(t_cinq,tableau);
   else if(l=='6') trans2(t_six,tableau);
   else if(l=='7') trans2(t_sept,tableau);
   else if(l=='8') trans2(t_huit,tableau);
   else if(l=='9') trans2(t_neuf,tableau);
   else if(l=='0') trans2(t_zero,tableau);
   else trans2(t_,tableau);

}

/*Ecrire un caractere
_____________________ */

void  writeC(char c)
{	
  char l[10][10];
  getL(l,c);


  for (int i = 0; i < 10; ++i)
  {
    for (int j = 0; j < 10; ++j)
    {
      if(l[i][j] == 1)
        printf("*");
      else
        printf(" ");
    }

    printf("\n");
  }
}


/*Ecire une chaine 
_____________________*/


void writeL(const char l[])
{
  const int n=strlen(l);
  char L[T][10][10]={0};

  for (int i = 0; i < n; ++i)
    getL(L[i],l[i]);


  for(int p=12; p-n < 12 ;p+=12)
  {
    for (int i = 0; i < 10; ++i)
    {
      for (int j = p-12; j < n && j<p; ++j)
      {
        for (int k = 0; k < 10; ++k)
        {
          if(L[j][i][k] == 1)
            printf("*");
          else
            printf(" ");
        }

      printf(" ");
      }

      printf("\n");
    }
}
}

void help()
{
  printf("%s\n",HELP);
  system("dinyad-w Je-suis."); // ????
}