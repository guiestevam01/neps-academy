#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int ca, ba,pa,cr,br,pr;
	scanf("%d %d %d", &ca, &ba, &pa);
	scanf("%d %d %d", &cr, &br , &pr);
	int vc,vb,vp,result;
	vc = 0;
	vb = 0;
	vp = 0;
	if(cr < ca){
		vc += 0;
	} else{
		vc = cr - ca; 
	}

	if(br < ba){
		vb += 0;
	}else{
		vb = br - ba;
	}

	if(pr < pa)
	{
		vp += 0;
	}else{
		vp = pr - pa;
	}
	result = vc + vb + vp;

	printf("%d\n", result);
    return 0;
}

