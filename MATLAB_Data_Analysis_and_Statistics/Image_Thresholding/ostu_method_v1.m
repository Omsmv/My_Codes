%%
clc                % To clear the Command Window
clear all          % To clear the Workspace
%%
B=imread('Fake_AI_Generated_Image.png');  % Reading the RGB image
B=rgb2gray(B);                            % Converting the RGB image to Grayscale image
%%
V=reshape(B,[],1);                        % Converting the array (B) to a column vector (V)
H=hist(V,0:255);                          % Computing the histogram of V
%%
for i=0:255
 [wbk,mbk,varbk]=calculate(H,1,i);
 [wfg,mfg,varfg]=calculate(H,i+1,255);
 sigma_S_w(i+1)=(wbk*varbk)+(wfg*varfg);  %Equation 13
 sigma_S_b(i+1)=(wbk*wfg)*((mfg-mbk)^2);  %Equation 14
end
lambda_obj_func=(sigma_S_b./sigma_S_w); %First objective function of Equation 12.
 %Find the max value in the array (i.e., minimum of the weighted within-class variance ) 
 [value,k]=min(sigma_S_w);        % k is the threshold level
 tval=(k)/256;
 bin_im=imbinarize(B,tval);
 subplot(1,2,1)
 imshow(bin_im);
 title('Step by step Implementation')
 subplot(1,2,2)
 temp=graythresh(B);
 temp_bin_im=im2bw(B,temp);
 imshow(temp_bin_im)
 title('Using inbuilt Matlab function (graythresh)')
 
%% Function for calculating the zeroth (probability), first (mean) and second (variance) moment
 function [w,mean,var]=calculate(H,m,n)
i=[0:255];
%Weight Calculation
N=sum(H); %n1+n2+n3+...+nL
w=sum(H(m:n))/N; % (summation of ni)/N; 
%Mean Calculation
     value=(i(m:n).*H(m:n))./N;
     total=sum(value); %Mean
     mean=total/w;     %Weighted mean
%Variance calculation.
    value2=(i(m:n)-mean).^2;
     numer=sum(value2.*H(m:n))/N;
     var=numer/w;
 end
   
