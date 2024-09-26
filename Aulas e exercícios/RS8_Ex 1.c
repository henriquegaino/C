#include<stdio.h>

main()

{
   int i,vet[50],n,v,qtd=0;
   char op;

   printf("Numero:");
   scanf("%d",&n);

   for(i=0;i<n;i++)
       {
           printf("Posicao[%d]:",i);
           scanf("%d",&vet[i]);
       }

   do
   {
       printf("Digite um numero:");
       scanf("%d",&v);

       for(i=0;i<n;i++)
       {
           if(vet[i]==v)
            qtd=qtd+1;
       }
       printf("O numero %d aparece %d vezes!\n",v,qtd);
       qtd=0;

       do
       {
          printf("Voce deseja sair do programa?(s/n)");
          scanf( "%c",&op);
       }
       while(op != 's' && op != 'n');
   }
   while(op == 'n');
}
