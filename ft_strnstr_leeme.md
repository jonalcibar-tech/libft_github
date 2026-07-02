| big     | little  | len             | Resultado                     |
| ------- | ------- | --------------- | ----------------------------- |
| `"abc"` | `"bc"`  | suficiente      | puntero a `"bc"`              |
| `"abc"` | `"bc"`  | insuficiente    | `NULL`                        |
| `"abc"` | `""`    | cualquier valor | `big`                         |
| `""`    | `""`    | cualquier valor | `big` (puntero al `'\0'`)     |
| `""`    | `"a"`   | cualquier valor | `NULL`                        |
| `"abc"` | `"a"`   | `0`             | `NULL`                        |
| `"abc"` | `""`    | `0`             | `big`                         |
| `NULL`  | `"abc"` | cualquiera      | **Comportamiento indefinido** |
| `"abc"` | `NULL`  | cualquiera      | **Comportamiento indefinido** |
| `NULL`  | `NULL`  | cualquiera      | **Comportamiento indefinido** |

DESCRIPTION
    The strnstr() function locates the first occurence of the
	null-terminated string needle in the string haystack, where not
	more than len characters are searched.
    Characters that appear after a '\0' character are not searched.
RETURN VALUES
    If needle is an empty string, haystack is returned;
	if needle occurs nowhere in haystack, NULL is returned;
	otherwise a pointer to the first character of the first occurence
	of needle is returned.

