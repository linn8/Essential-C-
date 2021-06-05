/* prints something like this
       *     
      ***     
     *****    
    *******   
   *********  
  ***********
*/
#include <iostream>

int main()
{
	int n = 10;

	for(int space = n-1, star = 1; space >= 0; space--, star+=2)
		std::cout << std::string(space, ' ') << std::string(star, '*') << std::endl;
}
