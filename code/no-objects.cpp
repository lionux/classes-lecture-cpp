#include <iostream>
using namespace std;

void print_class(string name,
		 string professor,
		 string professor_email,
		 int enrollment,
		 int credits)
{
  cout << "Course Name: " << name << endl;
  cout << "Professor Name: " << professor << endl;
  cout << "Professor Email: " << professor_email << endl;
  cout << "Enrollment: " << enrollment << endl;
  cout << "Credits: " << credits << endl;
}


int main()
{
  //Biology Course
  string bio_name = "Biology 101";
  string bio_professor = "Dr. A";
  string bio_professor_email = "A@u.edu";
  int bio_enrollment = 50;
  int bio_credits = 3;

  //Ceramics Course
  string art_name = "Ceramics 201";
  string art_professor = "Dr. B";
  string art_professor_email = "B@u.edu";
  int art_enrollment = 20;
  int art_credits = 3;

  //Calculus Course
  string math_name = "Calculus 1";
  string math_professor = "Dr. C";
  string math_professor_email = "C@u.edu";
  int math_enrollment = 30;
  int math_credits = 4;

  print_class(math_name, math_professor,
	      math_professor_email, math_enrollment,
	      math_credits);
  return 0;
} //end main
