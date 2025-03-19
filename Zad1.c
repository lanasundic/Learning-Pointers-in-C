//Zadatak 6 – Dijagonale
//Za date brojeve M i N kreirati matricu A dimenzija MxN, kao u primjeru. 

/*
0  1  3  6 10 14
2  4  7 11 15 18
5  8 12 16 19 21
9 13 17 20 22 23
*/

int Dijagonale(int M, int N, int matr[M][N]) {
    int ctr = 0;
    for(int k = 0; k < N; k++){
        for(int i= 0; i < k; i++) {
            matr[i][k] = ctr++;     //ctr++ --> ctr smjesti u matr a zatim povecaj ctr 
                                    //++ctr --> ctr povecaj a zatim smjesti u matr
     //       ctr++;
            printf("%d,%d = %d\n", i, k, ctr-1);
        }
    }
}

int main() {

    int M,N;
    scanf("%d", &M);
    scanf("%d", &N);

    int matr[M][N];

    for(int k = 0; k < M; k++){
        for(int i= 0; i < N; i++) {
            matr[k][i] = 0;
        }
    }

    int x = Dijagonale(M, N, matr);


}