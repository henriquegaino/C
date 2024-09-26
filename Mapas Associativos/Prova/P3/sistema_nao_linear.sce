clf;
clear;

function Y=f(x)
    Y = sqrt(10+x.^2)
endfunction

function Y=g(x)
    Y = -sqrt(10+x.^2)
endfunction

function w=h(x)
    w = sqrt(20-2*x.^2)
endfunction

function w=i(x)
    w = -sqrt(20-2*x.^2)
endfunction

function y = F(x)
    y(1) = (x(1).^2)-(x(2).^2)+10;
    y(2) = (2*x(1).^2)-(x(2).^2)-20;
endfunction

x_current = [ -2.5; -0.6 ]; //aproximação inicial
kmax = 10;
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
    if ( ( e1 & e2 ) | ( t1 & t2 ) | ( k >= kmax ) ) then
        break;
    end
end

printf( "Iterações: %d\n", k )
printf( "Solução: x=%.3f, y=%.3f\n", x_current(1), x_current(2) );

plot( -3.163:0.0001:3.163, f, -5:0.0001:5, g,-3.163:0.0001:3.163, h,-5:0.0001:5, i, )
//plot( -5:0.0001:5, g, "r" )
//plot( -5:0.0001:5, h, "b" )
//plot( -5:0.0001:5, i, "b" )

ga = gca();
ga.data_bounds = [-7 -7; 7 7];
ga.tight_limits = "on";
