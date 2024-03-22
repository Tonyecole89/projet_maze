# 2023_maze - Code C

Cette fois le but était ici était de pouvoir lire une "carte" qui est un labyrinthe en deux dimensions dans un fichier. 
La carte du labyrinthe contient des murs (#), des chemins où circuler (.), une entrée (S) et une sortie (G). 
En premier lieu, on lit la carte labyrinthe en commançant par l'entrée et l'on retire les petits points quand l'on passe par dessus, les petits points étant un chemin accessible où l'on est jamais passer par dessus auparavant. On doit aussi savoir si il y a une sortie, il ne faudrait pas que le programme tourne en boucle sans jamais s'arrêter car la sortie n'est pas accessible. 
Et au final un programme de propagation de l'entrée jusqu'à la sortie. On assigne à chaque case la distance au point de départ modulo 10, de sorte que on ait un chiffre de 0 à 9 dans chaque case. 

