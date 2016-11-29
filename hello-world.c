// Bubble Sort Function for Descending Order 
void BubbleSort(apvector <int> &num)
{
      int i, j, flag = 1;    // set flag to 1 to start first pass
      int temp;             // holding variable
      int numLength = num.length( ); 
      for(i = 1; (i <= numLength) && flag; i++)
     {
          flag = 0;
          for (j=0; j < (numLength -1); j++)
         {
               if (num[j+1] > num[j])      // ascending order simply changes to <
              { 
                    temp = num[j];             // swap elements
                    num[j] = num[j+1];
                    num[j+1] = temp;
                    flag = 1;               // indicates that a swap occurred.
               }
          }
     }
     return;   //arrays are passed to functions by address; nothing is returned
}
