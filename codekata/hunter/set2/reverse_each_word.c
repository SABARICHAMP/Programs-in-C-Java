import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
	Scanner s=new Scanner(System.in);
	String str=s.nextLine();
	String[] words=str.split(" ");
	String reverseString="";
	for(int i=0;i<words.length;i++)
	{
		String word=words[i];
		String reversedWord="";
		for(int j=word.length()-1;j>=0;j--)
		{
			reversedWord+=word.charAt(j);
		}
		reverseString=reverseString+reversedWord + " ";
		}
		System.out.println(reverseString);
	}
	
	}
