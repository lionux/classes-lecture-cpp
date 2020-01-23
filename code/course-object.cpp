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
  
  Course bio;
  bio.name = "Biology";
  bio.professor = "Dr. A";
  bio.email = "A@u.edu";
  bio.enrollment = 40;
  bio.credits = 3;
  bio.print_class_info();

  Course art;
  art.name = "Ceramics";
  art.professor = "Dr. B";
  art.email = "B@u.edu";
  art.enrollment = 30;
  art.credits = 3;
  art.print_class_info();
  
  return 0;
}






