clear all;
close all;
clc;

%% read lena original
row = 128;
col = 128;
fin=fopen('Lena128x128g_8bits.raw','r');
I=fread(fin,row*col,'uint8=>uint8'); 
Z=reshape(I,row,col);
Z=Z';
subplot(121),
k1=imshow(Z);


%% read lena blurred
row = 128;
col = 128;
fin=fopen('blurred_lena.raw','r');
I=fread(fin,row*col,'uint8=>uint8'); 
Z=reshape(I,row,col);
Z=Z';
subplot(122),
k2=imshow(Z);
