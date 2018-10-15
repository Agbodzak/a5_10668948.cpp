#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
struct Student
{
    int IdNumber[5];
    string name[5];
    int age[5];
    string gender[5];
    double score[5];
    string grade[5];

};

int main()
{
    double totalScores = 0;
    int totalAge = 0;
    int maleCount = 0;
    int femaleCount = 0;
    double averageScore = 0;
    double averageAge = 0;
    int numStudents;
    double myscore;
    Student Priscila;

    for (int i = 0; i<numStudents;i++)
    {
        cout<< "Enter your ID: ";
        cin>>Priscila.IdNumber[i];
        cout << "Enter your Name: ";
        cin>> Priscila.name[i];
        cout<< "Enter your Age: " ;
        cin>> Priscila.age[i];
        cout <<"Enter your Gender: ";
        cin >>Priscila.gender[i];
        cout << "Enter Score: ";
        cin >> Priscila.score[i];

        if(Priscila.score[i]>80 && Priscila.score[i]<=100)
        {
            Priscila.grade[i]="A";

        } else if(Priscila.score[i]>=70 && Priscila.score[i]<80)
        {
            Priscila.grade[i] = "B";
        } else if(Priscila.score[i]>=60 && Priscila.score[i]<70)
        {
            Priscila.grade[i] = "C" ;
        } else if(Priscila.score[i]>=50 && Priscila.score[i]<60) {
        Priscila.grade[i]= "D";
        }   else if(Priscila.score[i]>=40 && Priscila.score[i]<=50)
        {
            Priscila.grade[i] = "E";
        }    else  {Priscila.grade[i]= "F";
        }
        cout <<endl;
        if (Priscila.grade[i]=="male")
        {
            maleCount++;
        }
else if(Priscila.gender[i]=="female")  {
    femaleCount++;
}
       cout << "*************************************************************************************************" <<endl;
cout << " ID" << "      " << "Name " << "       " << "Age" << "             " << "Gender " << "         " << "Score" << "        " << "Grade " << endl;

cout << "************************************************************************************************" << endl;
    for (int i=0;i <numStudents; i++)
    {

        totalScores=totalScores+Priscila.score[i];

           totalAge= totalAge+Priscila.age[i];

          averageScore= totalScores/numStudents;

           averageAge= totalAge/numStudents;

            cout << Priscila.IdNumber[i] << "/t" << Priscila.name[i] << "/t" << Priscila.age[i] << "/t" << Priscila.gender[i];
        cout << "/t" << Priscila.score[i] << "/t" << Priscila.grade[i] ;

       cout << endl;
    }



    cout << "The average age is:  " << averageAge << endl;

    cout << "The average score is: " << averageScore << endl;

    cout << "The number of females are: " << femaleCount << endl;

    cout << "The number of males are: " << maleCount << endl;

    ofstream A_student;
    A_student.open("Mystudents.txt", ios:: app);

    A_student<< "*************************************************************************************************" <<endl;

    A_student << " ID" << "  " << "Name " << "     " << "Age" << "      " << "Gender " << "     " << "Score" << "       " << "Grade " << endl;

    A_student <<  "************************************************************************************************" << endl;

     for (int i=0;i <numStudents; i++)
    {

          totalScores=totalScores+Priscila.score[i];

           totalAge= totalAge+Priscila.age[i];

          averageScore= totalScores/numStudents;

           averageAge=totalAge/numStudents;

            A_student << Priscila.IdNumber[i] << "\t" << Priscila.name[i] << "\t" << Priscila.age[i] << "\t" << Priscila.gender[i];
        A_student << "\t" << Priscila.score[i] << "\t" << Priscila.grade[i] ;

       A_student << endl;
    }

     A_student << "The average age is:  " << averageAge << endl;

    A_student << "The average score is: " << averageScore << endl;

   A_student << "The number of females are: " << femaleCount << endl;

    A_student << "The number of males are: " << maleCount << endl;

    A_student.close();

    }
    return 0;
}


