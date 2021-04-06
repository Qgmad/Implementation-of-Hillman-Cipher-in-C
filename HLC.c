#include<stdio.h>
#include<math.h>
long long int power(long long int a, long long int b,
									long long int P)
{ 
	if (b == 1)
		return a;

	else
		return (((long long int)pow(a, b)) % P);
}
void main()
{
	long long int P, G, x, a, y, b, ka, kb; 
  	printf("Enter the value of Prime Number P : \n"); 
  	scanf("%lld", &P); 

  	printf("Enter the value of Primitive root G : \n");
  	scanf("%lld", &G); 

	printf("Enter the private key 'a' for Alice : \n");
    scanf("%lld", &a); 
	x = power(G, a, P);
	
	printf("Enter the private key 'b' for Bob : \n");
    scanf("%lld", &b); 
	y = power(G, b, P);
  
  	printf("The value of P : %lld\n", P);
	printf("The value of G : %lld\n\n", G); 
  	printf("The private key a for Alice : %lld\n", a);
  	printf("The private key b for Bob : %lld\n\n", b);

	ka = power(y, a, P);
	kb = power(x, b, P);
	
	printf("Secret key for the Alice is : %lld\n", ka);
	printf("Secret Key for the Bob is : %lld\n", kb);
}

