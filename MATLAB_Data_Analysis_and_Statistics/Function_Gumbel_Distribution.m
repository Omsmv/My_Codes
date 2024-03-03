function p = gumbelfit(x)
sigmahat = std(x);
muhat = mean(x);
alphaHat = sqrt(6)*(sigmahat)/pi;
betaHat = muhat-0.45*sigmahat;
p = [alphaHat betaHat]