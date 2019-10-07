#include<stdio.h>
void main()
 {
int a=100;// atmina paradisies mainigais a (izmers 1byte, saturs 0110 0100)
printf("Operacija >>: %d>>1 rezultats %d\n",a,a>>1); // sagaidam skaitli 50

int b;// atmina paradisies mainigais b (izmers 1 byte, satrus ???? ????)
printf("b mainiga \"sakuma\" stavoklis (uzreiz pec deklaresanas) : %d\n" ,b);

b=a>>2;// seit ir divas operacijas - =(prieskirsana) un >>(bidisana pa bitiem pa labi)
printf("Operacija >>: %d>>%d rezultats %d\n" , a,2,b);// sagaidam skaitli 25

int c;
printf("\n\nPapetisim >> operaciju\n-------------------------\n");
printf("Cienijamais lietotaj, ludzu ievadi operacijas 1. operandu: ");
scanf("%d", &a);
printf("Cienijamais lietotaj, ludzu, ievadi operacijas 2. operandu: ");
scanf("%d", &c);
b=a>>c;
printf("-------------------------\nSkaties, kas ir sanacis: %d\n" ,b);
}
