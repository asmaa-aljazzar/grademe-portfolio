#include <stddef.h>

// record is provided as is. Keep the three fields and their order.
typedef struct record
{
	int	id;
	int	score;
	char	*name;
} record;

// record_with_id returns a copy of src whose id field holds id. The record the
// caller passed keeps every field it had.
record	record_with_id(record src, int id)
{
	record	out = {0, 0, NULL};
	out.id = id;
	out.score = src.score;
	out.name = src.name;
	return (out);
}
