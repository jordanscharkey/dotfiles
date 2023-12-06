/* NOTE: `internet-status` is available in my scripts repository, linked below: */
/* https://git.schark.online/scripts */
/* https://github.com/jordanscharkey/scripts */

static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
	{"\ Volume:", "pulsemixer --get-volume | sed 's/ .*//'", 5, 0},
	{"Internet:", "internet-status", 10, 0},
	{"", "date '+%b %d (%a) %I:%M%p'", 30, 0},
};

static char delim[] = " | ";
static unsigned int delimLen = 5;
