#include<stdio.h>
#include<string.h>

struct Marks{
	int Id_no;
	char name[30];
	int chem_marks;
	int maths_marks;
	int phy_marks;
	float percentage;
};
float percentage(struct Marks s)
{

 s.percentage=((s.chem_marks+s.maths_marks+s.phy_marks)/3);
 return s.percentage;
	
}


int main()
{
struct Marks s1,s2,s3,s4,s5;
//1st student details
s1.Id_no=1;
strcpy(s1.name,"Sunil");
s1.chem_marks=56;
s1.maths_marks=76;
s1.phy_marks=87;	

//2nd student details
s2.Id_no=2;
strcpy(s2.name,"Nimal");
s2.chem_marks=57;
s2.maths_marks=56;
s2.phy_marks=88;

//3rd student details
s3.Id_no=3;
strcpy(s3.name,"Ishan");
s3.chem_marks=76;
s3.maths_marks=76;
s3.phy_marks=77;

//4th student details
s4.Id_no=4;
strcpy(s4.name,"Reshmika");
s4.chem_marks=56;
s4.maths_marks=65;
s4.phy_marks=91;

//5th student details
s5.Id_no=5;
strcpy(s5.name,"Dilshan");
s5.chem_marks=78;
s5.maths_marks=46;
s5.phy_marks=26;
printf("Sunil's percentage=%.2f\n",percentage(s1));
printf("Nimall's percentage=%.2f\n",percentage(s2));
printf("Ishan's percentage=%.2f\n",percentage(s3));
printf("Reshmika's percentage=%.2f\n",percentage(s4));
printf("Dilshan's percentage=%.2f\n",percentage(s5));
	
}
