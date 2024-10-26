# TP_4_MATRICE_2_DIMENSIONS
## EXERCICE 1
On veut ecrire un programme en C qui assure un ensemble d'operations sur les matrices. Pour ce faire, réaliser les fonctions suivantes:
1.  int ** allouer(int L, int C): réserver une zone memoire de taille LxC(L:le nombre de lignes, C: le nombre de colones) et retourner un pointeur sur l'espace alloué.
2.  void liberation (int **A, int L, int C): libérer la memoire allouer pour une matrice A de taille LxC(L:le nombre de lignes, C: le nombre de colones)
3.  void lecture ( int **A, int L, int C) : lire les elements d'une matrice A de taille LxC(L:le nombre de lignes, C: le nombre de colones).
4.  void affichage(int **A, int L, int C): afficher le conntenue d'une matrice A de taille LxC(L:le nombre de lignes, C: le nombre de colones).
5.  void produit ( int **A,int **B int L, in t C): calcul le produit de deux matrices de taille LxC(L:le nombre de lignes, C: le nombre de colones) et retourne un pointeur sur la matrice resultante.
6.  void main() : tester les fonctions precedentes
