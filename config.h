/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"xft:Source Code Pro:size=10",
	"xft:Consolas:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* colorscheme */
static const char col_center_darkest[]   = "#222C00";
static const char col_center_darker[]    = "#516709";
static const char col_center_middle[]    = "#89A236";
static const char col_center_lighter[]   = "#C7DD80";
static const char col_center_lightest[]  = "#EEF9CE";

static const char col_colder_darkest[]   = "#0D2800";
static const char col_colder_darker[]    = "#245D08";
static const char col_colder_middle[]    = "#519331";
static const char col_colder_lighter[]   = "#90C975";
static const char col_colder_lightest[]  = "#D1ECC4";

static const char col_warmer_darkest[]   = "#2E2C00";
static const char col_warmer_darker[]    = "#6C6709";
static const char col_warmer_middle[]    = "#AAA439";
static const char col_warmer_lighter[]   = "#E8E287";
static const char col_warmer_lightest[]  = "#FFFDD3";

static const char *colors[SchemeLast][2] = {
				/*   fg                   bg                */
	[SchemeNorm] = { col_colder_lighter,  col_colder_darkest },
	[SchemeSel]  = { col_colder_lightest, col_colder_middle },
	[SchemeOut]  = { col_colder_darkest,  col_colder_middle },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
