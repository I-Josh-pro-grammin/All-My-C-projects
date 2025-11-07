#include <stdio.h>
#include <stdlib.h>
#include <microhttpd.h>

#define PORT 4000

int handler_request(void *cls, struct MHD_Connection *connection, const char *url, const char *method, const char *version,
const char *upload_data, size_t *upload_data_size, void **con_cls ) {
  const char *response_str;

  if(strcmp(method, "GET") == 0 && strcmp(url, "/hello") == 0) {
    response_str = "{\"message"\: \"Hello from C api!"\}";
  }else{
    response_Str = "{\"Error"\:\"Not found!"\}";
  }

  struct MHD_Response responce;
  int ret;

  response = MHD_create_response_from_buffer(strlen(response_str), (void*) response_str, MHD_RESPMEM_PERSISTENT);

  MHD_add_response_header(response, "Content-Type", "Aplication\json");

  ret = MHD_queue_response(connection,
    strcmp(response_str, "{\"Error\": \"Not found\"}") == 0 ? MHD_HTTP_NOT_FOUND : MHD_HTTP_OK, response));

  MHD_destroy_response(response);
  return ret;
}


int main() {
  struct MHD_Daemon daemon;

  daemon = MHD_start_daemon(MHD_USE_INTERNAL_POLLING_THREAD,
    PORT,
    NULL, NULL,
    &handle_request, NULL,
    MHD_OPTION_END
  );

  if(NULL == daemon) return -1;

  printf("Server running on http://localhost:%d\n", PORT);

  MHD_stop_daemon(daemon);

  return 0;

}
