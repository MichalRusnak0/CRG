#include <iostream>	
using namespace std;	

int main() {
		int jednotka;
			cout << "Akej farby je trava ? 1)zelena 2)modra 3)cervena 4)fialova " << endl;
				cin >> jednotka;
				if (jednotka == 1) {
				cout << "spravna odpoved" << endl;

					
				
						int dvojka;
						cout << "Smrek je ? 5)druh zemiaku 6)ovocie 7)strom 8)exoticky druh jablka" << endl;
						cin >> dvojka;
						if (dvojka == 7) {
							cout << "spravna odpoved" << endl;

							int trojka;
							cout << "Zemiak je? 9)ovocie 10)kvet 11)oblak 12)zelenina" << endl;
							cin >> trojka;
							if (trojka == 12) {
									cout << "splnil si test, gratulujem" << endl;
								}
								else {
								cout << "pokazil si to na konci, zacni znovu" << endl;
								}
						}
						else {
						cout << "zla odpoved, chod od zaciatku" << endl;
						}
				}
				else {
				cout << "zacni znovu" << endl;

				}
		
}