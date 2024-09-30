# get_next_line

Este código implementa la función get_next_line, la cual, a partir de un FD devuelve la línea leída.

Uno de los principales propósitos de la función, además de su funcionalidad, es el uso de variables ***estáticas***, que son aquellas que permanecen en memoria durante toda la ejecución del programa, pudiendo ser su ámbito limitado al archivo, función o bloque en el que se defina.

El prototipo de llamada de la función es:
~~~
char *get_next_line(int fd);
~~~

Esta función permite, ante llamadas repetitivas de la función get_next_line (por ejemplo, usando un
bucle), leer el contenido completo del archivo hacia el que apunta el file descriptor, línea a línea, hasta el final.

Con cada llamada, la función devuelve la línea que se acaba de leer, guardando la "posición" para la siguiente lectura.

En caso de que no haya nada más que leer o si ha ocurrido un error, la función devuelve NULL.

Esta función se comporta adecuadamente tanto en lecturas desde un archivo como ante lecturas de stdin.
