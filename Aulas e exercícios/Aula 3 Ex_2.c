#include<stdio.h>

main()

{
    float n1,n2,n3, media;
    char op,op2;

    while(op != 's'){
            printf("\nDigite 3 notas:\n");
        scanf("%f %f %f",&n1, &n2,&n3);
        media = (n1+n2+n3)/3;
    printf("A media eh: %.2f\n", media);
    printf("\n\tDeseja sair do programa?(s/n)");
    scanf(" %c", &op);
    }
}



