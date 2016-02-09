static int professorID, studentID;

class Person

{

private:
string name;
int age;

public:
virtual void getdata() {
    cin >> name;
    cin >> age;
}
virtual void putdata() {
    cout << name << " " << age << " ";
}

};

class Professor : public Person

{

private:
int publication;
int id;

public:
Professor() {
    professorID++;
}
void getdata() {
    Person::getdata();
    cin >> publication;
    id = professorID;
}
void putdata() {
    Person::putdata();
    cout << publication << " " << id << endl;
}

};

class Student : public Person

{

private:
int marks[6];
int id;


public:
Student() {
    studentID++;
}
void getdata() {
    Person::getdata();
    for(int i = 0; i < 6; ++i)
        cin >> marks[i];
    id = studentID;
}
void putdata() {
    Person::putdata();
    int sum = 0;
    for(int i = 0; i < 6; ++i)
        sum += marks[i];
    cout << sum << " " << id << endl;
}

};
