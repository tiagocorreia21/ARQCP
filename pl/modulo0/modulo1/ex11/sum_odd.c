int sum_odd(int *p) {

   int n = *p;
   
   int sum = 0;

   p++;

   for(int i = 0; i < n; i++) {

    if (*p % 2 != 0) {
        sum += *p;
    }
    p++;

   } 

   return sum;
}