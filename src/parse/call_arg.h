#ifndef __parse_call_arg_h__
#define __parse_call_arg_h__

typedef struct
{
	bool is_return;
	union
	{
		parse_expr_t* expr;
		parse_label_t label;
	};
} parse_call_arg_t;

typedef struct
{
	unsigned           count;
	parse_call_arg_t** call_arg;
} parse_call_arg_list_t;


parse_call_arg_t* parse_call_arg(
	const sparse_t* src, const char* ptr,
	unsigned* len);
void parse_call_arg_delete(
	parse_call_arg_t* call_arg);

parse_call_arg_list_t* parse_call_arg_list(
	const sparse_t* src, const char* ptr,
	unsigned* len);
void parse_call_arg_list_delete(
	parse_call_arg_list_t* call_arg);

#endif