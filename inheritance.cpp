#include<iostream>
using namespace std;
class shape{
	protected:
		int width;
		int height;
		public:
			void setwidth(int wid){
				width=wid;
			}
			void setheight(int hei){
				height=hei;
			}
};
class Rectangle:public shape{
	public:
		int getarea(){
			return(width*height);
		}
};
int main(){
	Rectangle rec;
	rec.setheight(5);
	rec.setwidth(5);
	cout<<"Total area:"<<rec.getarea();
}
