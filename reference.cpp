#include<iostream>

char add(int &i);

int len(char string[])
{
    int i=0;
    while (string[i]!=0)
    {
        i++;
    }
    return i;

}

char d[]="hello there";
char name[100];

int main()
{

    std::cout<<"please enter name :";
    std::cin>>name;
    std::cout <<"length name:" <<len (name)<<"\n";
    std::cout<<"i :"<<add(str);
    return 0;
}

char add()
{
    int static_len=len(d);
   // int  &str=static_len;
    int dynamic_len=len(name);
    int &str=static_len+dynamic_len;
 //   return str;
}
