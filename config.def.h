/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;               /* -b  option; if 0, dmenu appears at bottom     */
static int vertpad = 12;             /* vertical padding of bar */
static int sidepad = 12;             /* horizontal padding of bar */
static int user_bh = 12;             /* add an defined amount of pixels to the bar height */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	// "Terminus (TTF):pixelsize=12:antialias=true:autohint=true"
	// "Fixedsys Excelsior:pixelsize=14:antialias=true:autohint=true"
	// "ProggyCleanTTSZ:size=12:antialias=true:autohint=true"
	"Cozette:pixelsize=12:antialias=false:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static char normbg[] = "#222222";
static char normfg[] = "#bbbbbb";
static char selbg[]  = "#005577";
static char selfg[]  = "#eeeeee";
static char outbg[]  = "#000000";
static char outfg[]  = "#00ffff";
static char *colors[SchemeLast][2] = {
	/*     		 fg      bg   */
	[SchemeNorm] = { normfg, normbg },
	[SchemeSel]  = { selfg,  selbg },
	[SchemeOut]  = { outfg,  outbg },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Xresources preferences to load at startup */
ResourcePref resources[] = {
	{ "topbar",  XresInteger, &topbar },
	{ "vertpad", XresInteger, &vertpad },
	{ "sidepad", XresInteger, &sidepad },
	{ "user_bh", XresInteger, &user_bh },
	{ "normbg",  XresString,  &normbg },
	{ "normfg",  XresString,  &normfg },
	{ "selbg",   XresString,  &selbg },
	{ "selfg",   XresString,  &selfg },
	{ "outbg",   XresString,  &outbg },
	{ "outfg",   XresString,  &outfg },
};
