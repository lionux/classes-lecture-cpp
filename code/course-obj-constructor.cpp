#include <iostream>
using namespace std;

class Course
{
public:
  string name;
  string professor;
  string email;
  int enrollment;
  int credits;
  Course();
  Course(string _name, string _professor,
	 string _email, int _enrollment,
	 int _credits);
  void print_class_info();
};
Course::Course()
{
  name = "UNSET";
  professor = "UNSET";
  email = "UNSET";
  enrollment = -1;
  credits = -1;
}
Course::Course(string _name, string _professor,
	 string _email, int _enrollment,
	 int _credits)
{
  name = _name;
  professor = _professor;
  email = _email;
  enrollment = _enrollment;
  credits = _credits;
}
void Course::print_class_info()
{
  cout << "Course Name: " << name << endl;
  cout << "Professor Name: " << professor << endl;
  cout << "Professor Email: " << email << endl;
  cout << "Enrollment: " << enrollment << endl;
  cout << "Credits: " << credits << endl;
}

int main()
{
  Course bio("Biology", "Dr. A", "A@u.edu", 40, 3);
  bio.print_class_info();
  
  return 0;
}
