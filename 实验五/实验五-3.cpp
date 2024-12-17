#include <iostream>
using namespace std;

class Rectangle {
public:
	Rectangle(float l, float w, float h) {  
		length = l; width = w; height = h;
	}
	float volume() { 
		return length * width * height;
	}
	void show()
	{
		cout << this->volume()<< endl;
	}
private:
	float length, width, height;
};

int main() {
	float al, aw, ah, bl, bw, bh, cl, cw, ch, av, bv, cv;
	cout << "------- a -------" << endl;
	cout << "Input length:";
	cin >> al;
	cout << "Input width :";
	cin >> aw;
	cout << "Input height:";
	cin >> ah; 
	cout << "------- b -------" << endl;
	cout << "Input length:";
	cin >> bl;
	cout << "Input width :";
	cin >> bw;
	cout << "Input height:";
	cin >> bh;
	cout << "------- c -------" << endl;
	cout << "Input length:";
	cin >> cl;
	cout << "Input width :";
	cin >> cw;
	cout << "Input height:";
	cin >> ch;
	Rectangle a(al, aw, ah);
	Rectangle b(bl, bw, bh);
	Rectangle c(cl, cw, ch);
	cout << "\n ---- volume ----" << endl;
	a.show();
	b.show();
	c.show();
	return 0;
}