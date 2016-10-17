/*
 * Original version authored by: Brett Trost and Tony Kusalik
 */
#include <iostream>
#include <stdio.h>

using namespace std;

/* Determines whether its integer argument is a leap year and returns
 * a dynamically allocated string with the determination.  */
/* Do NOT change function isLeap.  Just TEST it. */
char *isLeap(int year) {

	char *result = new char[80];

	if (1 >= year) {
		sprintf(result, "%d error\n", year);
	} else {
		if (0 == year % 400) {
			sprintf(result, "%d yes\n", year);
		} if (0 == year % 100) {
			sprintf(result, "%d no\n", year);
		} else if (0 == year % 4) {
			sprintf(result, "%d yes\n", year);
		} else {
			sprintf(result, "%d no\n", year);	
		}
	}

	return result;
}

/* Create your testing scaffold here */
int main(int argc, char *argv[]) {

    //    int test[]={1, 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013,2014, 2015, 2016, 2017, 2018};
//    for (int i=0; i<24; i++){
//        cout << isLeap(test[i]);
//    }
    
    int numOfTests;
    int year;
    cin >> numOfTests;
    for (int i=0; i<numOfTests; i++) {
        cin >> year;
        cout << isLeap(year);
    }
    
    return 0;
}

	
	
