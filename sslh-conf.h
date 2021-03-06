/* Generated by conf2struct (https://www.rutschle.net/tech/conf2struct)
 * on Thu Nov 22 17:16:04 2018. */

struct config_protocols_items {
	const char*	name;
	const char*	host;
	const char*	port;
	int	service_is_present;
	const char*	service;
	int	fork;
	int	log_level;
	int	keepalive;
	int sni_hostnames_len;
	const char** sni_hostnames;
	int alpn_protocols_len;
	const char** alpn_protocols;
	int regex_patterns_len;
	const char** regex_patterns;
};


struct config_listen_items {
	const char*	host;
	const char*	port;
	int	keepalive;
};


struct config_items {
	int	verbose;
	int	foreground;
	int	inetd;
	int	numeric;
	int	transparent;
	int	timeout;
	int	user_is_present;
	const char*	user;
	int	pidfile_is_present;
	const char*	pidfile;
	const char*	chroot;
	const char*	syslog_facility;
	const char*	on_timeout;
	int listen_len;
	struct config_listen_items* listen;
	int protocols_len;
	struct config_protocols_items* protocols;
};

int config_parser(
        config_setting_t* cfg, 
        struct config_items* config, 
        const char** errmsg);

void config_print(
    struct config_items *config,
    int depth);
