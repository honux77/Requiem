/*REQUIEM -definition file */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

/********************************************************
 *         definitions                                  *
 ********************************************************/

#define BOOL		int
#define DQUOTE		'"'
#define EOL			'\n' /*define end of line */
#define FALSE		0
#define FAIL		-1
#define FIRSTGTR	1
#define FIRSTLSS	-1
#define HTSIZE		1009 /*must be prime to hash */
#define INDEX		0	
#define NEWLINE		'\n'			
#define NO_ERROR	0
#define NOINDEX		1
#define TERMINATOR	';'
#define SLASH		'/'
#define TRUE		1
#define	VOID		int

/********************************************************
 *         external function definitions                *
 ********************************************************/
  
extern char *malloc();
extern char *rmalloc();
extern char *calloc();
extern char **dcalloc();
extern char *sprintf();
extern char *strcat();
extern char *strcpy();

/********************************************************
 *         macro definitons                             *
 ********************************************************/

#define is_alpha(ch) ((((ch) >= 'A' && (ch) <= 'Z') ||\
					   ((ch) >= 'a' && (ch) <= 'z')) ? 1 : 0)
#define is_digit(x) ((x >= '0' && x <= '9') ? 1: 0)
#define is_blank(x) ((x == ' ') ? 1: 0)
#define to_decimal(x) (x-'0')
#define to_upper(ch) (((ch) >= 'a' && (ch) <= 'z')?\
					   (ch) - 'a' + 'A' : (ch))
#define put_back(ch) (put_back_char = (ch))
#define to_lower(ch) (((ch) >= 'A' && (ch) <= 'Z') ?\
					   (ch) - 'A' + 'a' : (ch))
#define BELL			putchar(7)
#define MAX(x, y)		(((x) >= (y)) ? (x) : (y))
#define MIN(x, y)		(((x) <= (y)) ? (X) : (y))
#define is_sign(x)		((x == '-' || x == '+') ? 1: 0)
#define MALLOC(x)		((x *)malloc(sizeof(x)))
#define CALLOC(n,x)		((x *)calloc((unsigned) n, sizeof(x)))


/********************************************************
 *         simplilfy inline code macro                  *
 ********************************************************/

#define ATTRIBUTE_KEY saptr->sa_attr->at_key

