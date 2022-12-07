#include <iostream>
#include <stack>

using namespace std;

template <class T>
class Stack: public stack<T> {
	protected:
		stack<T> pilha;

	public:
		T popStack() {
			T tmp = this->top();
			this->pop();
			
			return tmp;
		}

		void popTodos() {
			while (!this->empty()) {
				this->pop();
			}
		}

		void simulaFila(T novo) {
			if (this->empty()) {
				this->push(novo);
			} else {
				stack<T> aux;

				while (!this->empty()) {
					aux.push(this->top());

					this->pop();
				}

				this->push(novo);

				while (!aux.empty()) {
					this->push(aux.top());
					
					aux.pop();
				}
			}
		}
};

int main() {
	Stack<int> pilha;

	cout << "- Push..." << endl;
	pilha.push(1);
	pilha.push(2);
	pilha.push(3);
	pilha.push(4);
	cout << "Topo: " << pilha.top() << endl;

	cout << "\n- popStack..." << endl;
	cout << "Topo: " << pilha.popStack() << endl;

	cout << "\n- simulaFila..." << endl;
	pilha.simulaFila(0);

	stack<int> aux = pilha;
	cout << "Topo ->";
	while (!aux.empty()) {
		cout << "	" << aux.top() << endl;

		aux.pop();
	}
	
	cout << "\n- popTodos..." << endl;
	pilha.popTodos();
	cout << "Topo: " << pilha.top() << endl;

	cout << '\n';
}
