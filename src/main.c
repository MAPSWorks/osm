#include <stdio.h>
#include "osmaps.h"


int
main(int argc, char **argv) {

	char *docname;
		
	if (argc <= 1) {
		printf("Usage: %s file\n", argv[0]);
		return(0);
	}

	docname = argv[1];
	parseDoc(docname);

	return 0;
}
