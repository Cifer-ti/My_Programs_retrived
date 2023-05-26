/* Determines airmileage (distance in miles) from New York to other cities */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct city_info {
	char *city;
	int miles;
};

int compare_cities(const void *key_ptr, const void *element_ptr);

int main(void)
{
	char city_name[81];
	struct city_info *ptr;
	struct city_info mileage[] =
	{ {"Berlin",	3965}, {"BUenos Aires",		5297},
	  {"Cairo",	5602}, {"Calcutta",		7918},
	  {"cape Town",	7764}, {"Caracs",		2132},
	  {"Chicago",	 713}, {"Hong Kong",		8054},
	  {"Honolulu",	4964}, {"Istanbul",		4975} }; /* Not added all cities */

	printf("Enter city name: ");
	scanf("%80[^\n]", city_name);
	printf("%s\n", city_name);
	
	ptr = bsearch(city_name, mileage, sizeof(mileage) / sizeof(mileage[0]),
			sizeof(mileage[0]), compare_cities);

	if (ptr != NULL)
		printf("%s is %d miles from New York city.\n",
				city_name, ptr->miles);
	else
		printf("%s wasn't found.\n", city_name);

	return 0;
}

int compare_cities(const void *key_ptr, const void *element_ptr)
{
	return strcmp((char *) key_ptr, ((struct city_info *) element_ptr)->city);
}
