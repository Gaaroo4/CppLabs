//
//  main.cpp
//  AlgorithmLab-11
//
//  Created by Дмитрий Петров on 25.04.2023.
//

#include<iostream>
using namespace std;

//0

struct Beast
{
    char element[20];
    Beast* next;
    Beast* prev;
}*beg;

Beast* make_list(int n)
{
    Beast* beg;
    Beast* p;
    beg = new(Beast);
    cout << "\n?";
    cin >> beg->element;
    beg->prev = 0;
    beg->next = 0;
    p = beg;

    for (int i = 0; i < n - 1; i++)
    {
        p = new(Beast);
        cout << "\n?";
        cin >> p->element;
        p->next = beg;
        beg->prev = p;
        beg=p;
    }

    return beg;

}

void print_list(Beast* beg)
{
    while (beg != nullptr)
    {
        cout << beg->element << "\t";
        beg = beg->next;
    }
}

Beast* add_point(Beast*beg)
{
    int k = 1;
    while (k <= 5)
    {
        Beast*p = beg;
        Beast*New = new(Beast);
        cout << "key?"; cin >> New->element;
        for (int i = 0; i < k - 1 && p != 0; i++)
            p = p->next;
        if (p != 0)
        {
            New->next = p->next;
            p->next = New;
        }


        k += 2;
    }
    return beg;
}

int main()
{
    Beast* beg = make_list(5);

    add_point(beg);
    print_list(beg);
    return 0;
}

//1

//struct moon
//{
//    int data;
//    moon*next;
//};
//void push(moon**top,int elem)
//{
//    moon*q;
//    q = new moon();
//    q->data = elem;
//    if (top == NULL) { *top = q; }
//    else
//    {
//        q->next = *top;
//        *top = q;
//    }
//
//}
//void pop(moon**top)
//{
//    moon*q = *top;
//    moon*prev = nullptr;
//    while (q != nullptr)
//    {
//        if (q->data % 2 == 0)
//        {
//            if (q == *top)
//            {
//                *top = q->next;
//                free(q);
//                q->data = 0;
//                q->next = 0;
//
//            }
//            else
//            {
//                prev->next = q->next;
//                free(q);
//                q->data = 0;
//                q->next = 0;
//
//            }
//            prev = q;
//            q = q->next;
//            break;
//        }
//    }
//}
//void print(moon*top)
//{
//    moon*q = top;
//    while (q != nullptr)
//    {
//        cout << " -> "<< q->data ;
//        q = q->next;
//    }
//    cout << endl;
//}
//
//int main()
//{
//    moon*top = 0;
//    int n;
//    cout << "Type an amount of elements ";
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        int elem;
//        cout << "Type an element: ";
//        cin >> elem;
//        push(&top, elem);
//        cout << endl;
//    }
//    cout << endl;
//    print(top);
//    pop(&top);
//    print(top);
//    return 0;
//}

//2

//struct Beast
//{
//    int element;
//    Beast* next;
//}*beg;
//
//Beast* make_list(int n)
//{
//    Beast* beg;
//    Beast* p, *r;
//    beg = new(Beast);
//    cout << "\n?";
//    cin >> beg->element;
//    beg->next = 0;
//    p = beg;
//
//    for (int i = 0; i < n - 1; i++)
//    {
//        r = new(Beast);
//        cout << "\n?";
//        cin >> r->element;
//        r->next = 0;
//        p->next = r;
//        p = r;
//    }
//
//    return beg;
//
//}
//
//void print_list(Beast* beg)
//{
//    while (beg != nullptr)
//    {
//        cout << beg->element << "\t";
//        beg = beg->next;
//    }
//}
//Beast* del_point(Beast*beg)
//{
//    Beast*p = beg;
//    int count = 0;
//
//    while (p->next != 0)
//    {
//        p = p->next;
//        count++;
//        if (p->element % 2 == 0)
//        {
//            cout << count << endl;
//            Beast*p = beg;
//            for (int i = 1; i < count&&p->next != 0; i++)
//            {
//                p = p->next;
//            }
//            Beast* r = p->next;
//            p->next = r->next;
//delete r;
//    return beg;
//
//            break;
//
//
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    Beast* beg = make_list(5);
//
//    del_point(beg);
//print_list(beg);
//    return 0;
//}

//3

//template<typename T>
//struct Node
//{
//    T data;
//    Node<T>* next;
//};
//template<typename T>
//struct queue
//{
//    int size = 0;
//    Node<T>* head = nullptr;
//    Node<T>* tail = nullptr;
//};
//template<typename T>
//void new_queue(queue<T>& q, const int& n)
//{
//    T a;
//    for (int i = 1; i <= n; i++)
//    {
//        cout << "Type an element of queue: ";
//        cin >> a;
//        cout << endl;
//        push(q, a);
//    }
//}
//template<typename T>
//void push(queue<T>& q, const int& a)
//{
//    if (q.head != nullptr)
//    {
//        Node<T>*new_node = new Node<T>;
//        q.size++;
//        new_node->data = a;
//        new_node->next = nullptr;
//        q.tail->next = new_node;
//        q.tail = new_node;
//    }
//    else
//    {
//        Node<T>*new_node = new Node<T>;
//        new_node->data = a;
//        q.head = new_node;
//        q.tail = new_node;
//        q.size = 1;
//    }
//}
//template<typename T>
//void pop(queue<T>& q)
//{
//    Node<T>* tmp = q.head;
//    q.head = q.head->next;
//    q.size--;
//    delete tmp;
//}
//
//template<typename T>
//void print_queue(queue<T>& q)
//{
//    Node<T>*tmp = q.head;
//    cout << "Start - ";
//    while (tmp != nullptr)
//    {
//        cout << tmp->data << " -> ";
//        tmp = tmp->next;
//    }
//    cout << "End";
//    cout << endl;
//}
//
//template<typename T>
//void add_element(queue<T>& q)
//{
//    int k = 0;
//    while (k <= q.size)
//    {
//        if (k % 2 != 0)
//        {
//
//            T a;
//            cout << "Type an element for addition: " << endl;
//            cin >> a;
//            push(q, a);
//            push(q, q.head->data);
//            pop(q);
//        }
//        k++;
//    }
//
//}
//
//
//int main()
//{
//    queue<char> q;
//    int n;
//    do
//    {
//        cout << "Type an amount of elements: ";
//        cin >> n;
//        cout << endl;
//    } while (n <= 0);
//    new_queue(q, n);
//    print_queue(q);
//    int k = 1;
//    add_element(q);
//    cout << endl;
//    print_queue(q);
//    return 0;
//}

