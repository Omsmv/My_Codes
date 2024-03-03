%%
clc
clear all
%%
tic
img = uint16(imread('LC08_L1TP_146044_20201226_20201226_01_RT_B5.TIF'));
%gimg = img(:, :, 5);
gimg = img;
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