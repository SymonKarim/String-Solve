/*

Check if a given set of moves is circular or not. A move is circular if its starting and ending coordinates are the same. The moves can contain instructions to move one unit in the same direction (M), to change direction to the left of current direction (L), and to change direction to the right of current direction (R).

Input: "MRMRMRM"
Output: true

Input: "MRMLMRMRMMRMM"
Output: true

Assume that the initial direction is North.

*/

class Solution
{
public:
	bool isCircularMove(string s)
	{
	      int x = 0 , y = 0;
	      char dir = 'N';
	      
	      for(auto i:s){
	      	switch(i){
	      		case 'M':
	      		  if(dir=='S') y++;
	      		  else if(dir=='N') y--;
	      		  else if(dir=='E') x--;
	      		  else if(dir=='W') x++;
	      		  break;
	            case 'L':
	              if(dir=='S') dir = 'E'; 
	      		  else if(dir=='N') dir = 'W'; 
	      		  else if(dir=='E') dir = 'N'; 
	      		  else if(dir=='W')dir = 'S'; 
	      		  break;
	      		  
	      		 case 'R':
	              if(dir=='S') dir = 'W'; 
	      		  else if(dir=='N') dir = 'E'; 
	      		  else if(dir=='E') dir = 'S'; 
	      		  else if(dir=='W') dir = 'N'; 
	      		  break;
	           }	      
	           }
	     
	      return (!x and !y);
	}
};
