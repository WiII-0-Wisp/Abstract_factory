                    //  m f p    
#include "iostream" //h r g g
using namespace std;//o g b b
					//g b r r

class monitor {
public:
	virtual void print() = 0;
};
class frame {
public:
	virtual void print() = 0;
};
class perifery {
public:
	virtual void print() = 0;
};

class monitor_red : public monitor {
public:
	void print() {
		cout << "Был создан красный монитор;\n";
	}
};
class monitor_green : public monitor {
public:
	void print() {
		cout << "Был создан зелёный монитор;\n";
	}
};
class monitor_black : public monitor {
public:
	void print() {
		cout << "Был создан чёрный монитор;\n";
	}
};

class frame_red : public frame {
public:
	void print() {
		cout << "Был создан красный корпус;\n";
	}
};
class frame_green : public frame {
public:
	void print() {
		cout << "Был создан зелёный корпус;\n";
	}
};
class frame_black : public frame {
public:
	void print() {
		cout << "Был создан чёрный корпус;\n";
	}
};

class perifery_red : public perifery {
public:
	void print() {
		cout << "Была создана красные мышка и клавиатура;\n";
	}
};
class perifery_green : public perifery {
public:
	void print() {
		cout << "Была создана зелёные мышка и клавиатура;\n";
	}
};
class perifery_black : public perifery {
public:
	void print() {
		cout << "Была создана чёрные мышка и клавиатура;\n";
	}
};

class PC {
public:
	monitor* x;
	frame* y;
	perifery* z;

};

class home : public PC {
public:
	home() {
		x = new monitor_red;
		x->print();
		y = new frame_green;
		y->print();
		z = new perifery_green;
		z->print();
	}
	~home() {
		delete x, y, z;
	}
};
class office : public PC {
public:
	office() {
		x = new monitor_green;
		x->print();
		y = new frame_black;
		y->print();
		z = new perifery_black;
		z->print();
	}
	~office() {
		delete x, y, z;
	}
};
class game : public PC {
public:
	game() {
		x = new monitor_black;
		x->print();
		y = new frame_red;
		y->print();
		z = new perifery_red;
		z->print();
	}
	~game() {
		delete x, y, z;
	}
};

int main() {
	setlocale(0, "");
	int c;
	PC* A;
	while (true) {
		cout << "Домашний - 1, офисный - 2, игровой - 3, выйти - 0: ";
		cin >> c;
		cout << "\n";
		if (c == 0) break;
		switch (c) {
		case 1:
			A = new home;
			break;
		case 2:
			A = new office;
			break;
		case 3:
			A = new game;
			break;
		}
		cout << "\n\n";
	}
	return 0;
}

