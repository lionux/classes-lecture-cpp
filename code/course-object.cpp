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
  void print_class_info();
};

int main()
{
  
  Course bio;
  bio.name = "Biology";
  bio.professor = "Dr. A";
  bio.email = "A@u.edu";
  bio.enrollment = 40;
  bio.credits = 3;
  bio.print_class_info();
  
  return 0;
}






void Course::print_class_info()
{
  cout << "Course Name: " << name << endl;
  cout << "Professor Name: " << professor << endl;
  cout << "Professor Email: " << email << endl;
  cout << "Enrollment: " << enrollment << endl;
  cout << "Credits: " << credits << endl;
}
