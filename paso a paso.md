# So_long
Videojuego

Comienza a ejecutarse en [main.c]

int	main(int argc, char **argv) -> en el se va a verificar que haya dos argumentos y enviamos el argumento 1 a <ft_startgame> con la estructura vacía. Se encuentra en [make_game.c]


[make_game.c]
void startgame(char *map (lo que entendemos como argv[1]) y la estructura) -> Primero nos lleva a la función que chequeará el archivo para que sea correcto. es <ft_checkmap> en [check_game.c]

[check_game.c]
void ft_checkmap(mapa y estructura). 
	Primero pasamos el argumento a la estructura en el mapa revisando antes en <ft-checkname> en [check-name.c] el archivo termina en ".ber", si no es así cierra el programa.
	Abrimos el archivo y lo enviamos a <ft-read> en [f-map.c]
	
[f-map.c]
void ft-read(estructura) En ella va a leer el mapa linea a linea donde va a ir ingresando con un <ft-split> en la estructura en el apartado del mapa. libera el resto y finaliza la función.

[check-game.c]
void ft_checkmap
	continuamos iniciando la estructura con <ft-initstruct> en [main.c]
	
[main.c]
void ft-initstruct(estructura). Aquí establecerá los enteros en los contadores y null en las imágenes que hay que colocar. finalizando la función.

[check-game.c]
void ft-checkmap ->
	ahora se introduce la estructura en <ft-controlmap> en [f-map.c] para revisar que sea correcto.

[f-map.c]
void ft_controlmap -> se inicia con la estructura revisando que todos los elementos se adecuen a cumplir las normas de la pantalla.
	primero se dirige a la función <ft-symmetric> en [check-game.c] para chequear que sea simétrico el mapa.

[check-map.c]
void ft-symmetric -> en ella va a revisar que dimensión tendrá la primera línea estableciéndola como límite. pasara a la siguiente línea y revisará qeu tenga la misma cantidad, si no coinciden dará fallo. una vez que llegue a la última línea, establecerá las dimensiones en la estructura. finalizando la función si todo va bien.

[f-map.c]
void ft-controlmap ->
	continuamos realizando la función <ft-bordermap> en [check-game.c]
	
[check-game.c]
void ft-bordermap -> en ella va a revisar que todo el perímetro se encuentre con el carácter "1". primero lo hace con las líneas primera y la última y después continuará con los laterales centrales. Al menos, tiene que ser todos esos "1" para que se encuentre la pantalla cerrada.

[f-map.c]
void ft-controlmap ->
	ahora se realiza la función <ft-elementsmap> 
	
void ft-elementsmap -> Se realiza para contabilizar la cantidad de muros, jugadores, monedas, puertas, y suelo que hay. Si hubiera algún elemento que no sea de esa tipología, se cerraría el programa. Aprovechamos para establecer el objetivo de monedas a recoger.


void ft-controlmap ->
	Ahora revisamos que haya 1 solo jugador, 1 sola puerta de salida, y al menos 1 moneda. Sino dará error y finaliza el programa. Con todo correcto termina la función volviendo a <ft-statgame> en [make-game.c]
	
[make-game.c]
ft-startgame ->
	una vez chequeado todos los elementos nos dirigimos a abir la pentalla del juego con <ft-openwindow> 
	
	



