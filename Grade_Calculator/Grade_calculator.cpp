/* Program to calculate or display the grade system */
#include <iomanip>
#include <iostream>

/* std (standard) namespace contains the built-in classes and declared functions. */
using namespace std;

int main()
{
    /* this is the final percentage that is obtained. */
    const int assignmentPercentage = 15,
              testPercentage = 50,
              examPercentage = 30,
              classPercentage = 5;

    /* Here we will take the percentage students obtained in course.
    *  we will also calculate total sum of weights and average of the perncetage obtained.
    */
    float assignWeight,
          testWeight,
          examWeight,
          particWeight,
          PercentOutOf100,
          sum_of_all_weights,
          avg;  
    
    /* User input of Programing Assignment interms of percentage*/
    cout << "\nEnter the grades obtain in Programing Assignment in % : ";
    cin >> PercentOutOf100;

    /*Calculation of converting the the obtained percentage into final percentage */
    assignWeight = PercentOutOf100 * assignmentPercentage;

    /* User input of Chapter Test interms of percentage*/
    cout << "\nEnter the grades obtain in Chapter Test in % : ";
    cin >> PercentOutOf100;

    /*Calculation of converting the the obtained percentage into final percentage */
    testWeight = PercentOutOf100 * testPercentage;

    /* User input of final Exam interms of percentage*/
    cout << "\nEnter the grades obtain in Final Exam in % : ";
    cin >> PercentOutOf100;

    /*Calculation of converting the the obtained percentage into final percentage */
    examWeight = PercentOutOf100 * examPercentage;

    /* User input of Class Participation interms of percentage*/
    cout << "\nEnter the grades obtain in Class Participation in % : ";
    cin >> PercentOutOf100;

    /*Calculation of converting the the obtained percentage into final percentage */
    particWeight = PercentOutOf100 * classPercentage;

    /*
    * Calculation of the total weights or percentage of final percentage.
    * calculating the avg based on total weights and user inputs weights.    
    */
    sum_of_all_weights = assignmentPercentage + testPercentage + examPercentage + classPercentage;

    avg = (assignWeight + testWeight + examWeight + particWeight)/sum_of_all_weights;

    /* this some inbuilt functions for keeping the floating point at fixed position of 2
    *  eg : 45.897 = 45.89
    */
    cout << fixed << setprecision(2);

    /* Display of the converted weights from input weights */
    cout << "\n\n\t" << assignWeight / sum_of_all_weights << "% in Programming Assignments \n"
         << "\t" << testWeight / sum_of_all_weights << "% in Chapter Tests \n"
         << "\t" << examWeight / sum_of_all_weights << "% in Final Exam \n"
         << "\t" << particWeight / sum_of_all_weights << "% in Class Participation \n"
         << endl;

    /* Display of final grade obtained */
    cout << "\nFinal Grade: " << avg << "% \n"
         << endl;

    /* Display of final grade obtained */
    if (avg >= 90 || avg == 100)          // 97% is the lowest A+
        cout << "Your Grade is A+";
    else if (avg >= 80 && avg <= 89)     // 94% is the lowest A
        cout << "Your Grade is A\n";
    else if (avg >= 70 && avg <= 79)     // 90% is the lowest B
        cout << "Your Grade is B\n";
    else if (avg >= 60 && avg <= 69)     // 87% is the lowest C
        cout << "Your Grade is C\n";
    else if (avg >= 50 && avg <= 59)     // 84% is the lowest D
        cout << "Your Grade is D\n";
    else if (avg >= 35 && avg <= 49)     // 80% is the lowest E
        cout << "Your Grade is E\n";
    else
        cout << "Your Grade is F\n";     // 59% is the lowest F
    
    return 0;
}