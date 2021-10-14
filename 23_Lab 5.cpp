#include <iostream>
#include <conio.h>

using namespace std;

class op{
    private :
	int r,m ;
	public :
	void get()
	{
		cout<<"\nEnter real and imaginary part:";
		cin>>r>>m;
	}
	void dis()
	{
		cout<<r<<"+"<<m<<"i";
	}
	op operator +( op o)
	{
		op s;
		s.r = r+o.r;
		s.m=m+o.m;
		return s;
	}
};
int main()
{
	system("cls");
	op p,q,z;
	p.get();
	q.get();
	z=p+q;
	z.dis();
	getch();
	
	
}
