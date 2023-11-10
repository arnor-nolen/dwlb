// use ipc functionality
static bool ipc = false;
// initially hide all bars
static bool hidden = false;
// initially draw all bars at the bottom
static bool bottom = false;
// hide vacant tags
static bool hide_vacant = false;
// vertical pixel padding above and below text
static uint32_t vertical_padding = 2;
// allow in-line color commands in status text
static bool status_commands = true;
// center title text
static bool center_title = false;
// use title space as status text element
static bool custom_title = false;
// scale
static uint32_t buffer_scale = 2;
// font
static char *fontstr = "Fira Code Nerd Font Mono:size=16:antialias=true:autohint=true";
// tag names if ipc is disabled
static char *tags_names[] = { "", "", "", "", "", "", "󰙯", "", "" };

// set 16-bit colors for bar
// 8-bit color can be converted to 16-bit color by simply duplicating values e.g
// 0x55 -> 0x5555, 0xf1 -> 0xf1f1
static pixman_color_t active_fg_color = { .red = 0x1616, .green = 0x1616, .blue = 0x1d1d, .alpha = 0xffff, };
static pixman_color_t active_bg_color = { .red = 0x7676, .green = 0x9494, .blue = 0x6a6a, .alpha = 0xffff, };
static pixman_color_t occupied_fg_color = { .red = 0xdcdc, .green = 0xd7d7, .blue = 0xbaba, .alpha = 0xffff, };
static pixman_color_t occupied_bg_color = { .red = 0x1616, .green = 0x1616, .blue = 0x1d1d, .alpha = 0xffff, };
static pixman_color_t inactive_fg_color = { .red = 0xdcdc, .green = 0xd7d7, .blue = 0xbaba, .alpha = 0xffff, };
static pixman_color_t inactive_bg_color = { .red = 0x1616, .green = 0x1616, .blue = 0x1d1d, .alpha = 0xffff, };
static pixman_color_t urgent_fg_color = { .red = 0xdcdc, .green = 0xd7d7, .blue = 0xbaba, .alpha = 0xffff, };
static pixman_color_t urgent_bg_color = { .red = 0x1616, .green = 0x1616, .blue = 0x1d1d, .alpha = 0xffff, };
