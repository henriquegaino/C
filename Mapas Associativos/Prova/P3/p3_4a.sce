clf;
clear;

function y=f(x)
    y=-(2*x.^3+6*x.^2)/3
endfunction

function y=g(x)
    y=1-(2/x.^3)
endfunction

plot(-5.9:0.1:6, f,"b");
plot(-5.9:0.2:6, g,"r");

xgrid();
ga = gca();
ga.children.children(1).thickness = 3;
ga.data_bounds = [-6 -6; 6 6];
ga.tight_limits = "on";
