
#include <stdio.h>

void merge_sort(int m, int n, int a[], int aux[]) {
    if (n <= m) {
        return;    
    }
    int mid = (m + n) / 2;
    
    merge_sort(m, mid, a, aux);     
    merge_sort(mid + 1, n, a, aux);   

    int k; 
	int pointer_right = mid + 1; 
	int pointer_left = m;         
     

 
    for (k = m; k <= n; k++) {
        if (pointer_left == mid + 1) {      
            aux[k] = a[pointer_right];
            pointer_right++;
        } else if (pointer_right == n + 1) {       
            aux[k] = a[pointer_left];
            pointer_left++;
        } else if (a[pointer_left] < a[pointer_right]) {     
            aux[k] = a[pointer_left];
            pointer_left++;
        } else {  
            aux[k] = a[pointer_right];
            pointer_right++;
        }
    }

    for (k = m; k <= n; k++) {  
        a[k] = aux[k];
    }
}


int main() {
  int a[100], aux[100], x, m, d, swap;
 
  printf("Masukkan berapa banyak array:\n");
  scanf("%d", &x);
 
  printf("Masukkan %d angka \n", x);
 
  for (m = 0; m < x; m++)
    scanf("%d", &a[m]);
 
  merge_sort(0, x - 1, a, aux);
 
  printf("Setelah diurutkan:\n");
 
  for (m = 0; m < x; m++)
     printf("%d\n", a[m]);
 
  return 0;
}
