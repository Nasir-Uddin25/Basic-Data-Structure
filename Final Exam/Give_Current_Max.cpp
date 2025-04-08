#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.marks == r.marks)
            return l.roll > r.roll;
        else
        return l.marks < r.marks;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            string name;
            int roll;
            int marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);
            Student topStudent = pq.top();
            cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
        }

        if (command == 1)
        {

            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                Student topStudent = pq.top();
                cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
            }
        }
        else if (command == 2)
        {

            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    Student topStudent = pq.top();
                    cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
                }
            }
        }
    }

    return 0;
}
