/* Q76: Check if a matrix is symmetric.
 */
#include <stdio.h>
int main() {
    int n, a[50][50], i, j, ok = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (a[i][j] != a[j][i])ok = 0;
        }
    }
    puts(ok?"Symmetric": "Not symmetric");
    return 0;
}
