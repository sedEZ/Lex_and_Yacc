/*Test file: Duplicate declaration in different scope and same scope*/
class Point
{
	int x, y ;
	int p;
	boolean test()
	{
		/*Another x, but in different scopes*/
		int x;
		float w;
		/*Another x in the same scope*/
		char x;
		{
			/*Another x, but in different scopes*/
			boolean x;
		}
		/*Another w in the same scope*/
		int w;
	}
}
class Test
{
	/*Another p, but in different scopes*/
	Point p = new Point();
}
