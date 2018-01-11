#include<stdio.h>
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
    x1=10*x1;
    x1=x1-5;
    double x2 = ((double)rand())/((double)RAND_MAX);
    x2=10*x2;
    x2=x2-5;
    
   f=exp(-pow(1-x1,2)-100*pow(x2-pow(x1,2),2));
   sum+=f;  
}
   
    integral=(4.0*sum)/N;


   // printf("%d %e\n",N,pi-integral);
    printf("%ld %e\n",N,log(integral));
    return 0;
}

