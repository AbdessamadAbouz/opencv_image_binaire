# Segmentation d'image au niveau du vert
La segmentation d'image est une opération de traitement d'images qui a pour but de rassembler des pixels entre eux suivant des critères pré-définis.\
Dans notre cas, le critére pris en considération est de segmenter l'image au niveau du couleur vert, cela en prennant pour chaque pixel d'un image couleur (Rouge, Vert, Bleu) et de prendre 0 pour ce pixel si la valeur du pixel au niveau du vert est inférieure a 127, et 1 si est supérieure a 127.\
Pour le calcule du temps d'excution, on vas faire manuellement.Tout d'abord, nous allons créer une variable qui prend le temps du système au début de l'execution, puis on vas créer une autre variable a la fin d'execution qui prend aussi le temps du système, ensuite nous allons comparé entre les deux en la multiplions en 1000 pour la transferer du ms en s.\
Voici la ligne du code pour le calcule du temps : \
Temps_dexecution = (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000;
# Exemple d'image segmenter
![alt text](https://raw.githubusercontent.com/AbdessamadAbouz/opencv_image_binaire/master/RGB.png)\
Dans ce cas, l'image a été segmenter just au niveau du vert, cela vas garder just un seul cercle au niveau de la partie verte de l'image, voici le résultat aprés la segmentation: \
![alt text](https://raw.githubusercontent.com/AbdessamadAbouz/opencv_image_binaire/master/RGB-Binaire.png) \

pour cette exemple, le temps d'execution était : 2.954s \
# Autre exemple 
![alt text](https://raw.githubusercontent.com/AbdessamadAbouz/opencv_image_binaire/master/Green-Rose.jpg)
Dans cette exemple, on a pris une image d'une fleure qui est en vert est on a essayé de la segmenter aussi au niveau de vert et voici le résultat donné : \
![alt text](https://raw.githubusercontent.com/AbdessamadAbouz/opencv_image_binaire/master/Green-Rose-Binaire.jpg)\
Pour cette exemple, le temps d'execution était : 8.137s \
