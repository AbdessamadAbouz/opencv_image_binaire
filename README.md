# opencv_image_binaire
La segmentation d'image est une opération de traitement d'images qui a pour but de rassembler des pixels entre eux suivant des critères pré-définis.
Dans notre cas, le critére pris en considération est de segmenter l'image au niveau du couleur vert, cela en prennant pour chaque pixel d'un image couleur (Rouge, Vert, Bleu) et de prendre 0 pour ce pixel si la valeur du pixel au niveau du vert est inférieure a 127, et 1 si est supérieure a 127.
