 #include <iostream>
using namespace std;

//variable global
int a=2 , b=4;
int** ptr =new int *[a];
int *p = new int[a*b];
int** q =new int* [a];
//Addition function with pointer
int add (int num_a,int num_b)
{

ptr[0]= new int [b];

for ( int i=0; i<a; i++)
{
    ptr[i]=new int [b];
    b= num_a + num_b;
}
//b= num_a + num_b;
//restore_add_ref(ptr);
return b;
}


//restore function add
void restore_add()
{
    for (int i=0; i<a; i++)
    {
        delete ptr[i];
        ptr[i]=nullptr;
    }
}

//restore Addition function with Reference
void restore_add_ref(int & d)
{
    for (int i=0; i<a; i++)
{
    delete[] d[i];
    d[i]=nullptr;
}
}

//Addition function with Reference
int add_ref (int& num_a, int& num_b)
{
    return num_a + num_b;
}


//Minus function with pointer
int min (int num_c , int num_d)
{
int h_min;

for (int i=0; i<a; i++)
{

   q[i]= p+b*i;
   p[i]=num_c - num_d;
    h_min=p[i];
}
restore_min_ref(q,p);
return h_min;
}

//restore min
void restore_min ()
{
  delete[] q;
   q = nullptr;
   delete[] p;
   p = nullptr;
}

// Restore Minus function with Reference
void restore_min_ref(int*& d,int*& i)
{
    delete[] d;
    d=nullptr;
    delete[] i;
    i=nullptr;
}

//Minus function with Reference
int min_ref(int& num_c, int& num_d)
{
    return num_c - num_d;
}

 int main()
 {
int num_a =0, num_b =0, num_c =0, num_d =0 ;

//Addition function with pointer
cout<<"Addition function with pointer"<<endl;
cout<<"enter num 1:";
cin>>num_a;
cout<<"enter num 2:";
cin>>num_b;
cout<<add(num_a,num_b)<<endl;

//Minus function with pointer
cout<<"Minus function with pointer"<<endl;
cout<<"enter num 3:";
cin>>num_c;
cout<<"enter num 4:";
cin>>num_d;
cout<<min(num_c,num_d)<<endl;

// Addition function with Reference
cout<<"Addition function with Reference"<<endl;
cout<<"enter num 5:";
cin>>num_a;
cout<<"enter num 6:";
cin>>num_b;
cout<<add_ref(num_a,num_b)<<endl;

//Minus function with Reference
cout<<"Minus function with Reference"<<endl;
cout<<"enter num 7:";
cin>>num_c;
cout<<"enter num 8:";
cin>>num_d;
cout<<min_ref(num_c,num_d)<<endl;
return 0;
 }
