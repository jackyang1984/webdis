#ifndef CONF_H
#define CONF_H

struct conf {

	char *redis_host;
	short redis_port;
	char *redis_auth;

	char *http_host;
	short http_port;

	struct acl *perms;
};

struct conf *
conf_read(const char *filename);

void
conf_free(struct conf *conf);

#endif /* CONF_H */
