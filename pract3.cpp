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
    DoublyLinkedList():head(nullptr),tail(nullptr){}
    void push_front(int value) {
        Node* node=new Node(value);
        if (head == nullptr)
        {
            head = tail = node;
        }
        else
        {
            node->next = head;
            head->prev = node;
            head = node;
        }
    };
    void push_back(int value) {
        Node* node = new Node(value);

        if (head == nullptr)
        {
            tail = head = node;
        }
        else
        {
            node->prev = tail;
            tail->next = node;
            tail = node;
        }
    };
    void pop_front() {
        Node* temp = head;
        head = head->next;
        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        else
        {
            tail = nullptr;
        }
        delete temp;
    };
    void pop_back() {
        Node* temp = tail;
        tail = tail->prev;
        if (tail != nullptr)
        {
            tail->next = nullptr;
        }
        else
        {
            head = nullptr;
        }
        delete temp;
    };
    void display() {
        Node* node = head;
        while (node != nullptr)
        {
            std::cout << node->data << " ";
            node = node->next;
        }
        std::cout << std::endl;
    };
    void sort() {
        Node* left = head;
        Node* right = head->next;

        bool check;

        Node* temp = new Node(0);

        if (left->next)
        {
            do
            {
                check = false;
                while (right != nullptr)
                {
                    if (left->data > right->data)
                    {
                        temp->data = left->data;
                        left->data = right->data;
                        right->data = temp->data;
                        check = true;
                    }
                    left = left->next;
                    right = right->next;
                }

            } while (check);
        }
        delete temp;
    };
    void remove_duplicates() {
        Node* node = head;

        while (node != nullptr)
        {
            Node* number = node;
            while (node->next != nullptr)
            {
                if (node->next->data == number->data)
                {
                    Node* d_num = node->next;
                    node->next = node->next->next;
                    if (node->next != nullptr)
                    {
                        node->next->prev = node;
                    }
                    delete d_num;
                }
                else
                {
                    node = node->next;
                }

            }
            node = number->next;

        }
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
            int c;
            std::cout << "Enter the number";
            std::cin >> c;
            b.push_front(c);
        }
        else if (a == 2) {
            int c;
            std::cout << "Enter the number";
            std::cin >> c;
            b.push_back(c);
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
        else if (a > 8) {
            std::cout << "Error";
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
