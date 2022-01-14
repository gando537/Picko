#include <stdio.h>
#include <stdlib.h>

struct player {
	int	tab[32];
	static int indiceCourant;
	char *nomJoueur;
};

void initialiseTableau(int tab[]){
	int	v, n, k;
	k = n = 1;
	v = 21;
	for (int i = 0; i <= 32; i += 2){
		tab[i] = v++;
		tab[i + 1] = n;
		if(k++ == 4) {
			n++;
			k = 1;
		}
	}
}

void afficheTableau(int tab[]){
	printf("\n");
	for (int i = 0; i < 16; i++)
		printf("---- ");
	printf("\n");
	for (int i = 0; i <= 31; i += 2)
		printf("|%d| ", tab[i]);
	printf("\n");
	for (int i = 0; i < 16; i++)
		printf("---- ");
	printf("\n");
	for (int i = 1; i <= 31; i += 2)
		printf("| %d| ", tab[i]);
	printf("\n");
	for (int i = 0; i < 16; i++)
		printf("---- ");
	printf("\n\n");
}

int choixNombreJoueur() {
	int nombreJoueur;
	while(1){
		printf("Choisir nombre de joueur [2,7] : ");
		scanf("%d", &nombreJoueur);
		if(nombreJoueur >= 2 && nombreJoueur <= 7)
			return (nombreJoueur);
	}
}

void initialisePlayer(struct player *p, const int nombreJoueur){
	int i = 0;
	char *numero[] = {"1","2","3","4","5","6","7"};
	while(i < nombreJoueur){
		p[i].nomJoueur = malloc(sizeof(char) * 10);
		strcpy(p[i].nomJoueur, "Joueur");
		strcat(p[i].nomJoueur, numero[i]);
		p[i].indiceCourant = 0;
		i++;
	}
}

int Joueur(){
	int compteur = 0;
	srand(time(NULL));
}

void Jeu(int t[], struct player *p, const int nombreJoueur, int longueurTableau){
	int indice = 0;
	int res = 0
	while(longueurTableau > 0){

	}
}

int	main()
{
	static int longueurTableau = 16;
	const int nombreJoueur = choixNombreJoueur();
	int t[32];
	struct player p[nombreJoueur];
	initialiseTableau(t);
	afficheTableau(t);
	return (0);
}