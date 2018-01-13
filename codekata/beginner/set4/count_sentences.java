import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s=new Scanner(System.in);
		String str=s.nextLine();
		str=str.replaceAll(" ","");
		int len=str.split("[.]+").length;
	            System.out.println(len);
	}
}
