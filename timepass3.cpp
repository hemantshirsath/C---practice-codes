#include<iostream>
using namespace std;
class Hemant{
    public:
int weight;
int height;
Hemant()
{
    cout<<"Address using constructor this is "<<this;
    cout<<"This is constructor "<<endl;
}
Hemant(Hemant &h)
{

    this->height=h.height;
    this->weight=h.weight;
}
void setweight(int weight)
{
    this->weight=weight;
}
void setheight(int height)
{
    this->height=height;
}
int getweight()
{
    return this->weight;
}
int getheight()
{
    return this->height;
}

};
int main()
{
    Hemant *h=new Hemant;
    (*h).setheight(5);
   ( *h).setweight(50);
   cout<<"Address of h is "<<h<<endl;
    cout<<"Height is "<<(*h).getheight()<<endl;
    cout<<"Weight is "<<(*h).getweight()<<endl;
    Hemant h1(*h);
    cout<<"H1 height is "<<h1.getheight()<<endl;
    cout<<"H1 weight is "<<h1.getweight()<<endl;
    return 0;
}