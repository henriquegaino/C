clear;
function y = F(x)
    y(1) = x(1)*x(2)-2;
    y(2) = x(1)^2-2*x(2)^2-2;
endfunction

x_current = [-2.5; -0.6]; //aproximação inicial
kmax = 10;
E = 0.0001;
T = 0.0001;

k = 0;
while (1)
    k = k + 1;
    x_last = x_current;
    J = numderivative( F, x_last );
    x_current = x_last + linsolve( J, F( x_last ) );
    e1 = ( abs( x_current(1) - x_last(1) ) <= E );
    e2 = ( abs( x_current(2) - x_last(2) ) <= E );
    v = F( x_current );
    t1 = ( abs( v(1) ) <= T );
    t2 = ( abs( v(2) ) <= T );
    printf( "Iterações: %d\n", k )
    printf( "Solução: x=%.3f, y=%.3f\n", x_current(1), x_current(2) )
    if ( ( e1 & e2 ) | ( t1 & t2 ) | ( k >= kmax ) ) then
        break;
    end
end

