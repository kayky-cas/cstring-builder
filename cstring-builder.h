#ifndef SB_LL_

typedef struct {
	char *data;
	int length;
	int capacity;
} String_Builder;

#endif // SB_ARR_

#ifdef SB_LL_

typedef struct sb_node {
	char *data;
	int length;
	sb_node *next;
	sb_node *prev;
} SB_Node;

typedef struct {
	char *data;
	int length;
} String_Builder;

#endif // SB_LL_
