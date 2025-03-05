#include <stdio.h>
char sozluktr[100][100];
char sozluking[100][100];
int m=0;
void degerekleme();
void yazdirma();

int main(){
	int deger,sayac =0;
	do{
		int secim=0;
		if(sayac>0){
		printf("\n\n<><><><><><><><><><><><><><><><><><>\n\n"); }
		printf("Sozluge deger eklemek icin = 1\n");
		printf("Sozlugu yazdirmak icin = 2\n");
		printf("Cikmak icin = 3\n");
        printf("Seciniz 1/2/3 : ");
        scanf("%d", &secim);
        if (secim == 1) {
            degerekleme();
        }
        else if (secim == 2) {
            yazdirma();
        }
        else if (secim == 3) {
            break;
        }
        else {
            printf("\nLutfen 1/2/3 yaziniz !\n");
        }
        sayac++;
	}while(true);
	return 0;
}
void degerekleme(){
	printf("\nTr : ");
	scanf("%s",&sozluktr[m]);
	printf("\nIng : ");
	scanf("%s",&sozluking[m]);
	m++;
}

void yazdirma(){
		printf("TR     ");
		printf("                           ING   \n");
		printf("--------------------------------------------------\n");
	for(int i=0;i<m;i++){
	printf("%s",sozluktr[i]);
	printf("%30s\n",sozluking[i]);
	}
}
