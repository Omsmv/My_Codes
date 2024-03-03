%%
clc
clear all
%%
tic
img = imread("simple.png");
gimg = rgb2gray(img);
subplot(221)
imshow(gimg)
title('Original image')
Gx = [+1 +2 +1; 0 0 0; -1 -2 -1];
Gy = Gx';
grad_x = conv2(gimg, Gx);
grad_y = conv2(gimg, Gy);

subplot(222)
imshow(uint8(grad_x))
title('Gradiant x-direction')

subplot(223)
imshow(uint8(grad_y))
title('Gradiant y-direction')

G = sqrt(grad_x.^2 + grad_y.^2);
subplot(224)
imshow(uint8(G))
title('Gradiant magnitude')
toc