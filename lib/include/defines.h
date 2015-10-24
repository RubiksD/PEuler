/*
Generic defines
*/

#define BIT(__X) (1<<__X)
#define ANSWER_INT(__X) printf("%d\n",__X);\
return 0

#define ANSWER_LINT(__X) printf("%ld\n",__X);\
return 0

#define ASSERT printf("Something is not rignt in %d in %s\n",__LINE__,__func__)
