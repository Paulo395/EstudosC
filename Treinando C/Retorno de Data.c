#include <stdio.h>  
 
struct data  
{  
int dia;  
int mes;  
int ano;  
};  
 
int bissexto(int ano);  
int Max_mes(struct data d);  
int testa_data(struct data d);  
 
int main(int argc,char **argv)  
{  
struct data d;  
d.dia=atoi(argv[1]);  
d.mes=atoi(argv[2]);  
d.ano=atoi(argv[3]);  
if (testa_data(d)==1) printf("%d / %d / %d é uma data válida\n",d.dia,d.mes,d.ano);;  
}  
 
int bissexto(int ano)  
{  
if ((ano%4)==0)  
{  
if ((ano%100)!=0) return 1;  
}  
if ((ano%400)==0) return 1;  
 
return 0;  
}  
int Max_mes(struct data d)  
{  
 int bi=bissexto(d.ano);  
 switch (d.mes)  
{  
case 1: return 31; break;  
case 2:  
{  
if (bi==0) return 28;  
else  return 29;  
break;  
}  
case 3: return 31; break;  
case 4: return 30; break;  
case 5: return 31; break;  
case 6: return 30; break;  
case 7: return 31; break;  
case 8: return 31; break;  
case 9: return 30; break;  
case 10:return 31; break;  
case 11:return 30; break;  
case 12:return 31; break;  
default:return 0; break;  
}  
 
}  
 
int testa_data(struct data d)  
{  
  int max_mes=Max_mes(d);  
  if (max_mes==0)  
  {  
    printf("Escolha um mes entre 1 e 12\n");  
    return 0;  
  }  
  else  
  {  
    if (d.dia<=max_mes)  
    {  
      return 1;  
    }  
    else  
    {  
      printf("data incorreta: o mes %d tem no máximo %d dias\n",d.mes,max_mes);  
      return 0;  
    }  
  }  
}
