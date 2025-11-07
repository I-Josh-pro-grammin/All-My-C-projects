#include<iostream>
using namespace std;
class A{
	private:
		int a,b,c;
	public:
		void inputData(){
			cout<<"Enter two numbers:"<<endl;
			cin>>a>>b;
		}
		void outputResults(){
			cout<<"Inputs are"<<a<<"and"<<b<<endl
			    <<"Sum:"<<a+b<<endl
			    <<"product:"<<a*b<<endl;
		}
};

class B{
protected:
    int a; int b;
    ;
	public:
	    B(int i1, int i2) {//constructor def
	      a=i1; b=i2;
	    }
		void outputResults(){
			cout<<"sum" << (a+b) << endl;
		};

};

int main(){
	A al(7,12);
	a1.outputResults;
    A a2;//calling constructor without parameters;
    a2.outputResults();
	return 0;
}



