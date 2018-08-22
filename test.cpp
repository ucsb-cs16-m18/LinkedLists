#include "tddFuncs.h"
#include "strFuncs.h"
#include "recLinkedListFuncs.h"
#include "linkedListFuncs.h"
int main(){
	string firstString = "tarat";
	string secondString = "ratar";
	string thirdString = "dadadadadad";
	string fourthString = "asdkfjns";
	string fifthString = "asddsa";
	string sixthString = "Asddsa";
	

	
	string anagramOne = "cat";
        string anagramTwo = "tac";
	string anagramONe = "ice rfam";
	string anagramTWo = "cei rafm";
	string anagramONE = "ice cream";
	string anagramTWO = "cei rcema";
	string s1="asdk";
	string s2="dket";
	string specialChar = "$das dah";
	string specialChar2 = "sad $had";
	string alpha = "Aldsadmk";
	string alpha2 = "adldmksa";
	string length = "asnd";
	string length2 = "asn";
	string a1 = "asdnj 1fSf";
	string a2 = "d njsa1ffS";


	START_TEST_GROUP("IS_PALINDROME");
	assertEquals(true, isPalindrome(firstString), "isPalindrome(firstString)");
	assertEquals(true, isPalindrome(secondString), "isPalindrome(secondString)");
	assertEquals(true, isPalindrome(thirdString), "isPalindrome(thirdString)");
	assertEquals(false, isPalindrome(fourthString), "isPalindrome(fourthString)");
	assertEquals(true, isPalindrome(fifthString), "isPalindrome(fifthString)");
	assertEquals(true, isPalindrome(sixthString), "isPalindrome(sixthString)");
	

	START_TEST_GROUP("IS_ANAGRAM");
	assertEquals(true, isAnagram(anagramOne, anagramTwo), "isAnagram(anagramOne, anagramTwo)");
	assertEquals(true, isAnagram(anagramONe, anagramTWo), "isAnagram(anagramONe, anagramTWo)");
	assertEquals(true, isAnagram(anagramONE, anagramTWO), "isAnagram(anagramONE, anagramTWO)");
	assertEquals(false, isAnagram(anagramOne, anagramTWO), "isAnagram(anagramOne, isAnagramTWO)");
	assertEquals(false, isAnagram(s1, s2), "isAnagram(s1, s2)");
	assertEquals(true, isAnagram(specialChar, specialChar2), "isAnagram(specialChar, specialChar2)");
	assertEquals(true, isAnagram(alpha, alpha2), "isAnagram(alpha, alpha2)");
	assertEquals(false, isAnagram(length, length2), "isAnagram(length, length2)");
	assertEquals(true, isAnagram(a1, a2), "isAnagram(a1, a2)");

	START_TEST_GROUP("SUM");
	Node* first = new Node;
	first->data=2;
	first->next= new Node;
	first->next->data=4;
	first->next->next=new Node;
	first->next->next->data=5;
	first->next->next->next=NULL;
	assertEquals(11, recursiveSum(first), "recursiveSum(list1)");	
	delete first;

	Node* second = new Node;
	second->data=435;
	second->next= new Node;
	second->next->data=0;
	second->next->next=new Node;
	second->next->next->data=-8;
	second->next->next->next=NULL;
	assertEquals(427, recursiveSum(second), "recursiveSum(second)");
	delete second;

	Node* third = new Node;
	third->data=123;
	third->next= new Node;
	third->next->data=23;
	third->next->next=new Node;
	third->next->next->data=12;
	third->next->next->next=NULL;
	assertEquals(158, recursiveSum(third), "recursiveSum(third)");	
	delete 	third;

	Node* fourth= new Node;
	fourth->data=21;
	fourth->next=NULL;
	assertEquals(21, recursiveSum(fourth), "recursiveSum(fourth)");
	delete fourth;

	Node* fifth= new Node;
	fifth=NULL;
	assertEquals(NULL, recursiveSum(fifth), "recursiveSum(fifth)");
	delete fifth;


	START_TEST_GROUP("MAX");
	Node* firstMax = new Node;
	firstMax->data=10;
	firstMax->next= new Node;
	firstMax->next->data=20;
	firstMax->next->next=new Node;
	firstMax->next->next->data=5;
	firstMax->next->next->next=NULL;
	assertEquals(20, recursiveLargestValue(firstMax), "recursiveLargestValue(firstMax)");
	delete firstMax;
	
	
	Node* secondMax = new Node;
	secondMax->data=100;
	secondMax->next= new Node;
	secondMax->next->data=5;
	secondMax->next->next=new Node;
	secondMax->next->next->data=700;
	secondMax->next->next->next=new Node;
	secondMax->next->next->next->data=65;
	secondMax->next->next->next->next=NULL;
	assertEquals(700, recursiveLargestValue(secondMax), "recursiveLargestValue(secondMax)");
	delete secondMax;

	Node* thirdMax = new Node;
	thirdMax->data=100;
	thirdMax->next=NULL;
	assertEquals(100, recursiveLargestValue(thirdMax), "recursiveLargestValue(thirdMax)");
	delete thirdMax;
	
	Node* fourthMax = new Node;
	fourthMax->data=10;
	fourthMax->next=new Node;
	fourthMax->next->data=-20;
	fourthMax->next->next = new Node;
	fourthMax->next->next->data = 0;
	fourthMax->next->next->next=NULL;
	assertEquals(10, recursiveLargestValue(fourthMax), "recursiveLargestValue(fourthMax)");
	delete fourthMax;
	

	Node* fifthMax = new Node;
	fifthMax->data = 1;
	fifthMax->next = new Node;
	fifthMax->next->data = 4;
	fifthMax->next->next = new Node;
	fifthMax->next->next->data = 0;
	fifthMax->next->next->next = new Node;
	fifthMax->next->next->next->data=100;
	fifthMax->next->next->next->next=new Node;
	fifthMax->next->next->next->next->data=20;
	fifthMax->next->next->next->next->next=NULL;
	assertEquals(100, recursiveLargestValue(fifthMax), "recursiveLargestValue(fifthMax)");
	delete fifthMax;
	


return 0;
}

