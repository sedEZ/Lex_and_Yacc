/*Test file: Duplicate declare variable in the same scope*/
class Point
{
	static int counter ;
	int x = 053;
	/*Duplicate declare x*/
	int x ;
	void clear()
	{
		x = 0 ;
		y = 0 ;
	}
}
