
 //  In the Name of Allah, the Most Beneficent, the Most Merciful.
// This program is Our Bachelor Project at Faculty of Engineering, Alexandria University. Supervised by Professor Sherif Sabry.
// This is an Expert system for troubleshooting machinery equipment
// Intelligent Maintenance Management systems
// Production Engineering Department, Industrial Engineering.
// <3Tahan<3Kohla<3Rabie<3Nader<3Nashshar<3 
// All rights reserved 2020 
// All thanks and love to our families, friends <3 
// Best Wishes <3 <3 <3

#include <stdio.h>

int main(int argc, char **argv)
{

		printf("************************************************************************************\n");

	
		printf("Intelligent Maintenance Management System for Process Equipment\n");
		printf("Production Engineering Department- Industrial Engineering 2020 \n");
		printf("Supervised by Professor Sherif Sabry\n");
		printf("Made by <3Tahan<3Kohla<3Rabie<3Nader<3Nashshar<3 \n");
		printf("All rights reserved.\n\n");

    printf("************************************************************************************\n");

printf("    ****     ***         ***    ***         ***        ****     \n");
printf("    ****     **  *      * **    **  *      * **      **    *    \n");
printf("     **      **   **  **  **    **   **  **  **      **         \n");
printf("     **      **    ***    **    **    ***    **        ***      \n");
printf("     **      **           **    **           **           **    \n");
printf("     **      **           **    **           **            **   \n");
printf("    ****     **           **    **           **       *   **    \n");
printf("    ****     **           **    **           **        ***      \n");
    printf("************************************************************************************\n");

printf("    ****   *****  ****         ***     ***       ***     ***    \n");
printf("    **  *  **     **  **      *   *   *   *     *   *   *   *   \n");
printf("    ****   *****  **   **        **   *   *        **   *   *   \n");
printf("    **     **     **  **       **     *   *      **     *   *   \n");
printf("    **     *****  ****        *****    ***      *****    ***    \n");
         



    printf("************************************************************************************\n");
	printf("Please answer the following questions with characters y or n only\n\n");
	printf("************************************************************************************\n");

	// Defining Symptoms variables
	char  A,B, C, D, E, F, G, H;
	
	// Defining Possible Causes Variables 
	
	char c1[500]= "Pump Is Cavitating (Symptom For Liquid Vaporizing In Suction System)— Horizontal Pumps\nPossible Remedies: \n"
		"-Check NPSHa/NPSHr Margin \n-If Pump Is Above Liquid Level, Raise Liquid Level Closer To Pump \n-If Liquid Is Above Pump, Increase Liquid Level Elevation\n\n" ;
	
	char c2[500]= "Insufficient Immersion Of Suction Pipe Or Bell (Vertical Turbine Pumps) \n"
            "Possible Remedies: \n- Lower Suction Pipe Or Raise Sump Level \n- Increase System Resistance\n\n" ;
			
	char c3[500]= "Pump Not Primed\nPossibe Remedies:\n-Fill Pump & Suction Piping Complete With Liquid \n-Eliminate High Points In Suction \n-Remove All Non-Condensibles (Air From Pump, Piping And Valves)"
        " -Eliminate High Points In Suction Piping \n-Check For Faulty Foot Valve Or Check Valve  \n\n";
			
	char c4[500]= "Non-Condensibles In Liquid\nPossible Remedies:\n-Check For Gas/ Air Ingress Through Suction System/Piping\n-Install Gas Separation Chamber\n\n" ;
		   
	char c5[500]="Supply Tank Empty \nPossible Remedies:\n-Refill Supply Tank\n\n" ;
			
	char c6[600]="Obstructions In Lines Or Pump Housing\nPossible Remedies:\n-Inspect And Clear\n\n" ;
			
	char c7[500]="Strainer Partially Clogged\nPossible Remedies:\n-Inspect and Clean\n\n" ;
		   
	char c8[500]="Pump Impeller Clogged\nPossible Remedies:\n-Check For Damage And Clean\n\n" ;
			
	char c9[500]="Suction or/& Dischrg. Valve(s) Closed\nPossible Remedies:\n-Shut Down & Open Valves\n\n" ;
			
	char c10[500]="Viscosity Too High\nPossible Remedies:\n-Heat Up Liquid To Reduce Viscosity\n-Increase Size Of Discharge Piping To Reduce Pressure Loss\n-Use Larger Driver Or Change Type Of Pump\n-Slow Pump Down\n\n" ;
			 
	char c11[500]= "Specific Gravity Too High\nPossible Remedies:\n-Check Design Specific Gravity\n\n" ;
			 
	char c12[500]= "Total System Head Lower Than Design Head Of Pump\nPossible Remedies:\n-Increase System Resistance To Obtain Design Flow \n-Check Design Parameters Such As Impeller Size etc.\n\n" ;
			 
	char c13[500]= "Total System Head Higher Than Design Head Of Pump \nPossible Remedies:\n-Decrease System Resistance To Obtain Design Flow\n-Check Design Parameters Such As Impeller Size, etc\n\n" ;
	
	char c14[500]= "Unsuitable Pumps In Parallel Operation\nPossible Remedies:\n-Check Design Parameters\n\n" ;
	
	char c15[500]= "Improper Mechanical Seal\n Possibe Remedies:\nCheck Mechanical Seal Selection Strategy\n\n" ;
	
	char c16[500]= "Speed Too High \n Possibe Remedies:\n-Check Motor Voltage — Slow Down Driver\n\n" ;
	
	char c17[500]= "Speed Too Low \nPossible Remedies:\n-Consult Driver Troubleshooting Guide\n\n" ;
	
	char c18[500]= "Wrong Direction Of Rotation \nPossible Remedies:\n-Check Rotation With Arrow On Casing — Reverse Polarity On Motor\n\n" ;
	
	char c19[500]= "Impeller Installed Backward (Double Suction Imp.)\nPossible Remedies:\n-Inspect\n\n" ;
	
	char c20[500]= "Misalignment\nPossibe Remedies:\n-Check Angular And Parallel Alignment Between Pump & Driver\n\n" ;
	
	char c21[500]= "Casing Distorted From Excessive Pipe Strain\nPossible Remedies:\n-Check For Misalignment \n-Check Pump For Wear Between Casing And Rotating Elements\n-Analyze Piping Loads\n\n" ;
	
	char c22[500]= "Inadequate Grouting Of Base\nPossible Remedies:\n-Check Grouting & Regrout If Required\n\n" ;
	
	char c23[500]= "Bent Shaft\nPossible Remedies:\n-Check Deflection (Should Not Exceed 0.002""). Replace Shaft & Bearings If Necessary\n\n ";
	
	char c24[500]= "Internal Wear\nPossible Remedies:\n-Check Impeller Clearances\n\n"  ;
	
	char c25[500]= "Mechanical Defects Worn, Rusted, Defective Bearings\nPossible Remedies:\n-Inspect Parts For Defects — Repair Or Replace. Use Bearing Failure Analysis Guide \n-Check Lubrication Procedures\n\n" ;
	
	char c26[500]= "Unbalance -Driver\nPossible Remedies:\n-Run Driver Disconnected From Pump Unit — Perform Vibration Analysis\n\n"  ;
	
	char c27[500]= "Unbalance - Pump\nPossible Remedies:\n-Investigate Natural Frequency\n\n"  ;
	
	char c28[500]= "Motor Troubles\nPossible Remedies:\n-Consult Motor Troubleshooting Guide\n\n"  ;
	
    // Asking the user about each symptom whether it is true or false
	// First symptom A

	printf("\n\n A- Do you have no liquid Delivery? \n "); 
	scanf("  %c", &A);	
	for ( A; A!='y' && A!='n'; scanf("  %c", &A))
	{
		printf("y or n please \n"); 
		} 
	
	// Second symptom B
	printf("\n\n B- Do you have Insufficient Capacity? \n "); 
	scanf("  %c", &B);	
	for ( B ; B!='y' && B!='n'; scanf("  %c", &B))
	{
		printf("y or n please \n"); 
		} 
		
	// Third symptom C
    printf("\n\n C- Do you have Intermittent Operation? \n"); 
	scanf("  %c", &C);
	for ( C ; C!='y' && C!='n'; scanf("  %c", &C))
	{
		printf("y or n please \n"); 
		}
		
	// Fourth symptom D
    printf("\n\n D- Do you have Insufficient Disch. Pressure? \n "); 
	scanf("  %c", &D);	
	for ( D ; D!='y' && D!='n'; scanf("  %c", &D))
	{
		printf("y or n please \n"); 
		}
	
	// Fifth symptom E
    printf("\n\n E- Do you have Short Bearing Life? \n"); 
	scanf("  %c", &E);	
	for ( E ; E!='y' && E!='n'; scanf("  %c", &E))
	{
		printf("y or n please \n"); 
		}
	// Sixth symptom F
    printf("\n\n F- Do you have Short Mech. Seal Life? \n"); 
	scanf("  %c", &F); 	
	for ( F ; F!='y' && F!='n'; scanf("  %c", &F))
	{
		printf("y or n please \n"); 
		}
	// seventh symptom G
    printf("\n\n G- Do you have Viberation and Noise? \n"); 
	scanf("  %c", &G);	
	for ( G ; G!='y' && G!='n'; scanf("  %c", &G))
	{
		printf("y or n please \n"); 
		}
	// Eighth symptom H
    printf("\n\n H- Do you have Power Demand Excessive ? \n"); 
	scanf("  %c", &H);	
	for ( H ; H!='y' && H!='n'; scanf("  %c", &H))
	{
		printf("y or n please \n"); 
		}
		
		// Printing Results based on Previous user inputs and Troubleshooting Procedures
		
		if ( A == 'y' ) 
		
		{  
		printf("************************************************************************************\n");
        printf( " ( A ) - No liquid Delivery Possible Causes and their Remedies are:\n  1-%s - 1-%s -  2-%s - 3-%s - 4-%s - 5-%s - 6-%s - 7-%s - 8-%s - 9-%s",c2,c3,c1,c5,c17,c18,c13,c14,c8,c9);
		}
		
		// **************************************
		
		if ( B == 'y' ) 
		 
		{  
		printf("************************************************************************************\n");
        printf("( B ) - Insufficient Capacity Possible Causes and their Remedies are:\n 1-%s - 1-%s -  2-%s - 3-%s - 4-%s - 5-%s - 6-%s - 7-%s - 8-%s - 9-%s - 10-%s",c2,c1,c4,c7,c17,c13,c14,c10,c8,c6,c19); 
		}

        //*************************************
		
		if ( C == 'y')

		{ 
		printf("************************************************************************************\n");
        printf("( C ) - Intermittent Operation Possible Causes and their remedies are:\n 1-%s - 1-%s -  2-%s - 3-%s - 4-%s",c2,c1,c3,c4,c13); 
		}
		
      //*****************************************	
	  
		if ( D == 'y')
			
		{  		
		printf("\n************************************************************************************\n");
	    printf(" ( D ) Insufficient Disch.Pressure Possible Causes and their Remedies are:\n- 1-%s -  2-%s - 3-%s - 4-%s - 5-%s - 6-%s - 7-%s - 8-%s ", c4,c17,c18,c12,c10, c14,c6,c24 );
		}
			
		//***********************************
		
		if ( E == 'y')
			
		{
		printf("\n************************************************************************************\n");
        printf("( E ) - Short Bearing Life Possible Causes and their Remedies are:\n  1-%s -  2-%s - 3-%s - 4-%s - 5-%s - 6-%s",c20,c21,c23,c27,c26,c28); 
		}
		
		//***********************************
		
		if ( F == 'y')
			
           {  
			printf("\n************************************************************************************\n");
			printf("( F ) - Short Mech.Seal Life Possible Causes and their Remedies are:\n  1-%s -  2-%s - 3-%s - 4-%s - 5-%s - 6-%s - 7-%s - 8-%s - 9-%s - 10-%s - 11-%s",c15,c20,c21,c23,c25,c27,c26,c28,c1,c13,c12);
		   }
		   
		   //************************************
		   
       if (  G == 'y')
		   
	       { 
			printf("\n************************************************************************************\n");
		   printf("( G ) - Vibration and Noise Possible Causes and their Remedies are:\n  1-%s - 1-%s -  2-%s - 3-%s - 4-%s - 5-%s - 6-%s - 7-%s - 8-%s - 9-%s - 10-%s",c1,c2,c13,c27,c20,c21,c22,c23,c6,c25,c26,c28);		   
		   }
		 
		 //***********************************
		 
       if ( H == 'y') 
		   
        { 
		printf("\n************************************************************************************\n"); 
	   printf("( H ) - Excessive Power Demand Possible Causes and their Remedies are:\n  1-%s -  2-%s - 3-%s - 4-%s - 5-%s - 6-%s - 7-%s - 8-%s - 9-%s - 10-%s - 11-%s - 12-%s",c16,c11,
	   c12,c10,c8,c18,c20,c23,c24,c25,c28,c19); 
		}
	   //***********************************
	 
	
	//اللهم صل على محمد و على آل  محمد كما صليت على إبراهيم و على آل إبراهيم في العالمين إنك حميد مجيد
	// اللهم بارك على محمد و على آل محمد كما باركت على إبراهيم و على آل إبراهيم في العالمين إنك حميد مجيد
	// تم بحمد الله <3 
	
	
	
	
		   
	return 0;
}
