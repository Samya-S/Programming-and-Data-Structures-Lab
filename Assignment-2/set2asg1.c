/***********************************
 * Section: 8
 * Machine No.: 15
 * Roll No.: 22MA10053
 * Name: Samya Saha
 * Assignment file name: set2asg1.c
 * Desription: gpa
************************************/

#include <stdio.h>

int main()
{
	printf("Letter Grade Numerical value Equivalent\n---------------------------------------\nLetter Grade\tNumerical Value\n------------\t---------------\n    X(Ex)\t\t10\n    A\t\t\t 9\n    B\t\t\t 8\n    C\t\t\t 7\n    D\t\t\t 6\n    P\t\t\t 5\n    F\t\t\t 0\n--------------------------------------\n\n");
	
	char MA, CY, CS, ME, CSlab, ED, CYlab;
	int MAgp, CYgp, CSgp, MEgp, CSlabgp, EDgp, CYlabgp;
	
	int EXinMA=0, EXinCY=0, EXinCS=0, EXinME=0, EXinCSlab=0, EXinED=0, EXinCYlab=0;
	int FinMA=0, FinCY=0, FinCS=0, FinME=0, FinCSlab=0, FinED=0, FinCYlab=0;
	
	float SGPA;
	float totalSGPA = 0;
	float maxSGPA = 0, minSGPA = 10;
	float totalgpMA=0, totalgpCY=0, totalgpCS=0, totalgpME=0, totalgpCSlab=0, totalgpED=0, totalgpCYlab=0;
	
	for(int i=1; i<=10; i++)
	{
		printf("Enter the GRADES of Student %d\n---------------------------------\n", i);
		printf("Enter the grade for MA10002: ");
		scanf("%c\n", &MA);
		if (MA=='X')
		{
			MAgp =  4*10;
			EXinMA++;
		}
		else if (MA=='A') MAgp =  4*9;
		else if (MA=='B') MAgp =  4*8;
		else if (MA=='C') MAgp =  4*7;
		else if (MA=='D') MAgp =  4*6;
		else if (MA=='P') MAgp =  4*5;
		else if (MA=='F')
		{
			MAgp =  4*0;
			FinMA++;
		}
		else printf("Wrong grade entered!!\n");
		
		printf("Enter the grade for CY11001: ");
		scanf("%c\n", &CY);
		if (CY=='X')
		{
			CYgp =  4*10;
			EXinCY++;
		}
		else if (CY=='A') CYgp =  4*9;
		else if (CY=='B') CYgp =  4*8;
		else if (CY=='C') CYgp =  4*7;
		else if (CY=='D') CYgp =  4*6;
		else if (CY=='P') CYgp =  4*5;
		else if (CY=='F')
		{
			CYgp =  4*0;
			FinCY++;
		}
		else printf("Wrong grade entered!!\n");
		
		
		printf("Enter the grade for CS11001: ");
		scanf("%c\n", &CS);
		if (CS=='X')
		{
			CSgp =  4*10;
			EXinCS++;
		}
		else if (CS=='A') CSgp =  4*9;
		else if (CS=='B') CSgp =  4*8;
		else if (CS=='C') CSgp =  4*7;
		else if (CS=='D') CSgp =  4*6;
		else if (CS=='P') CSgp =  4*5;
		else if (CS=='F')
		{
			CSgp =  4*0;
			FinCS++;
		}
		else printf("Wrong grade entered!!\n");

		printf("Enter the grade for ME10001: ");
		scanf("%c\n", &ME);
		if (ME=='X') 
		{
			MEgp =  4*10;
			EXinME++;
		}
		else if (ME=='A') MEgp =  4*9;
		else if (ME=='B') MEgp =  4*8;
		else if (ME=='C') MEgp =  4*7;
		else if (ME=='D') MEgp =  4*6;
		else if (ME=='P') MEgp =  4*5;
		else if (ME=='F')
		{
			MEgp =  4*0;
			FinME++;
		}
		else printf("Wrong grade entered!!\n");
		
		printf("Enter the grade for CS19001: ");
		scanf("%c\n", &CSlab);
		if (CSlab=='X') 
		{
			CSlabgp =  2*10;
			EXinCSlab++;
		}
		else if (CSlab=='A') CSlabgp =  2*9;
		else if (CSlab=='B') CSlabgp =  2*8;
		else if (CSlab=='C') CSlabgp =  2*7;
		else if (CSlab=='D') CSlabgp =  2*6;
		else if (CSlab=='P') CSlabgp =  2*5;
		else if (CSlab=='F') 
		{
			CSlabgp =  2*0;
			FinCSlab++;
		}
		else printf("Wrong grade entered!!\n");
		
		printf("Enter the grade for CE13001: ");
		scanf("%c\n", &ED);
		if (ED=='X') 
		{
			EDgp =  3*10;
			EXinED++;
		}
		else if (ED=='A') EDgp =  3*9;
		else if (ED=='B') EDgp =  3*8;
		else if (ED=='C') EDgp =  3*7;
		else if (ED=='D') EDgp =  3*6;
		else if (ED=='P') EDgp =  3*5;
		else if (ED=='F') 
		{
			EDgp =  3*0;
			FinED++;
		}
		else printf("Wrong grade entered!!\n");
		
		printf("Enter the grade for CY19001: ");
		scanf("%c\n", &CYlab);
		if (CYlab=='X') 
		{
			CYlabgp =  2*10;
			EXinCYlab++;
		}
		else if (CYlab=='A') CYlabgp =  2*9;
		else if (CYlab=='B') CYlabgp =  2*8;
		else if (CYlab=='C') CYlabgp =  2*7;
		else if (CYlab=='D') CYlabgp =  2*6;
		else if (CYlab=='P') CYlabgp =  2*5;
		else if (CYlab=='F') 
		{
			CYlabgp =  2*0;
			FinCYlab++;
		}
		else printf("Wrong grade entered!!\n");
		
		printf("---------------------------------\n");
		
		SGPA = (MAgp + CYgp + CSgp + MEgp + CSlabgp + EDgp + CYlabgp)/(4+4+4+4+2+3+2.0);
		printf("SGPA: %.2f\n\n", SGPA);
		
		totalSGPA = totalSGPA + SGPA;

		maxSGPA = SGPA * (SGPA > maxSGPA) + maxSGPA * (SGPA < maxSGPA);
		minSGPA = SGPA * (SGPA < minSGPA) + minSGPA * (SGPA > minSGPA);
		
		totalgpMA = totalgpMA + MAgp;
		totalgpCY = totalgpCY + CYgp;
		totalgpCS = totalgpCS + CSgp;
		totalgpME = totalgpME + MEgp;
		totalgpCSlab = totalgpCSlab + CSlabgp;
		totalgpED = totalgpED + EDgp;
		totalgpCYlab = totalgpCYlab + CYlabgp;
	}	
	
	printf("Average SGPA of 10 Students: %.2f\n", totalSGPA/10);
	printf("Maximum SGPA of 10 Students: %.2f\n", maxSGPA);
	printf("Minimum SGPA of 10 Students: %.2f\n\n", minSGPA);
		
	printf("Average Grade Point of MA10002: %.2f\n", totalgpMA/40);
	printf("Average Grade Point of CY11001: %.2f\n", totalgpCY/40);
	printf("Average Grade Point of CS11001: %.2f\n", totalgpCS/40);
	printf("Average Grade Point of ME10001: %.2f\n", totalgpME/40);
	printf("Average Grade Point of CS19001: %.2f\n", totalgpCSlab/20);
	printf("Average Grade Point of CE13001: %.2f\n", totalgpED/30);
	printf("Average Grade Point of CY19001: %.2f\n\n", totalgpCYlab/20);
	
	printf("Subjects having most number of Ex GRADES\n----------------------------------------------\n");
	int maxEX;
	//incomplete
	printf("\n");
	
	printf("Subjects having most number of F GRADES\n----------------------------------------------\n");
	//incomplete
	
	/*
	int EXinMA=0, EXinCY=0, EXinCS=0, EXinME=0, EXinCSlab=0, EXinED=0, EXinCYlab=0;
	int FinMA=0, FinCY=0, FinCS=0, FinME=0, FinCSlab=0, FinED=0, FinCYlab=0;
	*/
	return 0;
}
