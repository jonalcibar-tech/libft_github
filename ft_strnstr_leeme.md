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
