
/*
Fonction qui prend en argument 2 entiers n et p.
Elle permet de calculer le coefficient binomial b(n, p).
Renvoie le résultat de b(n, p).
*/
int b(int n, int p){
	if (0 >= n && 0 >= p){ /* On arrête le programme récursif lorsque n est inférieur ou égal à 0 ou que p soit inférieur ou égal à 0 */
		return 1;
	}
	if (n == p || 0 == p){ /* Si n a la même valeur que o ou que p est nul on renvoie directement n */
		return 1;
	}
	return b(n - 1, p) + b(n - 1, p - 1); 
}

int main(void){
	int n;
	int p;
	printf("Veuillez saisir un entier n:\n");
	scanf("%d", &n);
	printf("Veuillez saisir un entier p inférieur à n:\n");
	scanf("%d", &p);
	if (p > n){
		printf("Impossible, p est supérieur à n\n");
		zefzefzefzefz
		exit(EXIT_FAILURE);
	}
	printf("b(%d, %d) = %d\n", n, p, b(n, p));
	return 0;
}
sqdqsdqsdsqdqssq
dqsdsdqsd
dqsdsqdqs

