#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <bits/stdc++.h>
int gcd(long int a, long int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    std::srand(static_cast<unsigned int>(std::time(NULL))); 
    long int a,b,gcd_count=0;float prob;

    for (long int count=1; count <= 1000000; ++count)
    {
    	a= std::rand();b=std::rand();
    	if (a>b)
    	{
    		long int temp=a;a=b;b=temp;
		}
		long int gcd_ab = gcd(a,b);
    	if (1== gcd_ab)
    	{
    		gcd_count++; 
		}
     }
     prob = gcd_count*pow(10,-6);
     std::cout<<"\n gcd_count:"<<gcd_count<<" \t prob:"<<prob;
     float pi;
     pi = sqrt(6/prob);
     std::cout<<"\n pi:"<<pi;
  return 0;
}
