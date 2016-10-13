#include<stdio.h>
#define N 8

void init_matrice(char mat_1[N][N]){
	int i,j;	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			mat_1[i][j]='.';
		}
	}
	
}
void afficher_matrice(char mat_2[N][N]){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%c ",mat_2[i][j]);
			}
		printf("\n");
	}
	
}
int coord_valides(int a,int b){
	if((a<N&&a>0)&&(b<N&&b>0)){
		return 1;
	}
	else 
		return 0;
}
void tour(char mat_2[N][N],int c,int d){
	int i,j;
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			mat_2[c-1][j]='*';
		}
		mat_2[i][d-1]='*';
	}
	mat_2[c-1][d-1]='t';
}
void main(){
	char mat[N][N];
	int x,y,z;
	scanf("%i%i",&x,&y);
	z=coord_valides(x,y);
	if(z!=1){
		printf("Erreur de saisie!\n");
	}
	else{
	init_matrice(mat);
	tour(mat,x,y);
	afficher_matrice(mat);
	}
}