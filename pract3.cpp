// pract3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
struct Node
{
        int data;
        Node* next;
        Node* prev;
        Node(int value) :data(value), next(nullptr), prev(nullptr) {}
};
class DoublyLinkedList {
public:
    Node* head, * tail;
    int push_front() {
        Node* node;
    };
    int push_back() {

    };
    int pop_front() {

    };
    int pop_back() {

    };
    void display() {
       
    };
    void sort() {

    };
    void remove_duplicates() {

    }
};
int main()
{ 
    
    DoublyLinkedList b;
    int a;
    while (true) {
        std::cout << "\nSelect action\n1)Add an element to the beginning\n2)Add an element to the end\n3)Remove element from beginning\n4)Remove element from end\n5Show list\n6)Sort list\n7)Remove duplicates\n8)Exit\n";
        std::cin >> a;
        if (a == 1) {
            b.push_front();
        }
        else if (a == 2) {
            b.push_back();
        }
        else if (a == 3) {
            b.pop_front();
        }
        else if (a == 4) {
            b.pop_back();
        }
        else if (a == 5) {
            b.display();
        }
        else if (a == 6) {
            b.sort();
        }
        else if (a == 7) {
            b.remove_duplicates();
        }
        else if (a == 8) {
            std::cout << "Exit the programm";
            return 0;
        }
    }
   
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
