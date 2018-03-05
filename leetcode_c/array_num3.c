int maxArea(int* height, int heightSize) {
    int max_area = 0;
    int i = 0;
    int j = heightSize-1;
        
    while(i<j)
    {
        
        int temp_area = *(height+i) <= *(height+j)?(*(height+i))*(j-i++):(*(height+j)*((j--)-i));
        
        if(temp_area > max_area)
            {
                max_area = temp_area;
            }
        
    }
            
            return max_area; 
        }
    
    
   
