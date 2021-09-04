## A program to create a 2D array of size 5 rows and 6 columns, print 1947 and the years hence like in a matrix and find out if 1971 exists in the array or not. 

### **_Approach_**
> Input
    
    #include<stdio.h>
     void main()
      {
        int a[5][6];
	      int i;
	      int j;
	      int k;
          k = 0;
	      int temp;
          int flag;
        
       a[0][0] = 1947;
       printf(" The elements in the array are: \n");
	
	      for(i=0; i<5; i++)
        	{
	         	for(j=0; j<6; j++)
	          	{
	            		temp = a[0][0] + k;
	            		printf("%d \t", temp);
	            		if(temp == 1971)
                            flag = 1;
	             
                             k++;
	           	}
	        	printf("\n");
         	}
	
         	 if( flag == 1)
            printf("\n 1971 exists!!!!");
      }
      
      
 > Output
      
    The elements in the array are:
    1947    1948    1949    1950    1951    1952
    1953    1954    1955    1956    1957    1958
    1959    1960    1961    1962    1963    1964
    1965    1966    1967    1968    1969    1970
    1971    1972    1973    1974    1975    1976

    1971 exists!!!!
     
