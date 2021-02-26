#include <stdio.h>

int main() {

int slices;

printf("Enter the amount of slices of pizza you ate:\n");
scanf("%d", &slices);
switch(slices) {

	case 1:
	printf("great job\n");
		break;
	case 2:
	printf("nice\n");
		break;
	case 3:
	printf("bad job\n");
		break;
	case 4:
	printf("You're a dissapointment\n");
		break;
	default:
	printf("...\n");
		break;
}

return 0;
}
