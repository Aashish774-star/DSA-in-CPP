class solution{
   public:
   int sudtractproductAndSum(int n){
      int product=1,sum=0;
      while (n)
      {
         product=product *(n%10);
         sum+=(n%10);
         n /=10;
      }
      return product - sum;
   }
};