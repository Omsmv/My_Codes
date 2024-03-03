x = 0:.2:10;
alpha = 0.5;
fx = (1/alpha) * exp(-x/alpha);
plot(x,fx);
hold on 
fy = fx./(2*x);
plot (x,fy)
xlabel('fx'); ylabel('fy'); title('assignment_1_5');
