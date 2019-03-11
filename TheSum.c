#include <stdio.h>

int main() {

  int num, V;

  FILE *f = fopen("sum.dat", "r");

      if (f != NULL) {

        fscanf(f, "%d", &V);
        fprintf(stdout, "il valore al interno del file è pari a %d", V);
      
        fclose(f);
      }else{
        fprintf(stderr, "error 404 \n");
        V=0;
      }

      scanf("%d", &num);

      num = num+V;
      fprintf(stdout,"il nuovo valore è == %d\n", num);


  return 0;
}
