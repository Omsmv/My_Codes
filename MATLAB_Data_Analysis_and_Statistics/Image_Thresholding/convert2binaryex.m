%% convert2binary
clc
clear all
B=imread('Fake_AI_Generated_Image.png'); 
threshold=122;
binary=convert2binary(B,threshold);
imshow(binary)
title('convert2binary')
figure
bin_im=imbinarize(rgb2gray(B),122/256);
imshow(bin_im)
title('inbuit function')

%local function
function [binary]=convert2binary(B, threshold)
B=rgb2gray(B);
[x y]=size(B);
binary=zeros(x,y);
for i=1:x
    for j=1:y
        if B(i,j)>=threshold
            binary(i,j)=1;
        else
            binary(i,j)=0;
        end
    end
end
end

