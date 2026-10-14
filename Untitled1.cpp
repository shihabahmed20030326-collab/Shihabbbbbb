
#include<iostream>
using namespace std;
class Rectangle{
public:
int width;
int height;
int area(){
int a= width*height;
cout<<"area"<<a<<endl;
return a;

}
int peramiter(){
int p=2*(width*height);
cout<<"peramiter"<<p<<endl;
return p;
}
};
int main(){
Rectangle r= Rectangle();
r.width=10;
r.height=12;
cout<<"stack object; "<<endl;
r.area();
cout<<endl;



Rectangle* s= new Rectangle;
s->width=6;
s->height=14;
cout<< "heap object:"<<endl;
s->area();
delete s;
return 0;
}
