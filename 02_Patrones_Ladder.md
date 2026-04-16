# Patrones Basicos de Diseño

Los temporizadores son bloques que nos permiten retardar una señal. 

## 01 Timer On Delay (TON)
![timer on delay](/img/01_TON.png)
Se usa para retardar la activacion de una salida en true por un periodo fijo despues de tener una entrada en true.
Este bloque necesita una variable de entrada de tipo time la cual agregamos en el bloque de `TIME`. En este caso en
OPEN_PLC vamos a agregar una variable que se llame `Tiempo` de tipo `TIME` y en el initial value vamos a configurarlo 
5s que podemos guardar como `T#5s`

Para completar este ejercicio vamos a agregar un contacto a la cual llamaremos `START` y agregaremos una bobina que llamaremos
Output. Por ultimo vamos a agregar una variable que nos va a contar el tiempo el cual puedo llamar `Time_Counter` a diferencia
de la variable `Tiempo` esta no necesita un valor inicial
![TOn confiure](/img/02_Config_TON.png)

Para confirmar la correcta configuracion podemos usar el debuger, encenemos la simulacion y habilitamos el debu de la variable
para este ejercicio vamos a monitoriar la salida y el contador del timer para revisar en que momento se habilita la salida.
![TON Delat Graph0](/img/03Delay_Time.png)

Por ultimo podemos configurar este timer para que el mismo timer habilite defierentes timer
