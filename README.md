# exam-so-sistemas-2019-01.

##PUNTO I

threads I es la primera modificación que aparece en el parcial 
y threadsII la segunda

Los resultados fueron los siguientes: 

 ./threadsI 900
Initial value : 0
Final value   : 1800
0.177 milisegundos

./threadsI 12600025
Initial value : 0
Final value   : 25200050
84.133 milisegundos

./threadsI 1953
Initial value : 0
Final value   : 3906
0.19 milisegundos


./threadsI 3000000
Initial value : 0
Final value   : 6000000
19.482 milisegundos


./threadsI 30
Initial value : 0
Final value   : 60
0.158 milisegundos


------------------------------------------


./threadsII 900
Initial value : 0
Final value   : 1800
0.304 milisegundos

./threadsII 12600025
Initial value : 0
Final value   : 25200050
3618.283 milisegundos


./threadsII 1953
Initial value : 0
Final value   : 3906
0.707 milisegundos

./threadsII 3000000
Initial value : 0
Final value   : 6000000
838.923 milisegundos

./threadsII 30
Initial value : 0
Final value   : 60
0.168 milisegundos

Explicación: La variación en los resultados se produce, porque en el primer 
caso solo se cierra y abre la puerta una vez, pues no está dentro del for. 
Mientras que en el segundo caso, por estar en el for, esto se realiza n veces 
(siendo n el número que se manda) 


