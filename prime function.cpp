#include<iostream>
using namespace std;
void prime_number(int num)
{
    int i,count=0;
  for(i=2;i<num;i++)
  {
      if(num%i==0)
      {
          count++;
          break;
      }
  }
  if(count==0)
  {
      printf("prime\n");
  }
  else
  {
      printf("not prime\n");
  }
}
int main()
{
    int x;
    while(1){

        printf("Enter number= ");
        scanf("%d",&x);

        prime_number(x);
    }


}
