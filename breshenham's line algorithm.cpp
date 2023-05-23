#include<graphics.h>
int main()
{
    float i,x1,y1,x2,y2,dx,dy,p;
	printf("enter points");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	int gd= DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	dx=x2-x1;
	dy=y2-y1;
	putpixel(x1,y1,CYAN);
	if(dx>dy)
	{
	 p=2*dy-dx;
	 for(i=0;i<dx;i++)
	 {
	    if(p<0)
	    {
	    	x1=x1+1;
	    	p=p+2*dy;  	
		}
		else
		{
			x1=x1+1;
			y1=y1+1;
			p=p+2*dy-2*dx;
		}
		putpixel(x1,y1,CYAN);
	 }
	}
	else
	{
		p=2*dx-dy;
	 for(i=0;i<dy;i++)
	 {
	    if(p<0)
	    {
	    	y1=y1+1;
	    	p=p+2*dx;  	
		}
		else
		{
			x1=x1+1;
			y1=y1+1;
			p=p+2*dx-2*dy;
		}
		putpixel(x1,y1,CYAN);
	 }
	}
    getch();
	closegraph();
	return 0;
}
