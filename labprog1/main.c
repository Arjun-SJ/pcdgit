#include<stdio.h>
#include<math.h>

int main(){
  float a,b,c;
  float d,r1,r2;


  printf("Enter a quadratic equation/n");
  scanf("%f%f%f",&a,&b,&c);

  d = b * b - 4 * a * c;

  if(d < 0)
  {
    printf("Roots are complex\n");

    printf("Roots of quadratic equation are: ");
    printf("%.3f%+.3fi",-b/(2*a),sqrt(-d)/(2*a));
    printf(", %.3f%+.3fi",-b/(2*a),-sqrt(-d)/(2*a));

    return 0;
  }
  else if(d==0)
  {
   printf("Both roots are equal.\n");

   r1 = -b /(2* a);
   printf("Root of quadratic equation is: %.3f ",r1);

   return 0;
  }
  else{
   printf("Roots are real\n");

   r1 = ( -b + sqrt(d)) / (2* a);
   r2 = ( -b - sqrt(d)) / (2* a);
   printf("Roots of quadratic equation are: %.3f , %.3f",r1,r2);
  }

  return 0;
}

