#include<iostream>
using namespace std;
class Test{
	public :
		int value;
	void operator ++ (){
		value+=10;
	}
	
};
	int main(){
			Test obj;
			obj.value=10;
			++obj.value;
			cout<<obj.value;
		}
