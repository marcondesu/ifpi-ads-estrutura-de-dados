#include <iostream>
#include <queue>

using namespace std;

template <class T>
class Queue: public queue<T> {
	protected:
		queue<T> fila;
		
	public:
		T popQueue() {
			T tmp = this->front();
			this->pop();
			
			return tmp;
		}

		void popTodos() {				
			while (!this->empty()) {
				this->pop();
			}
		}

		void simulaPilha(T novo) {
			Queue<T> aux;

			if (this->empty()) {
				this->push(novo);
			} else {
				while (!this->empty()) {
					aux.push(this->front());

					this->pop();
				}

				this->push(novo);

				while (!aux.empty()) {
					this->push(aux.front());

					aux.pop();
				}
			}
		}
};

int main() {
	Queue<int> fila;

	cout << "- Push..." << endl;
	fila.push(1);
	fila.push(2);
	fila.push(3);
	fila.push(4);
	cout << "Frente: " << fila.front() << endl;
	cout << "Trás: " << fila.back() << endl;

	cout << "\n- popQueue..." << endl;
	fila.popQueue();
	cout << "Frente: " << fila.front() << endl;
	cout << "Trás: " << fila.back() << endl;

	cout << "\n- simulaPilha..." << endl;
	fila.simulaPilha(0);
	cout << "Frente: " << fila.front() << endl;
	cout << "Trás: " << fila.back() << endl;
	
	cout << "\n- popTodos..." << endl;
	fila.popTodos();
	cout << "Frente: " << fila.front() << endl;
	cout << "Trás: " << fila.back() << endl;

	cout << '\n';
}
