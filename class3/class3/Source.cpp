#include <iostream> 
#include <string>   
#include <vector> 

using namespace std;
class TestContent {
public:
	int vpnum, raz = 0, i, delch, k, delrange, repeatchek = 0;
	string s;
	string heh, kek;
	struct Task {
		string question,answer1, answer2, answer3, answer4, answer5;
		int right;
		int bal;
	};
	Task mass[10];
	void add() {
		if (raz > 0) {
			do {
				repeatchek = 0;
				cout << "Vvedite vopros" << endl;
				cin >> mass[raz].question;
				kek = mass[raz].question;
				for (i = 0;i < raz;i++) {
					heh = mass[i].question;
					if (heh == kek) {
						repeatchek = 1;
					}
				}
			} while (repeatchek == 1);
		}
		else {
			cout << "Vvedite vopros" << endl;
			cin >> mass[raz].question;
		}
			cout << "Vvedite 1-i variant otveta:";
			cin >> mass[raz].answer1;
			cout << "Vvedite 2-i variant otveta:";
			cin >> mass[raz].answer2;
			cout << "Vvedite 3-i variant otveta:";
			cin >> mass[raz].answer3;
			cout << "Vvedite 4-i variant otveta:";
			cin >> mass[raz].answer4;
			cout << "Vvedite 5-i variant otveta:";
			cin >> mass[raz].answer5;
		do {
			cout << "Vvedite verni variant otveta" << endl;
			cin >> mass[raz].right;
		} while (mass[raz].right > 3);
		cout << "Vvedite kol-vo balov za verni otvet" << endl;
		cin >> mass[raz].bal;
		raz++;
	};
	void print() {
		for (int j = 0;j < raz;j++) {
			cout << "Vopros ¹" << j << endl;
			cout << mass[j].question << endl;
			cout << " 1-i variant otveta:";
			cout << mass[j].answer1 << endl;
			cout << " 2-i variant otveta:";
			cout << mass[j].answer2 << endl;
			cout << " 3-i variant otveta:";
			cout << mass[j].answer3 << endl;
			cout << " 4-i variant otveta:";
			cout << mass[j].answer4 << endl;
			cout << " 5-i variant otveta:";
			cout << mass[j].answer5<< endl;
			std::cout << std::endl;
			cout << "Verni otvet: ";
			cout << mass[j].right << endl;
			cout << "Kol-vo balov za verni otvet: ";
			cout << mass[j].bal << endl;
		}
	};
	void del() {
		cout << "Kakoi vopros ydalit'?";
		cin >> delch;
		delrange = raz - 1;
		for (int j = delch;j < delrange;j++) {
			k = j + 1;
			mass[j].question = mass[k].question;
			cout<< mass[k].question;
			mass[j].answer1 = mass[k].answer1;
			cout << mass[k].answer1;
			mass[j].answer2 = mass[k].answer2;
			mass[j].answer3 = mass[k].answer3;
			mass[j].answer4 = mass[k].answer4;
			mass[j].answer5 = mass[k].answer5;
			mass[j].right = mass[k].right;
			mass[j].bal = mass[k].bal;
		}
		raz = raz - 1;
	};
	void vpn() {
		for (int j = 0;j < raz;j++) {
			cout << j << ".";
			cout << mass[j].question << endl;
		}
		cout << "vvedite nomer voprosa";
		cin >> vpnum;
		cout << "Vopros ¹" << vpnum << endl;
		cout << mass[vpnum].question << endl;
		cout << " 1-i variant otveta:";
		cout << mass[vpnum].answer1 << endl;
		cout << " 2-i variant otveta:";
		cout << mass[vpnum].answer2 << endl;
		cout << " 3-i variant otveta:";
		cout << mass[vpnum].answer3 << endl;
		cout << " 4-i variant otveta:";
		cout << mass[vpnum].answer4 << endl;
		cout << " 5-i variant otveta:";
		cout << mass[vpnum].answer5 << endl;
		cout << "Verni otvet: ";
		cout << mass[vpnum].right << endl;
		cout << "Kol-vo balov za verni otvet: ";
		cout << mass[vpnum].bal << endl;
	};
	int operator+(const TestContent & rhs) {
		int j,i = 0;
		int newraz = raz + rhs.raz;
		for (j=raz;j < newraz;j++) {
			mass[j].question = rhs.mass[i].question;
			mass[j].answer1 = rhs.mass[i].answer1;
			mass[j].answer2 = rhs.mass[i].answer2;
			mass[j].answer3 = rhs.mass[i].answer3;
			mass[j].answer4 = rhs.mass[i].answer4;
			mass[j].answer5 = rhs.mass[i].answer5;
			std::cout << std::endl;
			mass[j].right = rhs.mass[i].right;
			mass[j].bal = rhs.mass[i].bal;
			i = i + 1;
		}
		raz = newraz;
		return 0;
	}
	int operator=(const TestContent & rhs) {
		int j, i = 0;
		for (j = 0;j < rhs.raz;j++) {
			mass[j].question = rhs.mass[i].question;
			mass[j].answer1 = rhs.mass[i].answer1;
			mass[j].answer2 = rhs.mass[i].answer2;
			mass[j].answer3 = rhs.mass[i].answer3;
			mass[j].answer4 = rhs.mass[i].answer4;
			mass[j].answer5 = rhs.mass[i].answer5;
			mass[j].right = rhs.mass[i].right;
			mass[j].bal = rhs.mass[i].bal;
			i = i + 1;
		}
		raz = rhs.raz;
		return 0;
	}
	int operator*(const TestContent & rhs) {
		int v=0,i,j,b,n=0,newraz;
		int newm[10];
		string jo;
		newraz = rhs.raz;
		for (i = 0;i < raz;i++) {
			for (j = 0;j < newraz;j++) {
				jo = rhs.mass[j].question;
				if (mass[i].question == jo) {
					newm[n] = i;
					n++;
				}
			}
		}
		for (i = 0;i < n;i++) {
			b = newm[i];
			cout << b;
			for (j = v;j < b;j++) {
				mass[j].question = mass[b].question;
				mass[j].answer1 = mass[b].answer1;
				mass[j].answer2 = mass[b].answer2;
				mass[j].answer3 = mass[b].answer3;
				mass[j].answer4 = mass[b].answer4;
				mass[j].answer5 = mass[b].answer5;
				mass[j].right = mass[b].right;
				mass[j].bal = mass[b].bal;
			}
			v++;
		}
		raz = n;
		return 0;
	}
	int operator/(const TestContent & rhs) {
		int v=0,flag=0,i, j, b, n = 0, newraz;
		int newm[10];
		string jo;
		newraz = rhs.raz;
		for (i = 0;i < raz;i++) {
			flag = 0;
			for (j = 0;j < newraz;j++) {
				jo = rhs.mass[j].question;
				if (mass[i].question == jo) {
					flag = 1;
				}
			}
			if (flag == 1) {
				newm[n] = i;
				n++;
			}
		}
		for (i = 0;i < n;i++) {
			b = newm[i];
			cout << b;
			for (j = v;j < b;j++) {
				mass[j].question = mass[b].question;
				mass[j].answer1 = mass[b].answer1;
				mass[j].answer2 = mass[b].answer2;
				mass[j].answer3 = mass[b].answer3;
				mass[j].answer4 = mass[b].answer4;
				mass[j].answer5 = mass[b].answer5;
				mass[j].right = mass[b].right;
				mass[j].bal = mass[b].bal;
			}
			v++;
		}
		raz = n+1;
		return 0;
	}
	int operator-(const TestContent & rhs) {
		int flag = 0,j, i, h, z;
		int masm[10];
		do{
			flag = 0;
			cout << "Skol'ko voprosov?";
			cin >> z;
			if (z > rhs.raz)flag = 1;
		} while (flag == 1);
		for (i = 0;i < z;i++) {
			do{
				flag = 0;
				h = rand() % rhs.raz;
				for (j = 0;j < 10;j++) {
					if (h == masm[j])flag = 1;
				}
			} while (flag == 1);
			masm[i] = h;
			raz++;
		}
		for(i = 0;i < raz;i++) {
			mass[i].question = rhs.mass[masm[i]].question;
			mass[i].answer1 = rhs.mass[masm[i]].answer1;
			mass[i].answer2 = rhs.mass[masm[i]].answer2;
			mass[i].answer3 = rhs.mass[masm[i]].answer3;
			mass[i].answer4 = rhs.mass[masm[i]].answer4;
			mass[i].answer5 = rhs.mass[masm[i]].answer5;
			mass[i].right = rhs.mass[masm[i]].right;
			mass[i].bal = rhs.mass[masm[i]].bal;
		}
		return 0;
	}
};

	int main() {
		int slyk1, slyk2,j,i,tmraz=0,key, testnum=0;
		TestContent testmass[5];
		do {
			cout << "Rabota s " << testnum <<" naborom"<< endl;
			cout << "1.Dobavit' vopros" << endl;
			cout << "2.Vivesti voprosi" << endl;
			cout << "3.Ydalenie voprosa" << endl;
			cout << "4.Vopros po nomery" << endl;
			cout << "5.Sozdat' novi nabor" << endl;
			cout << "6.Smenit' testovi nabor" << endl;
			cout << "7.Slianie" << endl;
			cout << "8.Peresevenie" << endl;
			cout << "9.Vichislenie raznosti" << endl;
			cout << "10.Generacia" << endl;
			cout << "11.Vihod" << endl;
			cin >> key;
			switch (key) {
			case 1:
				testmass[testnum].add();
				break;
			case 2:
				testmass[testnum].print();
				break;
			case 3:
				testmass[testnum].print();
				testmass[testnum].del();
				break;
			case 4:
				testmass[testnum].vpn();
				break;
			case 5:
				tmraz = tmraz+1;
				testnum = tmraz;
				testmass[testnum].add();
				break;
			case 6:
				for (i = 0;i <= tmraz;i++) {
					cout << "Nabor ¹" << i << ": " << endl;
					for (j = 0;j < testmass[i].raz;j++) {
						cout << testmass[i].mass[j].question<<endl;
					}
				}
				cout << "Vvedite nomer testovogo nabora";
				cin >> testnum;
				break;
			case 7:
				for (i = 0;i <= tmraz;i++) {
					cout << "Nabor ¹" << i << ": " << endl;
					for (j = 0;j < testmass[i].raz;j++) {
						cout << testmass[i].mass[j].question << endl;
					}
				}
				cout << "kakie 2 nabora clit'?" << endl;
				cin >> slyk1;
				cin >> slyk2;
				testmass[slyk1] + testmass[slyk2];
				break;
			case 8:
				for (i = 0;i <= tmraz;i++) {
					cout << "Nabor ¹" << i << ": " << endl;
					for (j = 0;j < testmass[i].raz;j++) {
						cout << testmass[i].mass[j].question << endl;
					}
				}
				cout << "kakie 2 nabora peresech'?" << endl;
				cin >> slyk1;
				cin >> slyk2;
				tmraz = tmraz + 1;
				testnum = tmraz;
				testmass[testnum] = testmass[slyk1];
				testmass[testnum] * testmass[slyk2];
				break;

			case 9:
				for (i = 0;i <= tmraz;i++) {
					cout << "Nabor ¹" << i << ": " << endl;
					for (j = 0;j < testmass[i].raz;j++) {
						cout << testmass[i].mass[j].question << endl;
					}
				}
				cout << "kakie 2 nabora peresech'?" << endl;
				cin >> slyk1;
				cin >> slyk2;
				tmraz = tmraz + 1;
				testnum = tmraz;
				testmass[testnum] = testmass[slyk1];
				testmass[testnum] / testmass[slyk2];
				break;

			case 10:
				for (i = 0;i <= tmraz;i++) {
					cout << "Nabor ¹" << i << ": " << endl;
					for (j = 0;j < testmass[i].raz;j++) {
						cout << testmass[i].mass[j].question << endl;
					}
				}
				cout << "iz kakogo nabora generirovat'?" << endl;
				cin >> slyk1;
				tmraz = tmraz + 1;
				testnum = tmraz;
				testmass[testnum] - testmass[slyk1];
				break;
			}
		} while (key != 11);
	}
