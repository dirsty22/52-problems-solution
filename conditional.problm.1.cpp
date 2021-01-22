
#include<iostream>
using namespace std;

int main()
{
    int number_input,num,possitive=0,negative=0;
    scanf("%d",&number_input);
    printf("Enter any number input=");
    for(int i=0;i<number_input;i++)
    {

       scanf("%d",&num);

    if(num<0)
    {
        negative++;
    }

    if(num>0){
        possitive++;
    }
    }
    printf("Total  negative=%d\n",negative);
    printf("Total possitive number=%d\n",possitive);





}
