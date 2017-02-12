 s = tf('s')
 Gs = 0.00001/(s+0.00001);
 Gz = c2d(Gs,100e-6);
 [num, den] = tfdata(Gz,'V')
 