#include<stdio.h>
#include<string.h>

//a-z:97 ao 122
//A-Z:65 ao 90

main()

{
    FILE *blue;
    blue = fopen("music.txt","r");

    int i,j,a,qtd;
    int qa=0,qb=0,qc=0,qd=0,qe=0,qf=0,qg=0,qh=0,qi=0,qj=0,qk=0,ql=0,qm=0,qn=0,qo=0,qp=0,qq=0,qr=0,qs=0,qt=0,qu=0,qv=0,qx=0,qw=0,qy=0,qz=0;
    char verso[48][50],letras[26];

    for(i=0;i<48;i++)
    {
        fscanf(blue,"%[^\n]\n",verso[i]);
    }

    for(i=0;i<48;i++)
    {
        qtd = strlen(verso[i]);
        for(j=0;j<qtd;j++)
        {
            if(verso[i][j]=='a' || verso[i][j]=='A' )
                qa=qa+1;

            else if(verso[i][j]=='b' || verso[i][j]=='B' )
                qb=qb+1;

            else if(verso[i][j]=='c' || verso[i][j]=='C' )
                qc=qc+1;

            else if(verso[i][j]=='d' || verso[i][j]=='D' )
                qd=qd+1;

            else if(verso[i][j]=='e' || verso[i][j]=='E' )
                qe=qe+1;

            else if(verso[i][j]=='f' || verso[i][j]=='F' )
                qf=qf+1;

            else if(verso[i][j]=='g' || verso[i][j]=='G' )
                qg=qg+1;

            else if(verso[i][j]=='h' || verso[i][j]=='H' )
                qh=qh+1;

            else if(verso[i][j]=='i' || verso[i][j]=='I' )
                qi=qi+1;

            else if(verso[i][j]=='j' || verso[i][j]=='J' )
                qj=qj+1;

            else if(verso[i][j]=='k' || verso[i][j]=='K' )
                qk=qk+1;

            else if(verso[i][j]=='l' || verso[i][j]=='L' )
                ql=ql+1;

            else if(verso[i][j]=='m' || verso[i][j]=='M' )
                qm=qm+1;

            else if(verso[i][j]=='n' || verso[i][j]=='M' )
                qn=qn+1;

            else if(verso[i][j]=='o' || verso[i][j]=='O' )
                qo=qo+1;

            else if(verso[i][j]=='p' || verso[i][j]=='P' )
                qp=qp+1;

            else if(verso[i][j]=='q' || verso[i][j]=='Q' )
                qq=qq+1;

            else if(verso[i][j]=='r' || verso[i][j]=='R' )
                qr=qr+1;

            else if(verso[i][j]=='s' || verso[i][j]=='S' )
                qs=qs+1;

            else if(verso[i][j]=='t' || verso[i][j]=='T' )
                qt=qt+1;

            else if(verso[i][j]=='u' || verso[i][j]=='U' )
                qu=qu+1;

            else if(verso[i][j]=='v' || verso[i][j]=='V' )
                qv=qv+1;

            else if(verso[i][j]=='x' || verso[i][j]=='X' )
                qx=qx+1;

            else if(verso[i][j]=='w' || verso[i][j]=='W' )
                qw=qw+1;

            else if(verso[i][j]=='y' || verso[i][j]=='Y' )
                qy=qy+1;

            else if(verso[i][j]=='z' || verso[i][j]=='Z' )
                qz=qz+1;
        }
    }
    printf("A: %d\nB: %d\nC: %d\nD: %d\nE: %d\nF: %d\nG: %d\nH: %d\nI: %d\nJ: %d\nK: %d\nL: %d\nM: %d\nN: %d\nO: %d\nP: %d\nQ: %d\nR: %d\nS: %d\nT: %d\nU: %d\nV: %d\nX: %d\nW: %d\nY: %d\nZ: %d\n",qa,qb,qc,qd,qe,qf,qg,qh,qi,qj,qk,ql,qm,qn,qo,qp,qq,qr,qs,qt,qu,qv,qx,qw,qy,qz);
    return 0;
}
