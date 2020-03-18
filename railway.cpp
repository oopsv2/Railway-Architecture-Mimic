 #include<iostream>
#include<stdlib.h>
#include<time.h>
#include<fstream>
using namespace std;
int main()
{  
    system("color 3F");
	int i,a,b,g,r,z;
	long int q;
  	string k,j,h;
  	fstream file;
  	srand(time(0));
  {	 
    otp:
    cout<<"\t"<<"\t"<<"\t"<<"******( WELCOME TO [SNB] ONLINE RAILWAY RESERVATION SYSTEM )******"<<"\t"<<"\t"<<"\t"<<endl;	
  }
	for(i=0;i<g;i++)
	{
	   cout<<"type YES to CONTINUE"<<"\n";
	    {
	      cin>>k;
	      if(k!="YES")
	      {
	      	cout<<"invalid input"<<"\n";
		  }
	    else
	      {
	    	break;
		  }  
		}
    }
    file.open("user.txt",ios::app);
    {
    cout<<" Please enter your valid 9 DIGITS mobile number"<<endl;
    for(i=0;i<g;i++)
    {
	cin>>q;
    if(q<100000000)
     {
     	cout<<"INVALID MOBILE NUMBER PLEASE TRY AGAIN "<<endl;
	 }
	 else
	 { 
	    file<<"\t"<<"\t"<<"\t"<<"******( WELCOME TO [SNB] ONLINE RAILWAY RESERVATION SYSTEM )******"<<"\t"<<"\t"<<"\t";
        file<<"\nENTERED NUMBER BY THE USER = "<<q<<endl;
	 	cout<<"we'll send a confirmation OTP at your number "<<endl;
	 	g=rand();
	 	cout<<"HERE'S YOUR OTP == "<<g<<endl;
	 	break;
	 }
   }
	cout<<"TYPE the LOCATION to start from"<<"\n";
	cout<<"1. CHANDIGARH"<<"\t"<<"2. GURUGRAM"<<"\t"<<"3. NEWDELHI"<<endl;
	for(i=0;i<g;i++)
	{	
	  cin>>k;
	
	  if(k=="CHANDIGARH" || k=="GURUGRAM" || k=="NEWDELHI")
	  {
	  	file<<"STARTING LOCATION = "<<k<<endl;
	  	break;
	  }
	  else
	  {
	  	cout<<"invalid action performed  please try again"<<endl;
	  }
    }
	again:
	cout<<"TYPE the LOCATION to go to"<<"\n";
	cout<<"1. NEWDELHI"<<"\t"<<"2. GURUGRAM"<<"\t"<<"3. CHANDIGARH"<<endl;
	for(i=0;i<g;i++)
	{
	 cin>>j;
	 {
	  if(j==k)
	  {
	 	cout<<"not possible"<<endl;
	 	goto again;
	  }
     }
	 if(j=="CHANDIGARH"||j=="GURUGRAM"||j=="NEWDELHI"&&j!=k)
	  {
	  	file<<"END LOCATION = "<<j<<endl;
	   break;
	  }
	  else
	  {
	  		cout<<"invalid action performed  please try again"<<endl;
	  }
    }   
	cout<<"select the TRAIN you prefer"<<"\n"; 
	cout<<"1. Shatabdi express"<<"\n"<<"2. Rajdhani express"<<"\n";
	cin>>b;
	file<<"PREFERRED TRAIN = (1) SHATABDI || (2) RAJDHANI "<<"\n"<<b<<endl;
	cout<<"\n";
	switch(b)
	  {
	
	case 1:
		{
		cout<<"select the DEPARTURE day"<<endl;
		cout<<"1. TUESDAY "<<"\t"<<"2. THURSDAY"<<"\t"<<"3. SATURDAY"<<endl;
		cin>>b; 
		file<<"DEPARTURE DAY = (1) TUESDAY || (2) THURSDAY || (3) SATURDAY "<<"\n"<<b<<endl;
		cout<<"choose the selected options for timings"<<"\n";
		cout<<"morning   :  "<<"(1)  6.30am"<<"\n"<<"evening   :  "<<"(2)  5.00pm"<<"\n";
		cin>>r;
		file<<"TIMING FOR TRAIN = (1) 6.30AM || (2) 5.00PM"<<"\n"<<r<<endl;
		 switch(r)
              {
              	
              	case 1 :
				  {
				  	for(i=0;i<g;i++)
				  	{
				       cout<<"are you sure you want to book SHATABDI EXPRESS at 6.30am?Type YES to CONFIRM"<<"\n";
				       cin>>h;
				          if (h=="YES")
				           {
				    		cout<<"your inputs are recorded"<<" EXPECTED FAIR = $750"<<endl;
				        	break;
				           }     
				          else
				          {
				    	    cout<<"invalid input"<<endl;
					      }     
				    }
			      break;
				  } 
				  
				  
				case 2 :
				  {
				 	for(i=0;i<g;i++)
				  	{
				       cout<<"are you sure you want to book SHATABDI EXPRESS at 5.00 pm?Type YES to CONFIRM"<<"\n";
				       cin>>h;
				          if (h=="YES")
				           {
				    		cout<<"your inputs are recorded"<<" EXCECTED FAIR = $750"<<endl;
				        	break;
				           }     
				          else
				          {
				    	    cout<<"invalid input"<<endl;
					      }     
				    }
					break;
			      }         
			  }
	     
        break;
	   }  
	   case 2 :
	   	{   
	   	    cout<<"select the DEPARTURE day."<<endl;
		    cout<<"1. TUESDAY "<<"\t"<<"2. THURSDAY"<<"\t"<<"3. SATURDAY"<<endl;
		    cin>>b; 
		    file<<"DEPARTURE DAY = (1) TUESDAY || (2) THURSDAY || (3) SATURDAY "<<"\n"<<b<<endl;
	   		cout<<"choose the selected options for timings"<<"\n";
		    cout<<"morning   :  "<<"(1)  3.00am"<<"\n"<<"evening   :  "<<"(2)  10.10pm"<<"\n";
		    cin>>r;
		    file<<"TIMING FOR TRAIN = (1) 3.00AM || (2) 10.10PM "<<"\n"<<r<<endl;
		    switch(r)
              {
              	
              	case (1) :
				  {
				  	for(i=0;i<g;i++)
				  	{
				       cout<<"are you sure you want to book RAJDHANI EXPRESS at 3-00pm?Type YES to CONFIRM"<<"\n";
				       cin>>h;
				          if (h=="YES")
				           {
				    		cout<<"your inputs are recorded"<<" EXPECTED FAIR = $900"<<endl;
				        	break;
				           }     
				          else
				          {
				    	    cout<<"invalid input"<<endl;
					      }     
				    }
			      break;
				  }
	   		
		 	   case 2 :
				  {
				 	for(i=0;i<g;i++)
				  	{
				       cout<<"are you sure you want to book RAJDHANI EXPRESS at 10.10pm?Type YES to CONFIRM"<<"\n";
				       cin>>h;
				          if (h=="YES")
				           {
				    		cout<<"your inputs are recorded"<<" EXPECTED FAIR = $900"<<endl;
				        	break;
				           }     
				          else
				          {
				    	    cout<<"invalid input"<<endl;
					      }     
				    }
					break;
			    } 
		   }
    break;
	}
	    
    default :
	        {
	    	cout<<"couldn't perform any action!!"<<"\n"<<"please refresh the page to start again";
	    	
			}    
    }
    cout<<"we have sent a confirmation OTP to the number provided above"<<endl;
    cout<<"please enter the otp number to get your tickets"<<endl;
    for(i=2;i>=0;i--)
    {
	 cin>>a;
	    if (a==g)
				           {
				           	file<<"OTP SENT = "<<g<<endl;
				    		cout<<"VERIFYING"<<endl;
				        	break;
				           }     
				          else
				          {
				    	    cout<<" invalid input "<< i <<"  attempts left  "<<endl;
				    	    if(i==0)
				    	    {
				    	    	cout<<"your registration has been CANCELLED"<<endl;
				    	    	goto otp;
							}
					      }     
	}
    cout<<"CONGRATULATON !!! YOUR SEATS ARE BOOKED."<<endl;
    cout<<"Do you want to reserve any other seat ??"<<endl;
    cout<<"press YES to continue or NO to exit."<<endl;
    {
	for(i=0;i<g;i++)
	{
	 cin>>k;
     if(k=="YES")
      {
      	cout<<"seats left on the train = 5"<<endl;
      	for(i=0;i<g;i++)
		  {
      	      
      	        cout<<"How many seats you want to book??"<<endl;
      	        cin>>z;
			    if(z<=5)
			         {
			         	file<<"TOTAL SEATS BOOKED = "<<z<<" + 1 = "<<z+1<<" SEATS are booked";
				       cout<<z<<" TICKETS are generated "<<"THANKYOU,PLEASE VISIIT AGAIN"<<endl;
				         file.close();
					 break;
					 }
			else 
			   {		      
      	         cout<<"Invalid input !! PLESSE TRY AGAIN!! "<<endl;
               }
            }
	      
		  }
	  
    else if(k=="NO")
	  {
	  	cout<<"THANKS FOR USING SNB ONLINE RESERVATION PROGRAM !! WE HOPE TO SEE YOU SOON AGAIN"<<endl;
	  }
	  else
	  {
	  	cout<<"INVALID INPUT"<<endl;
	  }
cout<<"#######************************************************************########"; 
   }
}
}
return 0;
}
