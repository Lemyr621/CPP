#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

class Pair
{ 
public:
	int p_number;
	Pair(){
   		p_number=0;
	};
   Pair( int input )
    {
        p_number = input;
    }
   
   int operator*(const Pair& rhs){ 	
   	int result = p_number * rhs.p_number;
   	cout<<result<<endl;;
   	return result;
   }

	void change(int x){
		p_number=x;
	}
};
 
class Real: public Pair
{
public:
    Real():Pair(){}
    Real(int r_number) : Pair (r_number)
    {}
	int operator+(const Pair& rhs){ 	
   		int result = p_number + rhs.p_number;
   		return result;
   	}
 	int operator/(const Pair& rhs){ 	
   		int result = p_number*p_number + rhs.p_number*rhs.p_number;
   		result=sqrt(result);
   		cout<<result<<endl;
   		return result;
   	}  	
 };


int main () {
    int number,znach;
	cout<<"Vveite 2 chisla classa Pair";
	cin>>znach;
	Pair K(znach);
	cin>>znach;
	Pair K1(znach);
	cout<<"Vveite 2 chisla classa Real";  
	cin>>znach;  
	Real K2(znach);
	cin>>znach ;
	Real K3(znach);
	cout<<"1.Izmenit' polia klassa Pair'"<<endl;
	cout<<"2.Pair-ymnojenie"<<endl;
	cout<<"3.Real-gipotenyza"<<endl;
	cout<<"4.vihod"<<endl;
	do{
	cin>>number;
	switch(number){
	case 1:
		cin>>znach;
		K.change(znach);
		cin>>znach;
		K1.change(znach);
		break;
	case 2:
		K*K1;
		break;
	case 3:
		K2/K3;
		break;		
	}
}while(number!=4);
	cout << endl;
    system("pause");
    return 0;
}

