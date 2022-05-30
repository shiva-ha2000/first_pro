 #include <iostream>
using namespace std;
int add (int num_a,int num_b)
{


int a=2 , b=4;
int** ptr =new int *[a];
ptr[0]= new int [b];

for ( int i=0; i<a; i++)
{
    ptr[i]=new int [b];
    b= num_a + num_b;
}
//b= num_a + num_b;
for( int i=0; i<a; i++)
{
    delete[] ptr[i];
    ptr[i]=nullptr;
}
return b;
}

int min (int num_c , int num_d)
{
    int a =3, b=5;
int h_min;
int *p= new int[a*b];
int** q =new int* [a];
for (int i=0; i<a; i++)
{

   q[i]= p+b*i;
   p[i]=num_c - num_d;
    h_min=p[i];
}
return h_min;

   delete[] q;
   q = nullptr;
   delete[] p;
   p = nullptr;
}
 int main()
 {
int num_a , num_b , num_c , num_d ;
//add
cout<<"enter num 1:";
cin>>num_a;
cout<<"enter num 2:";
cin>>num_b;
cout<<add(num_a,num_b)<<endl;
//min
cout<<"enter num 3:";
cin>>num_c;
cout<<"enter num 4:";
cin>>num_d;
cout<<min(num_c,num_d)<<endl;
return 0;
 }
