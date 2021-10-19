//PROJECT ON STUDENT MANAGEMENT SYSTEM;

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;

void enter()
{
    int ch=0;
    
    cout<<"How many student do you want to enter :"<<endl;
    cin>>ch;
    
    if(total==0)
    {
        total=ch+total;
        
        for(int i=0;i<ch;i++)
        {
            cout<<"\nEnter the data of student :"<<i+1<<endl<<endl;
            
            cout<<"\nEnter name :";
            cin>>arr1[i];
            cout<<"\nEnter roll :";
            cin>>arr2[i];
            cout<<"\nEnter course :";
            cin>>arr3[i];
            cout<<"\nEnter class :";
            cin>>arr4[i];
            cout<<"\nEnter contact :";
            cin>>arr5[i];
            
        }
    }
    else 
    {
        for(int i=total;i<ch+total;i++)
        {
            cout<<"\nEnter the data of student :"<<i+1<<endl<<endl;
            
            cout<<"\nEnter name :";
            cin>>arr1[i];
            cout<<"\nEnter roll :";
            cin>>arr2[i];
            cout<<"\nEnter course :";
            cin>>arr3[i];
            cout<<"\nEnter class :";
            cin>>arr4[i];
            cout<<"\nEnter contact :";
            cin>>arr5[i];
        }
        total=ch+total;
    }
}

void show()
{
    if(total==0)
    {
        cout<<"No data is entered :"<<endl;
    }
    
    else
    {
       for(int i=0;i<total;i++)
       {
           cout<<"\nEnter data of student :"<<i+1<<endl<<endl;
           
            cout<<"\nName :"<<arr1[i]<<endl;
            cout<<"\nRoll :"<<arr2[i]<<endl;
            cout<<"\nCourse :"<<arr3[i]<<endl;
            cout<<"\nClass :"<<arr4[i]<<endl;
            cout<<"\nContact :"<<arr5[i]<<endl;
       }
    }
}

void search()
{
    if(total==0)
    {
        cout<<"\nNo data is enetred :"<<endl;
    }
    else
    {
        string rollno;
        
        cout<<"\nEnter the rollno of student which you to search:"<<endl;
        cin>>rollno;
        
        for(int i=0;i<total;i++)
        {
            if(rollno==arr2[i])
            {
            cout<<"\nName :"<<arr1[i]<<endl;
            cout<<"\nRoll :"<<arr2[i]<<endl;
            cout<<"\nCourse :"<<arr3[i]<<endl;
            cout<<"\nClass :"<<arr4[i]<<endl;
            cout<<"\nContact :"<<arr5[i]<<endl;  
            }
        }
    }
}

void update()
{
     if(total==0)
    {
        cout<<"\nNo data is enetred :"<<endl;
    }
    
    else
    {
       string rollno;
       
       cout<<"Enter rollno of student which you want to update :"<<endl;
       cin>>rollno;
       
       for(int i=0;i<total;i++)
       {
           if(rollno==arr2[i])
           {
               cout<<"Data of student before update :"<<i+1<<endl;
               
               cout<<"\nName :"<<arr1[i]<<endl;
               cout<<"\nRoll :"<<arr2[i]<<endl;
               cout<<"\nCourse :"<<arr3[i]<<endl;
               cout<<"\nClass :"<<arr4[i]<<endl;
               cout<<"\nContact :"<<arr5[i]<<endl; 
               
               cout<<"Data of student after update :"<<endl<<endl;
               
                cout<<"\nEnter name :";
                cin>>arr1[i];
                cout<<"\nEnter roll :";
                cin>>arr2[i];
                cout<<"\nEnter course :";
                cin>>arr3[i];
                cout<<"\nEnter class :";
                cin>>arr4[i];
                cout<<"\nEnter contact :";
                cin>>arr5[i];
               
           }
       }
    }
}

void deleterecord()
{
     if(total==0)
    {
        cout<<"\nNo data is enetred :"<<endl;
    }
    
    else
    {
        int a;
        
        cout<<"Press 1 to delete all record :"<<endl;
        cout<<"Press 2 to delete specific record :"<<endl;
        
        cin>>a;
        
        if(a==1)
        {
            total=0;
            cout<<"All record is deleted :"<<endl;
        }
        
        else if(a==2)
        {
            string rollno;
            
            cout<<"Enter rollno of student which you want to delete :"<<endl;
            cin>>rollno;
            
            for(int i=0;i<total;i++)
            {
                if(rollno==arr2[i])
                {
                    for(int j=0;j<total;j++)
                    {
                        arr1[j]=arr1[j+1];
                        arr2[j]=arr2[j+1];
                        arr3[j]=arr3[j+1];
                        arr4[j]=arr4[j+1];
                        arr5[j]=arr5[j+1];
                    }
                    total--;
                    cout<<"Your required record is deleted :"<<endl;
                }
            }
        }
        else
        {
            cout<<"\nInvalid input :";
        }
    }
}

int main()
{
    int value;
    while(true)
    {
        cout<<"\nPress 1 to enter data :"<<endl;
        cout<<"\nPress 2 to show data :"<<endl;
        cout<<"\nPress 3 to search data :"<<endl;
        cout<<"\nPress 4 to update data :"<<endl;
        cout<<"\nPress 5 to delete data :"<<endl;
        cout<<"\nPress 6 to exit  :"<<endl;
        
        cin>>value;
        
        switch(value)
        {
            case 1:enter();
                  break;
            case 2:show();
                  break;
            case 3:search();
                  break;
            case 4:update();
                  break;
            case 5:deleterecord();
                  break;
            case 6:exit(0);
                  break;
            default:
                   cout<<"\nInvalid input :"<<endl;
                   break;
                   
        }
    }
}
