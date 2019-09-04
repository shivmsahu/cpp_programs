#include<iostream>
using namespace std;
class Stack{
	int s[10],top=-1;
	public:
		int isEmpty(){
			if (this->top==-1)
			return 1;
			else
			return 0;
		}
		int isFull(){
			if(this->top==10)
			return 1;
			else
			return 0;
		}
		void push(int a){
			if(!isFull()){
				top++;
				this->s[top]=a;
			}
			else
			cout<<"	stack is full	"<<endl;
		}
		int pop(){
			int t;
			if(!isEmpty()){
				t=this->s[top];
				top--;
				return t;
			}
			else
			cout<<"	stack is empty	"<<endl;
		}
};

int main(){
	Stack s1;
	int a,b,c,d;
	s1.push(9);
	s1.push(20);
	s1.push(4);
	s1.push(3);
	
	a=s1.pop();
	b=s1.pop();
	c=s1.pop();
	d=s1.pop();
	
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	return 0;
}
