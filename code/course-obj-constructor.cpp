#include <iostream>
using namespace std;

class Course
{
private:
  string name;
  string professor;
  string email;
  int enrollment;
  int credits;
public:
  Course();
  Course(string _name, string _professor,
	 string _email, int _enrollment,
	 int _credits);
  void print_class_info();
  string get_name();
  string get_professor();
  string get_email();
  void set_enrollment(int _enrollment);
  int get_enrollment();
  int get_credits();
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
string Course::get_name()
{
  return name;
}
string Course::get_professor()
{
  return professor;
}
string Course::get_email()
{
  return email;
}
void Course::set_enrollment(int _enrollment)
{
  enrollment = _enrollment;
}
int Course::get_enrollment()
{
  return enrollment;
}
int Course::get_credits()
{
  return credits;
}
int main()
{
  Course bio("Biology", "Dr. A", "A@u.edu", 40, 3);
  Course art("Ceramics", "Dr. B", "B@u.edu", 20, 3);
  bio.print_class_info();
  art.print_class_info();

  bio.set_enrollment(32);
  bio.print_class_info();
  return 0;
}
