import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner (System.in);
		int T,N;
		int min=0,max=0;
		T=sc.nextInt();

		for (int i=0;i<T;i++)
		
		{
		   	N=sc.nextInt();
		   	if (N==1)
		   	{
		   	    min=1;
		   	    max=1;
		   	}
		    else if (N%2==0)
		    {
		        max=N;
		        min=N/2;
		    }
		    else
		    {
		        min=(N/2)+1;
		        max=N;
		    }
		   
		}
		System.out.println(min);
		System.out.println(max);
		

	}
}
