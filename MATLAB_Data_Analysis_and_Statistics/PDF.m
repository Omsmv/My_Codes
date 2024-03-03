x=0:0.1:5;
fx(x<=3)=1/4
xsub= 3:.1:5
fx(x>=3)=(5/8)-(xsub/8)
plot(x,fx)
mean(fx)
axis([0 6 0 .4])
xlabel('X');ylabel('fx')
title('Probablity Density Function')