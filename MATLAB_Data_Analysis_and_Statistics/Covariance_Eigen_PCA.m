"Roll No. 18376"

data = importdata("Q1_Data.mat");

mean_data = mean(data)
s_data = (data - mean_data)

cvar_data = cov(s_data)

[eig_val, eig_vec] = eig(cvar_data)

[coeff, latent] = pcacov(cvar_data)