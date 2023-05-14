#include<iostream>
using namespace std;
class element{
public:
int i,j,x;};
class sparse{
private:
int m,n,num;
element *e;//* so that dynamic creation of e in heap
public:
    sparse(int m,int n,int num){
this->m=m;
this->n=n;
this->num=num;
e=new element[this->num];}
~sparse(){
delete []e;//array is deleted
}
friend istream & operator<<(istream &is,sparse &s);
friend ostream & operator<<(ostream &os,sparse &s);};
//void read()
istream & operator<<(istream &is,sparse &s)
{
cout<<"enter non zero elements";
for(int i=0;i<s.num;i++){
cin>>s.e[i].i>>s.e[i].j>>s.e[i].x;
}
return is;}
//void display()
 ostream & operator<<(ostream &os,sparse &s)
{
int k=0;
for(int i=0;i<s.m;i++){
for(int j=0;j<s.m;j++){
if(i==s.e[k].i && j==s.e[k].j)
cout<<s.e[k++].x<<" ";
else cout<<"0 ";}cout<<endl;
}
return os;}

int main(){
sparse s(4,4,5);
//s.read();
cin>>s;
cout<<s;
s.display();
sparse s1(4)
}
