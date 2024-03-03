PDF = gumbelpdf(x,alpha,beta);
x = Narmada(:,2);
scatter(x,gumbelpdf(x,alpha,beta))