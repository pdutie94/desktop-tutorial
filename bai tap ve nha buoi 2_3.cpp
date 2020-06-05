#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, delta;
	printf("nhap so a: ");
	scanf("%f", &a);
	printf("nhap so b: ");
	scanf("%f", &b);
	printf("nhap so c: ");
	scanf("%f", &c);
	
	if (a == 0) {
	    if (b == 0) {
		printf("Phuong trinh vo nghiem");    
	    } else {
		if (c == 0) {
		    printf("Phuong trinh co vo so nghiem");
		} else {
		    printf("Phuong trinh co 1 nghiem (x = -c/b): %.1f", (-c/b));
		}
	    }
	} else {
	    delta = (b*b - 4*a*c);
	    if (delta < 0) {
		printf("Phuong trinh vo nghiem");    
	    }
	    if (delta == 0) {
		printf("Phuong trinh co nghiem kep (x1 = x1 = (-b/(2a)): %.1f", (-b/(2*a)));
	    }
	    if (delta > 0) {
		printf("Phuong trinh co 2 nghiem:");    
		printf("\nx1 = %.1f", (-b + sqrt(delta))/(2*a));    
		printf("\nx2 = %.1f", (-b - sqrt(delta))/(2*a));    
	    }
	}
}
