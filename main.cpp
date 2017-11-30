/** Complex Number Calculations
 *  Computer Programming
 *  C00187998
 *  Gerard Murphy
 *  27/11/17
 */

/**< Preprocessor Directives */
#include <iostream>

/**< Creating a structure to contain real and imaginery numbers */
struct complexnumber
{
    float real;
    float imag;
};

/**< User-defined functions */
complexnumber add       (complexnumber struct1, complexnumber struct2);
complexnumber subtract  (complexnumber struct1, complexnumber struct2);
complexnumber multiply  (complexnumber struct1, complexnumber struct2);
complexnumber divide    (complexnumber struct1, complexnumber struct2);

using namespace std;

/**< Main Function */
int main()
{
    /**< Defines variables as a structure in the form of a complex number */
    struct complexnumber entry1, entry2, sum, sub, mul, div;

    /**< entering a real number */
    cout << "Enter a Real number: " << endl;
    cin >> entry1.real;

    /**< entering an imaginery number */
    cout << "Enter an Imaginary number: " << endl;
    cin >> entry1.imag;

    cout << "Enter another Real number: " << endl;
    cin >> entry2.real;

    cout << "Enter another Imaginary number: " << endl;
    cin >> entry2.imag;

    /**< Adds complex numbers "entry1" and "entry2" and returns the structure as "sum" */
    sum = add(entry1, entry2);
    /**< subtracts complex numbers "entry1" and "entry2" and returns the structure as "sub" */
    sub = subtract(entry1, entry2);
    /**< multiplies complex numbers "entry1" and "entry2" and returns the structure as "mul" */
    mul = multiply(entry1, entry2);
    /**< divides complex numbers "entry1" and "entry2" and returns the structure as "div" */
    div = divide(entry1, entry2);

        /**< Displaying calculations and results */
        cout << "The sum of "<<entry1.real<< "+" << entry1.imag<< "j"<< " + "<<entry2.real<< "+" << entry2.imag<< "j"<< " = " << sum.real << "+" << sum.imag << "j" << endl;
        cout << "The sum of "<<entry1.real<< "+" << entry1.imag<< "j"<< " - "<<entry2.real<< "+" << entry2.imag<< "j"<< " = " << sub.real << "+" << sub.imag << "j" << endl;
        cout << "The sum of "<<entry1.real<< "+" << entry1.imag<< "j"<< " x "<<entry2.real<< "+" << entry2.imag<< "j"<< " = " << mul.real << "+" << mul.imag << "j" << endl;
        cout << "The sum of "<<entry1.real<< "+" << entry1.imag<< "j"<< " / "<<entry2.real<< "+" << entry2.imag<< "j"<< " = " << div.real << "+" << div.imag << "j" << endl;


    return 0;
}

/**< User-defined function to add complex numbers */
complexnumber add(complexnumber struct1, complexnumber struct2)
{

    struct complexnumber Sum;


    Sum.real = struct1.real + struct2.real;

    Sum.imag = struct1.imag + struct2.imag;

    return Sum;
}

/**< User-defined function to subtract complex numbers */
complexnumber subtract(complexnumber struct1, complexnumber struct2)
{

    struct complexnumber Sub;

    Sub.real = struct1.real - struct2.real;
    Sub.imag = struct1.imag - struct2.imag;

    return Sub;
}

/**< User-defined function to multiply complex numbers */
complexnumber multiply(complexnumber struct1, complexnumber struct2)
{

    struct complexnumber Mul;


    Mul.real = struct1.real*struct2.real - struct1.imag*struct2.imag;
    Mul.imag = struct1.imag*struct2.real + struct1.real*struct2.imag;

    return Mul;
}

/**< User-defined function to divide complex numbers */
complexnumber divide(complexnumber struct1, complexnumber struct2)
{

    struct complexnumber Div;

    float denominator;


    Div.real = struct1.real*struct2.real + struct1.imag*struct2.imag;
    Div.imag = struct1.imag*struct2.real - struct1.real*struct2.imag;
    denominator = struct2.real*struct2.real + struct2.imag*struct2.imag;
    Div.real = Div.real/denominator;
    Div.imag = Div.imag/denominator;

    return Div;
}
