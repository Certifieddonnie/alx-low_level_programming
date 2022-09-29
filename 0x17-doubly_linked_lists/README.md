# **0x17. C - Doubly linked lists**

## **More Info**
Please use this data structure for this project:
	/**
 	* struct dlistint_s - doubly linked list
	* @n: integer
	* @prev: points to the previous node
	* @next: points to the next node
 	*
	* Description: doubly linked list node structure
 	* 
 	*/
	typedef struct dlistint_s
	{
    		int n;
    		struct dlistint_s *prev;
    		struct dlistint_s *next;
	} dlistint_t;

## **Tasks**
### 0. Print list -> 0-print_dlistint.c
### 1. List length -> 1-dlistint_len.c
### 2. Add node -> 2-add_dnodeint.c
### 3. Add node at the end ->  3-add_dnodeint_end.c
### 4. Free list -> 4-free_dlistint.c
### 5. Get node at index -> 5-get_dnodeint.c
### 6. Sum list -> 6-sum_dlistint.c
### 7. Insert at index -> 7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c
### 8. Delete at index -> 8-delete_dnodeint.c
