clc;
clf;
clear;
function y = F(x)
    y(1) = 3*x(2)+2*x(1).^3+6*x(1).^2
    y(2) = (2/x(1).^3)+x(2)-1
endfunction
x_current = [ -3; 1 ]; //aproximação inicial
kmax = 5;
E = 0.0001;
T = 0.0001;
k = 0;
printf( "Inicial: x=%.3f, y=%.3f\n", x_current(1), x_current(2) );
while (1)
    x_last = x_current;
    J = numderivative( F, x_last );
    x_current = x_last + linsolve( J, F( x_last ) );
    e1 = ( abs( x_current(1) - x_last(1) ) <= E );
    e2 = ( abs( x_current(2) - x_last(2) ) <= E );
    v = F( x_current );
    t1 = ( abs( v(1) ) <= T );
    t2 = ( abs( v(2) ) <= T );
    k = k + 1;
    printf( "Iterações: %d\n", k )
    printf( "Solução: x=%.3f, y=%.3f\n", x_current(1), x_current(2) );
    printf( "x(k+1)-x(k): %.3f, y(k-1)-y(k): %.3f",abs( x_current(1) - x_last(1)),abs( x_current(2) - x_last(2)))
    if ( ( e1 & e2 ) | ( t1 & t2 ) | ( k >= kmax ) ) then
        break;
    end
    printf("\n")
end

