function xout = threshold(xin,t)
i = find(xin > t);
xout = xin(i);