#ifdef SASL_MONOLITHIC
#define sasl_server_plug_init md5_sasl_server_plug_init
#define sasl_client_plug_init md5_sasl_client_plug_init
#endif
#include <sasl_plugin_decl.h>
