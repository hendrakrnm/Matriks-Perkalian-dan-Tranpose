#include <stdio.h>

int main(){
    int a, b, c,d,p;
    
    printf("Pilihan Program: \n");
    printf("1. Mengalikan dua matriks dimensi 2 ukuran bebas \n");
    printf("2. Mentranspose sebuah matriks dengan ukuran yang ditentukan oleh pengguna\n\n");
    
    printf("Masukan Input [1/2]: ");
    scanf("%d", &p);
    
    if(p==1){
        printf("\nMasukan ukuran matriks M x N : ");
        scanf("%d %d", &a, &b);
        
        int  arr[a][b];
        
        printf("Masukan isi dari matriks pertama\n");
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                scanf("%d", &arr[i][j]);
            }
        }
        
        printf("MATRIKS 1:\n");
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                printf("%d\t", arr[i][j]);
            }
            printf("\n");
        }
        
        printf("\nMasukan ukuran matriks N x P : ");
        scanf("%d %d", &c, &d);
        if (c != b) printf("ukuran matriks yang anda masukan salah");
        int data[c][d];
        int hasil[a][d];
    
        printf("Masukan isi dari matriks kedua\n");
        for(int i=0; i<c; i++){
            for(int j=0; j<d; j++){
                scanf("%d", &data[i][j]);
            }
        }
        
        printf("MATRIKS 2:\n");
        for(int i=0; i<c; i++){
            for(int j=0; j<d; j++){
                printf("%d\t", data[i][j]);
            }
            printf("\n");
        }
        
        for(int i=0; i<a; i++){
            for (int j=0; j<d; j++){
                hasil[i][j]=0;
            }
        }
        
        for (int i=0; i<a; i++){
            for(int j=0; j<d; j++){
                for(int k=0; k<b; k++){
                    hasil[i][j]+=arr[i][k]*data[k][j];
                }
            }
        }
        
        printf("Perkalian matriks 1 dan matriks 2\n");
        for(int i=0; i<a; i++){
            for (int j=0; j<d; j++){
                printf("%d\t", hasil[i][j]);
            }
            printf("\n");
        }
        
    } else if(p==2){
        printf("\nMasukan ukuran matriks M x N: ");
        scanf("%d %d", &a, &b);
        printf("Masukan isi dari matriks\n");
        int arr[a][b];
        int arrT[b][a];
        
        for(int i=0; i<a; i++){
            for (int j=0; j<b; j++){
                scanf("%d", &arr[i][j]);
            }
        }
        
        printf("Matriks sebelum tranpose: \n");
        for(int i=0; i<a; i++){
            for (int j=0; j<b; j++){
                printf("%d\t", arr[i][j]);
            }
            printf("\n");
        }
        
        //proses tranpose
        for(int i=0; i<a; i++){
            for (int j=0; j<b; j++){
                arrT[j][i]=arr[i][j];
            }
        }
        printf("\nMatriks setelah tranpose: \n");
        for(int i=0; i<b; i++){
            for (int j=0; j<a; j++){
                printf("%d\t", arrT[i][j]);
            }
            printf("\n");
        }
        
        
    }
}

