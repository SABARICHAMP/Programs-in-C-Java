import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int count=0;
		Scanner s=new Scanner(System.in);
		String str=s.nextLine();
		str=str.replaceAll(" ","");
		int len=str.length();
	
		for(int i=0;i<len;i++)
		{
			char c=str.charAt(i);
			if(Character.isDigit(c))
			{
				count++;
			}
		}
	            System.out.println(count);
	}
}
