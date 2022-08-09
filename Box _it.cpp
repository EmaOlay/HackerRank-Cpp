#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
    private:
        int l,b,h;
    public:
        Box(){
            l=0;
            b=0;
            h=0;
        };
        Box(int pl,int pb,int ph){
            l=pl;
            b=pb;
            h=ph;
        };
        Box(Box &instance){
            l=instance.l;
            b=instance.b;
            h=instance.h;
        };
        int getLength(){return l;};
        int getBreadth (){return b;};
        int getHeight (){return h;};
        long CalculateVolume(){
            long aux=0;
            // cout<<"l="<<l<<endl;
            // cout<<"l*b="<<l*b<<endl;
            // cout<<"l*b*h="<<l*b*h<<endl;
            aux=l*b;
            aux=aux*h;
            return aux;
            };
        bool operator<(Box& instance){
            if (l<instance.l) {
                return true;
            }
            if (b<instance.b && l==instance.l) {
                return true;
            }
            if (h<instance.h && b==instance.b && l==instance.l) {
                return true;
            }
            return false;
        };
};
ostream& operator<<(ostream& os, Box& instance)
{
    os << instance.getLength() << ' ' << instance.getBreadth() << ' ' << instance.getHeight();
    return os;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}