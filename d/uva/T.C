#include<stdio.h>
#include<string.h>
struct CarTypes
{
    int no;
    char name[30]="supra";
    float w;

}t,F;
typedef struct CarTypes CT;

int main()
{
   // t.name="supra";
   strcpy(t.name,"Suora");
    t.no = 4;
    t.w=500;
     CT my =t;
     printf("%s\t%d\t%f\n",my.name,my.no,my.w);
}
