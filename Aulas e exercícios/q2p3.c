double integrate_f(double a, double b)
{
    int i,n=100000;
    double soma=0.0

    for(i=0;i<n-1;i++)
    {
        soma=soma+f(a+i*((b-a)/n))
    }
    return ((b-a)/n)*(((f(a)+f(b))/2)+soma);
}
