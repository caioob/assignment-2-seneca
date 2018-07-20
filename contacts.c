/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 2
Milestone:  1
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include"contacts.h"

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-1 Milestone-4 |
// |        function definitions below...            |
// +-------------------------------------------------+

// getName:
void getName(struct Name * contactName, int check[])
{
	char answer;
	printf("Please enter the contact's first name: ");
	scanf("%30s", contactName->firstName);
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	getchar();
	scanf("%c", &answer);
	if (answer == 'y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6s", contactName->middleInitial);
		check[0] = 1;
	}
	printf("Please enter the contact's last name: ");
	scanf("%35s", contactName->lastName);
}

// getAddress:
void getAddress(struct Address * contactAddress, int check[])
{
	char answer;
	printf("Please enter the contact's street number: ");
	scanf("%d", &contactAddress->streetNumber);
	getchar();
	printf("Please enter the contact's street name: ");
	scanf("%[^\n]", contactAddress->street);
	getchar();
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf("%c", &answer);
	getchar();
	if (answer == 'y') {
		printf("Please enter the contact's apartment number: ");
		scanf("%d", &contactAddress->apartmentNumber);
		getchar();
		check[1] = 1;
	}
	printf("Please enter the contact's postal code: ");
	scanf("%[^\n]", contactAddress->postalCode);
	getchar();
	printf("Please enter the contact's city: ");
	scanf("%[^\n]", contactAddress->city);

}

// getNumbers:
void getNumbers(struct Numbers * contactNumbers, int check[])
{
	char answer;
	getchar();
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf("%c", &answer);
	if (answer == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf("%20s", contactNumbers->cell);
		getchar();
		check[2] = 1;

	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf("%c", &answer);
	if (answer == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf("%20s", contactNumbers->home);
		getchar();
		check[3] = 1;
	}

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf("%c", &answer);
	if (answer == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf("%20s", contactNumbers->business);
		check[4] = 1;
	}
}

// +-------------------------------------------+
// | ====== Assignment 2 | Milestone 1 ======= |
// +-------------------------------------------+

// getContact:
// Define Empty function definition below:
void getContact(struct Contact * contactContact) {

}