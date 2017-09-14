/* slstatus configuration */
/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
static const int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

/* output formats */
static const struct arg args[] = {
	/* function, format, argument */
	{ cpu_perc, "[CPU %3s%%] ", NULL    },
	{ ram_perc, "[RAM %2s%%] ", NULL    },
	{ datetime, "[ %s ]",       "%F %T" },
};
