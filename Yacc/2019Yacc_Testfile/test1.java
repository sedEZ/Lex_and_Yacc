/* Test file: Perfect test file
 * Compute sum = 1 + 2 + ... + n
 */
class sigma {
  final int n = 10;
  int sum, index;
  
  main()
  {
    index = 0;
    sum = 0;
    while (index <= n) 
    {
      sum = sum + index;
      index = index + 1;
    } 
    print(sum);
  }   
} 
