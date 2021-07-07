int main()
{
   int n, p = 0, s = 1, prox, c;

   printf("insira o numero de termos\n");
   scanf("%d",&n);
   printf("os primeiros %d termos da sequencia fibonacci sao :-\n",n);
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         prox = c;
      else
      {
         prox = p + s;
         p = s;
         s = prox;
      }
      printf("%d\n",prox);
   }
} 