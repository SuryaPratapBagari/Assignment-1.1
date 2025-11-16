#include <stdio.h>

int main(){
    int n,m,i,j;
    printf("Enter the number of tables: ");
    scanf("%d", &n);

    printf("Enter the rows for each table: ");
    scanf("%d", &m);

    printf("\n");

    for(i=1;i<=n;i++){
        printf("The table of %d\n", i);

        for(j=1;j<=m;j++){
            printf("%d X %d = %d\n", i, j, i*j);
    
        }

        printf("\n");
    }
    return 0;
}
