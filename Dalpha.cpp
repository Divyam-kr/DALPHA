

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#include<windows.h>






int main ()
{
int u , a , b , c ,n , m , k , g , seco , i;
float r , p , w;
char ch;

       
	    printf("++++++++++++--------xxxxxxxxxxxx--------++++++++++++++++++++++++--------xxxxxxxxxxxx--------++++++++++++");
        printf("\n\n\t\t\t\t\tWELCOME TO DALPHA CALCULATOR PRO \n");
        printf("\t\t\t\t\t       Creator :: Divyam\n\n");
        printf("++++++++++++--------xxxxxxxxxxxx--------++++++++++++++++++++++++--------xxxxxxxxxxxx--------++++++++++++");
   
do{
	
    //Beginning of tool
       

   
do
{
	printf("\n\n------------------------------------------------MAIN MENU-----------------------------------------------");
    //Main Menu
	printf("\n\n\n\t\t\tSelect the option which you want me to execute for you\n\n");
	printf("\n\n1.Airthmetic Calculator\n");
	printf("2.Matrix based Operations\n");
	printf("3.Unit Convertor\n");
	printf("4.Calculate the value of any Trignometric Ratios\n");
	printf("5.Interest based problems");
	printf("\n6.Age detector");
	printf("\n\n7.Exit\n");
	printf("--------------------------------------------------------------------------------------------------------\n");
	
	printf("\n\t\t      Enter the option number of the tool you want to work upon -> ");
	scanf("\n%d" , &m);
	printf("--------------------------------------------------------------------------------------------------------\n");
}while(m<1 || m>7 );

//Logical operations
if(m==1)
{
    do
    {
    printf("\n\n**************************************************************************");
    printf("\n\t\t\t\tAirthmetic Calculator\n");
    printf("**************************************************************************");
    do
    {
    printf ("\n \n \n1.Perform Addition");
    printf ("\n2.Perform Substraction");
    printf ("\n3.Perform Multiplication");
    printf ("\n4.Perform Division");
     printf("\n5.Calculate square root of any number.");
     
     printf ("\n6.Find the value of e^x for any 'x'");
     
     printf ("\n7.Find the power of any number");
     printf ("\n8.Find the Factorial of any number");
     printf ("\n9.Find the log of any number");
     printf ("\n10.Find Percentage");
     printf ("\n\n11.Other\n");
     
     
    
    printf ("\n\n\nEnter the operation which you want to perform : ");
    scanf ("\n %d", &u);
    }while (u < 1 || u > 11);

      

     /* if(u==11)
      {
 	   printf("::::::::::::xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx::::::::::::");

       printf("\n\t\t\t!!Thank You For Using My Software!!!");
       printf("\n\t\t\t\tCreator :: Divyam");
 	   printf("\n::::::::::::xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx::::::::::::");
   	 break;
 	
 	
         }*/
 
 

        printf ("\n \t \t \tYou are now allowed to access this features\n\n");
if (u == 1)
{
	int *p , n , sum=0 , i;
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n \t \t  Lets go for Addition\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	  printf("\nEnter the number of elements you want to add:");
    scanf("%d" , &n);
    p=(int*)malloc(n*sizeof(int));
    
    for(i=1;i<=n;i++)
    {
        printf("\nEnter the Element %d:" , i);
        scanf("%d" , &p[i]);
        sum=sum+p[i];
    }
   /* printf ("\nEnter the first number:");
    scanf ("%d", &n);
    printf("\nEnter the second number:");
    scanf("%d" , &b);
    c=a+b;*/
    printf("............................................");
    printf("\nThe sum of the numbers you want is %d" , sum);
    printf("\n............................................");
}
if(u==2)
{
	printf("----------------------------------------------------");
    printf("\n \t \t Lets go for Substraction");
    printf("\n----------------------------------------------------");
    printf ("\n\nEnter the first number:");
    scanf ("%d", &a);
    printf("\nEnter the the number which you want to substract from %d:" , a);
    scanf("%d" , &b);
    c=a-b;
    printf("\n............................................\n");
    printf("The difference between %d and %d is %d" , a , b , c);
    printf("\n............................................");
}

 

if(u==3)
{   printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
    printf("\n \t    Lets go for Multiplication\n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
    	int *p , n , mult=1 , i;
    
      printf("\n\nEnter the number of elements you want to multiply:");
    scanf("%d" , &n);
    p=(int*)malloc(n*sizeof(int));
    
    for(i=1;i<=n;i++)
    {
        printf("/nEnter the Element %d:" , i);
        scanf("%d" , &p[i]);
        mult=mult*p[i];
    }
   /* printf ("\nEnter the first number:");
    scanf ("%d", &a);
    printf("\nEnter the second number:");
    scanf("%d" , &b);
    c=a*b;*/
    printf("............................................");
    printf("\nThe product of the numbers you want is %d\n" , mult);
    printf("............................................");
}
if(u==4)
{
	float a , b;
	printf("////////////////////////////////////////////////////");
    printf("\n \t \t Lets go for Division\n");
    printf("////////////////////////////////////////////////////");
    printf ("\n\nEnter the Divident:");
    scanf ("%f", &a);
    printf("\nEnter the Divisor:");
    scanf("%f" , &b);
    r=a/b;
    printf("............................................");
    printf("\nWhen we divided %.1f with %.1f , we get ans as %.2f\n" , a , b , r);
    printf("............................................");
}
if(u==5)
{      
       int num;
       float sq;         
     	printf("\n\n Enter the number :");
     	scanf("%d" , &num);
     	
     	sq=sqrt(num);
     	printf("............................................");
     	printf("\n The square root of %d is %.3f\n " , num , sq);
     	printf("............................................");

   
}
if(u==6)
{
	float e;
	float value;

	 printf("\n \t \t \t \t Lets work it out ! ");
    printf ("\n\nFor e^x , Enter the value of x :");
    scanf ("%f", &e);
    
    value=pow(2.718281828459045 , e); 
    printf("\n\t\t<<  e^%.1f = %.3f  >>" , e , value);
	
	
}
if(u==7)
{
	float po , num;
	float value;

	 printf("\n \t \t \t \t Lets work out with Exponent");
    printf ("\n\nEnter the base number :");
    scanf ("%f", &num);
    
     printf ("\nEnter the exponential number :");
    scanf ("%f", &po);
    
    value=pow(num , po); 
    printf("\n<< %.1f^%.0f = %.2f >>" , num , po , value);
	
	
}
if(u==8)
{
	int fact=1;
	 printf("\n \t \t \t \t Lets find out Factorial");
    printf ("\n\nEnter the number :");
    scanf ("%d", &n);
    
    for(i=1;i<=n;i++)
    {
    	fact = fact*i;
	}
	printf("====================================================");
    printf("\nFactorial of %d is %d \n" , n , fact);
    printf("====================================================");
	
	
}


if(u==9)

      {
      	float log , y ;
      	printf("\nLets go for log function ");
      	printf("\n\nFor log(x) , Enter the value of x : ");
      	scanf("%f" , &log);
      	y=log10(log);
      	printf("====================================================");
      	printf("\n The value of log(%.0f) to the base 10 is %.4f\n" , log , y);
      	printf("====================================================");
	  }


if(u==10)
      {
      		float a,b;
	int w;
    printf("\n \t \t \t \t Lets find out the percentage");
    printf ("\n\nEnter the number obtained:");
    scanf ("%f", &a);
    printf("\nEnter the total number alloted:");
    scanf("%f" , &b);
    p=a/b;
    w=p*100;
    printf("====================================================");
    printf("\nYou have secured %d percent\n" , w);
    printf("====================================================");
	  }

fflush(stdin);

  printf("\n\n***************************************************************");
  printf("\nPress 1 for working out more Airthmetic problems:\nPress 2 for Main Menu:\nPress 3 if you want to exit:\n");
  printf("***************************************************************\n");
  printf("Enter here -> ");
  scanf("%d" , &g);
  
    }while(g==1);
}


if(m==2)
{
    int mtrix;    
    do
    {
    do
    { 
    printf("\n\n**************************************************************************");
    printf("\n\t\t\t\tMatrix Menu\n");
    printf("**************************************************************************");
    	
	printf("\n1.Matrix Addition\n");
	printf("2.Matrix Substraction\n");
	printf("3.Matrix Multiplication\n");
	printf("4.Transpose of any Matrix\n");
	printf("5.Value of any Matrix\n");
		printf("6.Adjoint of any Matrix\n");
	printf ("\n\n7.Other\n");
	    printf("*************************");
	printf("\nChoose the operation you want to carry out : ");
	scanf("%d" , &mtrix);
    }while(mtrix <1 || mtrix >7);
    
   
    
   /*  if(mtrix==7)
    {
 	   printf("\n::::::::::::xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx::::::::::::");

      printf("\n\t\t\t!!Thank You For Using My Software!!!");
      printf("\n\t\t\t\tCreator :: Divyam");
      printf("\n::::::::::::xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx::::::::::::");
	 break;
 	
 	
 }  */
    
        printf ("\n \t \t \tYou are now allowed to access this features\n");
        int i,j, k ;
        int Matrix1[3][3];
        int Matrix2[3][3] ;
        int Addition[3][3];
        int Substraction[3][3];
        int Transpose[3][3];
        int Multiplication[i][j];

    



if(mtrix==1)
			 {
			    	printf("\n\t\t\t\t\t***********Matrix Addition***********");
			    	printf("\n\n\nEnter Values of Matrix 1(3*3):- ");			
                   	for(i=0;i<3;i++){
               		for(j=0;j<3;++j){
        			scanf("%d",&Matrix1[i][j]);			
		}
	}
					printf("\nEnter Values of Matrix 2(3*3):- ");			
                  	for(i=0;i<3;++i){
	              	for(j=0;j<3;++j){
	           		scanf("%d",&Matrix2[i][j]);			
		}
	}  
                        printf("Given Matrix 1 is\n");
                        
                         for(i=0;i<3;i++) 
 {
                         for(j=0;j<3;j++)
    {
                         printf(" %d " ,Matrix1[i][j] );
}                        printf("\n");
}

                       printf("Given Matrix 2 is\n");
                        for(i=0;i<3;i++)
{
                          for(j=0;j<3;j++)
    {
                       printf(" %d " ,Matrix2[i][j] );
}                         printf("\n");
}
    
    
				
					printf("\nAddition of Matrix is :-");
                 	for(i=0;i<3;i++){
	             	printf("\n");
             		for(j=0;j<3;++j){
		         	printf("%d ",Matrix1[i][j]+Matrix2[i][j]);			
		}
	}
}

if(mtrix==2)
{                  	printf("\n\t\t\t\t\t***********Matrix Substraction***********");
			    	printf("\n\n\nEnter Values of Matrix 1(3*3):- ");			
                   	for(i=0;i<3;i++){
               		for(j=0;j<3;++j){
        			scanf("%d",&Matrix1[i][j]);			
		}
	}
			    	printf("\nEnter Values of Matrix 2:- ");			
                  	for(i=0;i<3;++i){
	              	for(j=0;j<3;++j){
	           		scanf("%d",&Matrix2[i][j]);			
		}
	}  
                        printf("Given Matrix 1 is\n");
                        
                         for(i=0;i<3;i++) 
 {
                         for(j=0;j<3;j++)
    {
                         printf(" %d " ,Matrix1[i][j] );
}                        printf("\n");
}

                       printf("Given Matrix 2 is\n");
                        for(i=0;i<3;i++)
{
                          for(j=0;j<3;j++)
    {
                       printf(" %d " ,Matrix2[i][j] );
}                         printf("\n");
}
    
    
				
					printf("\nSubstraction of Matrix is :-");
	                for(i=0;i<3;i++){
	             	printf("\n");
	             	for(j=0;j<3;++j){
			        printf("%d ",Matrix1[i][j]-Matrix2[i][j]);			
		}
	}
}

if(mtrix==3)

         {
         int k;
                   	printf("\n\t\t\t\t\t***********Matrix Multiplication***********");
			    	printf("\n\n\nEnter Values of Matrix 1(3*3):- ");			
                   	for(i=0;i<3;i++){
               		for(j=0;j<3;++j){
        			scanf("%d",&Matrix1[i][j]);			
		}
	}
           	
			    	printf("\nEnter Values of Matrix 2:- ");			
                  	for(i=0;i<3;i++){
	              	for(j=0;j<3;++j){
	           		scanf("%d",&Matrix2[i][j]);			
		}
	}  
                        printf("Given Matrix 1 is\n");
                        
                         for(i=0;i<3;i++) 
 {
                         for(j=0;j<3;j++)
    {
                         printf(" %d " ,Matrix1[i][j] );
}                        printf("\n");
}

                       printf("Given Matrix 2 is\n");
                        for(i=0;i<3;i++)
{
                          for(j=0;j<3;j++)
    {
                       printf(" %d " ,Matrix2[i][j] );
}                         printf("\n");
}
    
    
				
					printf("\nMultiplication of Matrix is :-");
                            
                 for(i=0;i<3;i++)
             {
                  for(j=0;j<3;j++)
    {             Multiplication[i][j] = 0;
                  for(k=0;k<3;k++)
    {
                  Multiplication[i][j] += Matrix1[i][k]*Matrix2[k][j];
    }
    }
}
	              for(i=0;i<3;i++){
		          printf("\n");
		          for(j=0;j<3;++j){
		        	printf("%d ",Multiplication[i][j]);			
		}
	}
}


if(mtrix==4)
                { 
                  	printf("\n\t\t\t\t\t***********Transpose of Matrix***********");
			    	printf("\n\n\nEnter Values of Matrix (3*3):- ");			
                   	for(i=0;i<3;i++){
               		for(j=0;j<3;++j){
        			scanf("%d",&Matrix1[i][j]);			
		}
	}
                	for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                    Transpose[j][i] = Matrix1[i][j];
        }
    }
                   printf("Given Matrix is\n");
                   for(i=0;i<3;i++)
{
                   for(j=0;j<3;j++)
    {
                 printf(" %d " ,Matrix1[i][j] );
}                printf("\n");}
                 printf("\n\nTranspose  Matrix of Matrix1 is\n");
                 for(i=0;i<3;i++)
{
                 for(j=0;j<3;j++)
    {
                 printf(" %d " , Transpose[i][j]);
    }
                 printf("\n");
}
				}
				
if(mtrix==5)

          {
          	int ans , m1 , gat , ans3 , ans2 , m2 , m3;
          	 	printf("\n\t\t\t\t\t***********Matrix Calculation***********");
			    	printf("\n\n\nEnter Values of Matrix (3*3):- ");			
                   	for(i=0;i<3;i++){
               		for(j=0;j<3;++j){
        			scanf("%d",&Matrix1[i][j]);			
		}
	}
          	 printf("\nGiven Matrix is\n");
                    for(i=0;i<3;i++)
                {
                     for(j=0;j<3;j++)
                {
             printf(" %d " ,Matrix1[i][j] );
                }              
            printf("\n");
                 }
                
                 m1 = Matrix1[1][1] * Matrix1[2][2] - Matrix1[1][2] * Matrix1[2][1];
                 ans= Matrix1[0][0]; 
                 
                  
                ans2= Matrix1[0][1];
                m2 = Matrix1[1][0] * Matrix1[2][2] - Matrix1[1][2] * Matrix1[2][0];
                
                ans3 = Matrix1[0][2];
                m3= Matrix1[1][0] * Matrix1[2][1] - Matrix1[1][1] * Matrix1[2][0];
                /* printf("\n%d %d %d" , ans , m1 , ans*m1);
                 printf("\n%d %d %d" , ans2 , m2 , ans2*m2 );
                 printf("\n%d %d %d" , ans3 , m3 , ans3*m3);*/
                   printf("====================================================");
				   printf("\nThe value of given Matrix is -> ");
				   printf("%d" , ans*m1 - ans2*m2 + ans3*m3);
				   printf("\n====================================================");
		  }
		  
		  
	if(mtrix==6)

          {
          	int ans , m1 , gat , ans3 , ans2 , m2 , m3;
          	int Matrix[3][3] , Adj[3][3];
          	 	printf("\n\t\t\t\t\t***********Adjoint of a Matrix***********");
			    	printf("\n\n\nEnter Values of Matrix (3*3):- ");			
                   	for(i=0;i<3;i++){
               		for(j=0;j<3;++j){
        			scanf("%d",&Matrix1[i][j]);			
		}
	}
          	 printf("\nGiven Matrix is\n");
                    for(i=0;i<3;i++)
                {
                     for(j=0;j<3;j++)
                {
             printf(" %d " ,Matrix1[i][j] );
                }              
            printf("\n");
                 }	 
				 
				 Matrix[0][0] = Matrix1[1][1] * Matrix1[2][2] - Matrix1[1][2] * Matrix1[2][1];
				 Matrix[0][1] = -(Matrix1[1][0] * Matrix1[2][2] - Matrix1[2][0] * Matrix1[1][2]);
				 Matrix[0][2] = Matrix1[1][0] * Matrix1[2][1] - Matrix1[1][1] * Matrix1[2][0];
				 Matrix[1][0] = -(Matrix1[0][1] * Matrix1[2][2] - Matrix1[0][2] * Matrix1[2][1]);
				 Matrix[1][1] = Matrix1[0][0] * Matrix1[2][2] - Matrix1[0][2] * Matrix1[2][0];
				 Matrix[1][2] = -(Matrix1[0][0] * Matrix1[2][1] - Matrix1[0][1] * Matrix1[2][0]);
				 Matrix[2][0] = Matrix1[0][1] * Matrix1[1][2] - Matrix1[1][1] * Matrix1[0][2];
				 Matrix[2][1] = -(Matrix1[0][0] * Matrix1[1][2] - Matrix1[1][0] * Matrix1[0][2]);
				 Matrix[2][2] = Matrix1[0][0] * Matrix1[1][1] - Matrix1[0][1] * Matrix1[1][0];
				 
				 printf("\n------------------------------------------------------------------------\n");
				  printf("\n\nCofactor Matrix is\n");
                   for(i=0;i<3;i++)
{
                   for(j=0;j<3;j++)
    {
                 printf(" %d " ,Matrix[i][j] );
}                printf("\n");}


                 	for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                    Adj[j][i] = Matrix[i][j];
        }
    }
    
             printf("\n------------------------------------------------------------------------\n");
    
                 printf("\n\nAdjoint  Matrix of the Given Matrix is\n");
                 for(i=0;i<3;i++)
{
                 for(j=0;j<3;j++)
    {
                 printf(" %d " , Adj[i][j]);
    }
                 printf("\n");
}
			
				 
				 
			}
		  fflush(stdin);
    
    
	        printf("\n\n***************************************************************");
            printf("\nPress 1 for carrying out more Martix Operations:\nPress 2 for Main Menu:\nPress 3 if you want to exit:\n");
            printf("***************************************************************\n");
            printf("Enter here -> ");
            scanf("%d" , &g);
  
    }while(g==1);
}

if(m==3)
{
	int co;
	do
	{ 
		do
		
		{
			printf("\n\n**************************************************************************");
    printf("\n\t\t\t\tUnit Convertor\n");
    printf("**************************************************************************");
    printf ("\n \n \n1.KM to M/Cm/Mm");
    printf ("\n2.Foot to Cms");
    printf ("\n3.Km/h to M/S");
    printf ("\n4.Dollar to Rupee");
    printf ("\n5.Rupee to dollar");
    printf ("\n6.Celsius to Kelvin");
    printf ("\n7.Celsius to Fahrenheitn");
    printf ("\n8.EV to Joules");
    printf ("\n9.Joules to EV");
    printf ("\n10.Joules to Gram Calories");
    
    
    printf ("\n11.Pascal to ATM");
    printf ("\n12.ATM to Pascal");
    printf ("\n13.ATM to Torr");
   
    
    printf ("\n14.Degree to Radians");
    printf ("\n15.Watts to Horse Power");
    printf ("\n\n16.Other");
	
    
    printf("\n**************************************************");
    printf ("\n Choose the conversion you want to carry out ->");
    scanf ("%d", &co);
        }while (co < 1 ||co > 16);
        
        
        
    /*    if(co==17)
 {
 	   printf("\n::::::::::::xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx::::::::::::");

              printf("\n\t\t\t!!Thank You For Using My Software!!!");
              printf("\n\t\t\t\tCreator :: Divyam");
              printf("\n::::::::::::xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx::::::::::::");
	 break;
 	
 	
 	
 }*/
        
        
if(co==1)
        {
        	float km , mtr , cmtr ,mmt;
        	printf("\n\n\t\t\t\t\t ********Let's convert********\n");
        	printf("\n\nEnter the value in Kilo-metre :");
        	scanf("%f" , &km);
        	mmt=km*1000000;
        	mtr=km*1000;
        	cmtr=km*100000;
        	printf("\n------------------------------------------------------------------------------------------------------------------------");
        	printf("\n %.3f km = \t %.0f m \t|\t %.0f cm \t|\t %.0f mm" , km , mtr , cmtr , mmt);
        	printf("\n------------------------------------------------------------------------------------------------------------------------");
		}
		
		if(co==2)
        {
        	int feet , inc;
        	float cm , inch;
        	printf("\n\n\t\t\t\t\t ********Let's convert********\n");
        	printf("Enter the Foot : ");
        	scanf("%d" , &feet);
        	printf("Enter the Inches : ");
        	scanf("%d" , &inc);
        	inch=feet*12 + inc;
        	cm=inch*2.54;
        	printf("\n---------------------------------------------------------------------");
        	
        	printf("\n %d foot %d inches = %.2f centi metre" , feet , inc , cm);
        	printf("\n---------------------------------------------------------------------");
		}
		
		
		if(co==3)
       {
       	float kh , ms;
       	    printf("\n\n\t\t\t\t\t ********Let's convert********\n");
        	printf("Enter the speed in Km/hr : ");
        	scanf("%f" , &kh);
        	
        	ms=kh*0.278;
        	printf("\n---------------------------------------------------------------------");
        	printf("\n %.3f km/hr = %.4f m/s" , kh , ms);
        	printf("\n---------------------------------------------------------------------");
       	
	 
       }
       
       if(co==4)
        {
        	float dol , rup;
        	printf("\n\n\t\t\t\t\t ********Let's convert********\n");
        	printf("Enter the amount of Dollar : ");
        	scanf("%f" , &dol);
        	
        	rup=dol*74.64;
        	printf("\n---------------------------------------------------------------------");
        	printf("\n %.2f $ = %.2f Rupees " , dol , rup);
        	printf("\n---------------------------------------------------------------------");
		}
		
if(co==5)
        {
        	float dol , rup;
        	printf("\n\n\t\t\t\t\t ********Let's convert********\n");
        	printf("Enter the amount in Rupees : ");
        	scanf("%f" , &rup);
        	
        	dol=rup/74.64;
        	printf("\n---------------------------------------------------------------------");
        	
        	printf("\n %.2f Rupees = %.2f $ " , rup , dol);
        	printf("\n---------------------------------------------------------------------");
		}
		
if(co==6)
        {
        	float cel , kel;
        	printf("\n\n\t\t\t\t\t ********Let's convert********\n");
        	printf("Enter the temperature in degree Celsius : ");
        	scanf("%f" , &cel);
        	
        	kel=cel + 273.15;
        	printf("\n---------------------------------------------------------------------");
        	printf("\n %.1f Degree Celsius is %.1f Kelvin" , cel , kel);
        	printf("\n---------------------------------------------------------------------");
		}
		
 if(co==7)
        {
        	float cel , fah;
        	printf("\n\n\t\t\t\t\t ********Let's convert********\n");
        	printf("Enter the temperature in degree Celsius : ");
        	scanf("%f" , &cel);
        	
        	fah=(cel*1.8)+32;
        	printf("\n---------------------------------------------------------------------");
        	printf("\n %.2f Degree Celsius is %.1f Fahrenheit" , cel , fah);
        	printf("\n---------------------------------------------------------------------");
		}
 if(co==8)
        {
        	float jo , ev;
        	printf("\n\n\t\t\t\t\t ********Let's convert********\n");
        	printf("Enter the energy in Electron Volts (Ev) : ");
        	scanf("%f" , &ev);
        	
        	jo=ev*1.602;
        	printf("\n---------------------------------------------------------------------");
        	printf("\n %.2f Ev = %.4f x 10 ^ (-19) Joules" , ev , jo);
        	printf("\n---------------------------------------------------------------------");
		}
		
 if(co==9)
        {
        	float jo , ev;
        	printf("\n\n\t\t\t\t\t ********Let's convert********\n");
        	printf("For energy in the form n x 10 ^ (-19) Joules , Enter the value of n :  ");
        	scanf("%f" , &jo);
        	
        	ev=jo/1.602;
        	printf("\n---------------------------------------------------------------------");
        	printf("\n %.4f  x 10 ^ (-19) Joules = %.2f Ev" , jo , ev);
        	printf("\n---------------------------------------------------------------------");
		}
		
		if(co==10)
        {
        	float jo , cal;
        	printf("\n\n\t\t\t\t\t ********Let's convert********\n");
        	printf("Enter the value of Energy in Joules :  ");
        	scanf("%f" , &jo);
        	
        	cal=jo*0.239;
        	printf("\n---------------------------------------------------------------------");
        	
        	printf("\n %.1f Joules = %.1f Gram Calories " , jo ,cal);
        	printf("\n---------------------------------------------------------------------");
		}
		
 

		
if(co==11)
        {
        	float pas , atm;
        	printf("\n\n\t\t\t\t\t ********Let's convert********\n");
        	printf("Enter the pressure in pascal : ");
        	scanf("%f" , &pas);
        	
        	atm=pas*9.869;
        	printf("\n---------------------------------------------------------------------");
        	printf("\n %.1f Pa = %.2f x 10 ^ (-6) atm " , pas , atm);
        	printf("\n---------------------------------------------------------------------");
		}
		
		if(co==12)
        {
        	float pas , atm;
        	printf("\n\n\t\t\t\t\t ********Let's convert********\n");
        	printf("For pressure in the form of n x 10 ^ (-6) , Enter the value of n : ");
        	scanf("%f" , &atm);
        	
        	pas=atm/9.869;
        	printf("\n---------------------------------------------------------------------");
        	printf("\n %.2f x 10 ^ (-6) atm = %.2f Pa  " , atm , pas);
        	printf("\n---------------------------------------------------------------------");
		}
		
if(co==13)
        {
        	float tor , atm;
        	printf("\n\n\t\t\t\t\t ********Let's convert********\n");
        	printf("Enter the pressure in atm : ");
        	scanf("%f" , &atm);
        	
        	tor=atm*760;
        	printf("\n---------------------------------------------------------------------");
        	printf("\n %.2f atm = %.2f Torr " , atm , tor);
        	printf("\n---------------------------------------------------------------------");
		}
		
		
		

       
if(co==14)
       {
       	int deg;
       	float rad;
       	   printf("\n\n\t\t\t\t\t ********Let's convert********\n");
        	printf("Enter the angle in degree : ");
        	scanf("%d" , &deg);
        	
        	rad=deg*0.0175;
        	printf("\n---------------------------------------------------------------------");
        	printf("\n %d degree = %.3f radians" , deg , rad);
        	printf("\n---------------------------------------------------------------------");
       	
	 
       }
       
if(co==15)
       {
       	float wat ;
       	float hpr;
       	    printf("\n\n\t\t\t\t\t ********Let's convert********\n");
        	printf("Enter the value of power in Watts : ");
        	scanf("%f" , &wat);
        	
        	hpr=wat*0.001341;
        	printf("\n---------------------------------------------------------------------");
        	printf("\n %.3f Watt = %.5f Horse Power" , wat , hpr);
        	printf("\n---------------------------------------------------------------------");
       	
	 
       }
	   fflush(stdin);	

		
	      printf("\n\n***************************************************************");
          printf("\nPress 1 if you want to do any more conversion:\nPress 2 for Main Menu:\nPress 3 if you want to exit:\n");
          printf("***************************************************************\n");
          printf("Enter here -> ");
          scanf("%d" , &g);
  
    }while(g==1);	
		
	
}
if(m==4)
{
    do
    {

do
{   
    printf("\n\n**************************************************************************");
    printf("\n\t\t\t\tTrignometric Ratios Operator\n");
    printf("**************************************************************************");
    printf ("\n \n \n1.Find sin of any angle");
    printf ("\n2.Find cos of any angle");
    printf ("\n3.Find tan of any angle");
    printf ("\n4.Find sec of any angle");
    printf ("\n5.Find cosec of any angle");
    printf ("\n6.Find cot of any angle");
    printf ("\n\n7.Other");
	
    
    printf ("\n \nChoose the operation you want to carry out : ");
    scanf ("%d", &u);
    }while (u < 1 || u > 8);

              
          /*   if(u==8)
 {
 	   printf("\n::::::::::::xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx::::::::::::");

        printf("\n\t\t\t!!Thank You For Using My Software!!!");
        printf("\n\t\t\t\tCreator :: Divyam");
        printf("\n::::::::::::xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx::::::::::::");
	 break;
 	
 	
 }*/

 

            printf ("\n \t \t \tYou are now allowed to access this features");
if (u == 1)
{
    float deg , rad;
    printf("\n\n\n********Sine value Calculator********");
    printf("\n\nEnter the value of angle (in degree) ->  ");
    scanf("%f" , &deg);
    
    rad = deg*0.0174532777;
    
    printf(" \nsin(%.1f) = %.3f" , deg , sin(rad));

}
if (u == 2)
{
    float deg , rad;
     printf("\n\n\n********Cosine value Calculator********");
    printf("\n\nEnter the value of angle (in degree) : ");
    scanf("%f" , &deg);
    
    rad = deg*0.0174532777;
    
    printf(" \ncos(%.1f) = %.3f" , deg , cos(rad));

}

if (u == 3)
{
    float deg , rad;
     printf("\n\n\n********Tangent value Calculator********");
    printf("\n\nEnter the value of angle (in degree) : ");
    scanf("%f" , &deg);
    
    rad = deg*0.0174532877777;
    
    printf(" \ntan(%.1f) = %.3f" , deg , tan(rad));

}

if (u == 4)
{
    float deg , rad;
     printf("\n\n\n********Secant value Calculator********");
    printf("\n\nEnter the value of angle (in degree) : ");
    scanf("%f" , &deg);
    
    rad = deg*0.0174532777;
    
    printf(" \nsec(%.1f) = %.3f" , deg , 1/cos(rad));

}


if (u == 5)
{
    float deg , rad;
     printf("\n\n\n********Cosecant value Calculator********");
    printf("\n\nEnter the value of angle (in degree) : ");
    scanf("%f" , &deg);
    
    rad = deg*0.0174532777;
    
    printf(" \ncosec(%.1f) = %.3f" , deg , 1/sin(rad));

}

if (u == 6)
{
    float deg , rad;
     printf("\n\n\n********Cotangent value Calculator********");
    printf("\n\nEnter the value of angle (in degree) : ");
    scanf("%f" , &deg);
    
    rad = deg*0.0174532777 ;
    
    printf(" \ncot(%.1f) = %.3f" , deg , 1/tan(rad));

}
 

fflush(stdin);
    
    
	    printf("\n\n***************************************************************");
  printf("\nPress 1 for working out with any more trignometric problems:\nPress 2 for Main Menu:\nPress 3 if you want to exit:\n");
  printf("***************************************************************\n");
  printf("Enter here -> ");
  scanf("%d" , &g);
  
    }while(g==1);
}

if(m==5)
     {
     	float ra , pr , si , ci , ti ;
     	int in ;
     	do
     	{
		 
     	
     	do
     	{
     		printf("\n\n**************************************************************************");
    printf("\n\t\t\t\tInterest Calculator\n");
    printf("**************************************************************************");
		 
     	printf("\n\n1.Find Simple Interest");
     	printf("\n2.Find Compound Interest");
     	printf ("\n\n3.Other");
     
		
     	printf("\n \nChoose the option you want to perform :");
     	
     	scanf("%d" , &in);
     }while(in <1 || in>3);
     
    
     
              switch(in) {
			  
              
                  case 1:
                  printf("\n\nEnter the Principal Amount :");
                  scanf("%f" , &pr);
                  printf("\nEnter the rate given :");
                  scanf("%f" , &ra);
				  printf("\nEnter the time (in years) :");
                  scanf("%f" , &ti);
                  
                  si=(pr*ra*ti)/100;
                   printf("\n====================================================");
                  
                  printf("\nThe required Simple Interest is : Rs %.4f " , si);
                   printf("\n====================================================");
				  break;
                  
                  case 2:
                  printf("\n\nEnter the Principal Amount :");
                  scanf("%f" , &pr);
                  printf("\nEnter the rate given :");
                  scanf("%f" , &ra);
				  printf("\nEnter the time (in years) :");
                  scanf("%f" , &ti);
				  
				  ci=pr*(pow((1+ra/100) , ti));	
				   printf("\n====================================================");
				  printf("\nThe required Compound Interest is : Rs %.4f   " , ci);
				   printf("\n====================================================");
				  break;
                  
                  
                
                  
            
                  default:
                  printf("\nEnter the valid input");
                  break;
              }
            
    
    
	    printf("\n\n***************************************************************");
  printf("\nPress 1 if you want to solve any more problems related to interest.:\nPress 2 for Main Menu:\nPress 3 if you want to exit:\n");
  printf("***************************************************************\n");
  printf("\nEnter here -> ");
  scanf("%d" , &g);
  
    }while(g==1);
    
     
              
	 }
	 
if (m==6)

{
	do

                {
                		printf("\n\n**************************************************************************");
    printf("\n\t\t\t\tAge Detector\n");
    printf("**************************************************************************");
                	int y , y1 , y2 , da , da1 , da2 , m , m1 , m2;
                	printf("\nEnter your Birth year ->");
                	scanf("%d" , &y1);
                	printf("\nEnter your Birth month -> ");
                	scanf("%d" , &m1);
                	printf("\nEnter your Birth date -> ");
                	scanf("%d" , &da1);
                		printf("\n********************************Now******************************************");
  
					printf("\n\nEnter Today's' year -> ");
                	scanf("%d" , &y2);
					printf("\nEnter Today's' month -> ");
                	scanf("%d" , &m2);
					printf("\nEnter Today's date' -> ");
                	scanf("%d" , &da2);
                	
                	if(m2>m1)
                	m=m2-m1;
                	
                	else
                	{
					
                	y2=y2-1;
                	m=(11+m2)-m1;
                }
                    if(da2>da1)
                    da=da2-da1;
                    
                    else
                    {
                    	m2=m2-1;
                    	da=(da2+31) - da1;
					}
					 printf("\n---------------------------------------------------------------------");
					printf("\nYou are %d Years %d Months and %d Days old" , y2-y1 , m , da);
					printf("\n---------------------------------------------------------------------");
					
					   fflush(stdin);
    
    
	    printf("\n\n***************************************************************");
  printf("\nPress 1 if you want to detect anyone's' age again:\nPress 2 for Main Menu:\nPress 3 if you want to exit:\n");
  printf("***************************************************************\n");
  printf("Enter here -> ");
  scanf("%d" , &g);
  
    }while(g==1);
    
              
	 }
					 
					 	 

if(m==7)
{
	printf("\n\nHey wait !\n");
    Beep(500,678);
	printf("\n**************************************");
	printf("\nDo you really want to exit?\n");
	printf("**************************************\n");
	printf("\nPress 1 for yes\n");
	printf("Press 2 for no\n");
	printf("\n**************************************");
	printf("\nEnter here -> ");
	scanf("%d" , &g);
	
	if(g==1)
	{
	
	printf("::::::::::::xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx::::::::::::");
	printf("\n\t\t\tIt was nice working with you mate !!");
}
}
}while(g==2);
fflush(stdin);
 
if(g==3)
{
      printf("::::::::::::xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx::::::::::::");

      printf("\n\t\t\t!!Thank You For Using My Software!!!");
      printf("\n\t\t\t\tCreator :: Divyam");
      printf("\n::::::::::::xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx::::::::::::");
}
fflush(stdin);
if(m==7)
{
         
		     
          printf("\n\t\t\t!!Thank You For Using My Software!!!");
          printf("\n\t\t\t\tCreator :: Divyam");
          printf("\n::::::::::::xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx::::::::::::");
          
          
      
}

return 0;
}


