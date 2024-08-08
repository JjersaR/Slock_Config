/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* Patch: auto-timeout */
/* should [command] be run only once? */
static const int runonce = 1;
/* length of time (seconds) until [command] is executed */
static const int timeoffset = 300;
/* command to be run after [timeoffset] seconds has passed */
static const char *command = "systemctl poweroff -i";
