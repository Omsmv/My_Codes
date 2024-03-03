%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
clc
clear all
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%
data=xlsread('data');
x=data(:,2:11);          % removing the year and y column
data_mean=mean(x);
std_data=(x-data_mean);  % standardisation of the data 
%% Why we standardisation the data???
subplot(1,2,1)
plot(x);
subplot(1,2,2)
plot(std_data);
%%
V = cov(std_data);       % Calculate the Covariance matrix; V will be a square matrix
%%
[U,E] = eig(V);          % U eigen vector and E eigen values
COEFF=fliplr(U);         % sort by decreasing variance
LATENT = flip(diag(E)); % sort by decreasing variance
SCORE=std_data*COEFF;
EXPLAINED=LATENT/sum(LATENT)*100;
%// with pca function
[coeff,score,latent,~,explained] = pca(std_data);  % pca(X) uses singular value decomposition instead of eigenvalue decomposition
coeff
COEFF
score
SCORE
latent
LATENT
explained
EXPLAINED
%[coeffc,scorec,latentc] = pcacov(V);
%coeffc