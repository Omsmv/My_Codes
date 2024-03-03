function f = gumbelpdf(x,alpha,beta)
f= (exp(-((x-beta)/alpha)-exp((-x+beta)/alpha)))/(alpha);
end
