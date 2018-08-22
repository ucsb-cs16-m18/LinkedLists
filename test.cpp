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
	string anagramOne = "cat";
        string anagramTwo = "tac";
	string anagramONe = "ice rfam";
	string anagramTWo = "cei rafm";
	string anagramONE = "ice cream";
	string anagramTWO = "cei rcema";
	string s1="asdk";
	string s2="dket";
	START_TEST_GROUP("IS_PALINDROME");
	assertEquals(true, isPalindrome(firstString), "isPalindrome(firstString)");
	assertEquals(true, isPalindrome(secondString), "isPalindrome(secondString)");
	assertEquals(true, isPalindrome(thirdString), "isPalindrome(thirdString)");
	assertEquals(false, isPalindrome(fourthString), "isPalindrome(fourthString)");
	assertEquals(true, isPalindrome(fifthString), "isPalindrome(fifthString)");
	START_TEST_GROUP("IS_ANAGRAM");
	assertEquals(true, isAnagram(anagramOne, anagramTwo), "isAnagram(anagramOne, anagramTwo)");
	assertEquals(true, isAnagram(anagramONe, anagramTWo), "isAnagram(anagramONe, anagramTWo)");
	assertEquals(true, isAnagram(anagramONE, anagramTWO), "isAnagram(anagramONE, anagramTWO)");
	assertEquals(false, isAnagram(anagramOne, anagramTWO), "isAnagram(anagramOne, isAnagramTWO)");
	assertEquals(false, isAnagram(s1, s2), "isAnagram(s1, s2)");
	
	START_TEST_GROUP("SUM");
	int l1[3]={9, 3, 61};
	LinkedList *list1 = arrayToLinkedList(l1,3);
	assertEquals(73, recursiveSum(list1), "recursiveSum(list1");	
	return 0;
}

