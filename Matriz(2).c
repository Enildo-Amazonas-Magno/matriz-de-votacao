#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define tam 1000

int main() {
    int n, h, i, v[tam][tam], w[tam]={0},j;
    scanf("%d",&n);
	scanf("%d",&h);
	for(j=0;j<h;j++)for(i=0;i<n;i++){scanf("%d",&v[j][i]);if(v[j][i]==1)w[i]=w[i]+1;}
	for(i=0;i<n;i++)printf("Princesa %d: %d voto(s)\n", i+1, w[i]);
	return 0;
}