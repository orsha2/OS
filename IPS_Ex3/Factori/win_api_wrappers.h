
#ifndef WIN_API_WRAPPERS
#define WIN_API_WRAPPERS

#include <windows.h>
#include "error_mgr.h"

// file api 
error_code_t open_file(HANDLE* p_file_handle, char* file_name, DWORD desired_access, DWORD share_mode, DWORD creation_disposition, const char* source_file, int source_line, const char* source_func_name);

error_code_t set_file_pointer(HANDLE file, int offset, int starting_position, const char* source_file, int source_line, const char* source_func_name); 

error_code_t set_end_of_file(HANDLE file, const char* source_file, int source_line, const char* source_func_name);

error_code_t read_file(HANDLE* p_file, char** p_line, int bytes_to_read, DWORD* p_bytes_read, const char* source_file, int source_line, const char* source_func_name);

error_code_t write_file(HANDLE file, char* line, int bytes_to_read, DWORD* p_bytes_read, const char* source_file, int source_line, const char* source_func_name);

error_code_t read_line(HANDLE file, char** p_line_buffer, int* p_line_length);

// threads api 
error_code_t wait_for_single_object(HANDLE object_handle, DWORD wait_time, const char* source_file, int source_line, const char* source_func_name);

error_code_t get_exit_code_thread(HANDLE thread_handle, DWORD* p_thread_exit_code, const char* source_file, int source_line, const char* source_func_name);

error_code_t terminate_thread(HANDLE thread_handle, DWORD brutal_termination_code, const char* source_file, int source_line, const char* source_func_name);

error_code_t create_thread(LPTHREAD_START_ROUTINE StartAddress, LPVOID ParameterPtr, LPDWORD ThreadIdPtr, HANDLE* p_thread_handle);

error_code_t close_handle(HANDLE object_handle, int invalid_handle_value, const char* source_file, int source_line, const char* source_func_name); 

#endif // WIN_API_WRAPPERS 