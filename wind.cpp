#include <iostream>
#include <cmath> 
using namespace std; 

int main()

{
    double temp = 0;
    double windSpeed = 0;
    
    

    
    cout << "Please enter a temperature." << endl;
    cin >> temp;
    
    //cout << "Please enter a wind speed." << endl;
   // cin >> windSpeed;
    
    
     while (!(temp >= -20 && temp <= 100))
    
        {
            cout << "Please enter a valid temperature (must be between -20 and 100)." << endl;
            cin >> temp;
            
        }
            
    cout << "Please enter a wind speed." << endl;
    cin >> windSpeed;
           
     while (!(windSpeed >= 0 && windSpeed <= 80))
           
           {
               cout << "Please enter a valid wind speed (must be between 0 and 80)." << endl;
               cin >> windSpeed; 
               
           }
               
               
            
    if (windSpeed <= 4 ) 
    
    {
        cout << "The windchill is " << temp << endl;
        
    }


    else if  ( windSpeed > 45)
    {
    
        cout << "The windchill is " << 1.6 * temp -55.0 << endl;
    }
        
    else 
    
    {
        cout << "The windchill is " << 91.4 - (((10.45 + 6.69 *sqrt(windSpeed)-.447 * windSpeed)*(91.4-temp))/22) << endl;
    }
    
    return 0;
  
}