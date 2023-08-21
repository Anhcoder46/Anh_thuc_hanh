#include <stdio.h>
 
int main()
 {
   int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int i, trungbinh = 0, size;
   printf("In phan tu cua mang: \n");
   for(i = 0; i < size; i++) {
       printf("%d ", a[i]);
   }
   		for(i = 0; i < size; i++) {
      trungbinh = trungbinh + a[i];
    }
      printf("\nGia tri trung binh cua mang la: %d", trungbinh);
  
   return 0;
}