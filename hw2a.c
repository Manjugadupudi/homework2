nclude<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char** argv)
{
  const double pi = 3.141592653589793;
  int N=atoi(argv[1]);
  double sum=0.0, integral=0.0;
  srand(time(NULL));
  for(int i=0;i<N;i++){
    double f=0.0;
    double x1 = ((double)rand())/((double)RAND_MAX);
    x1=2*x1;
    x1=x1-1;
    double x2 = ((double)rand())/((double)RAND_MAX);
    x2=2*x2;
    x2=x2-1;
    
   if(((x1*x1)+(x2*x2))<=1)
	f+=1;
   else
	f+=0 
}
   
    integral=(4.0*sum)/N;


   // printf("%d %e\n",N,pi-integral);
    printf("%e\n",pi-integral);
    return 0;
}
